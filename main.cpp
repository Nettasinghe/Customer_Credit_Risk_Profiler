///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Customer Credit Risk Profiler -
// This is a Telco Customer Credit Risk Profiling Engine to calculate the overall credit risk of the 
// customer in terms of a point system derived by a complex logic based on Payment Delay (5 scenarios),
// payment gap (3 scenarios) and Network Stay. The complete logic is depicted in "Customer Credit Risk 
// Profiler.pdf"
// 
////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////
// main.cpp
// Customer Credit Profiler Engine
// main method contains here
// developer - Chandika Nettasinghe
// code start - 2010-April
//////////////////////////////////////////////////////////////////////

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
// 06-april-2010 ver 1.0.0 
//	1) Initial version
//
// 01-sep-2010 ver 1.0.1 
//	1) CR for Addendum
//
// 02-dec-2010 ver 1.0.2 
//	1) GAP_1 = 0 AND DELAY_1 = 0 AND RATING_1 <> 1 bug fixed
//	2) TOT_OUT_1 <= 0 AND DELAY_1 > 0 bug fixed
//	3) TOT_OUT_1 <= 0 AND GAP_1 > 0 bug fixed
//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


#pragma warning(disable:4786)

#include <fstream>
#include <time.h>

#include "data_containers.h"

	churn		*gsm_churn;
	char		*LogFileName;
	char		*InfoFileName;


int main(int argc,char *argv[])
{
	char *ver = "1.0.2";

	cout<<"Customer Profiler Engine "<<ver<<endl
	<<"Build Time "<<__DATE__<<" at "<<__TIME__<<endl
	<<"Dialog Telekom PLC"<<endl
	<<"Colombo, Sri Lanka"<<endl<<endl;


	
	// Log file
	char zTime[30];
	/*------- get time -------*/
	time_t t;
	time(&t);
	/*------- get time -------*/
	strftime(zTime, 30, "%Y%B%d%H%M%S", localtime(&t));
	LogFileName = new char[100];
	InfoFileName= new char[100];


	FILE *login;
	char cust_care_login[128];
	

	// get config data
	if( (login  = fopen( "./profiler.config", "r" )) == NULL )
	{
		printf( "The file 'profiler.config' was not opened\n" );
		exit(0);
	}

	fscanf( login, "%s", cust_care_login );
	//strcpy(cust_care_login, "ccbs2/ccbs2@camrep2.dialog.dialoggsm.com");

	if( fclose( login ) )
		printf( "The file 'profiler.config' was not closed\n" );

	//sprintf(LogFileName, "./profiler_%s%s.csv",zTime, gsm_churn->check_date );
	sprintf(LogFileName, "./profiler_log%s.txt",zTime );
	sprintf(InfoFileName, "./profiler_info%s.txt",zTime );

	gsm_churn				= new churn( (const char*)LogFileName, (const char*)InfoFileName);


	db_connect_cust_care(cust_care_login);

	gsm_churn->db_get_sysdate();
	
	cout << gsm_churn->sys_date << "|" << endl;

	fprintf(gsm_churn->log_to_file,"sys_date = %s|\n",gsm_churn->sys_date);


	gsm_churn->db_read_cx_payment_delay_risk();
	gsm_churn->db_read_cx_payment_gap_risk();
	gsm_churn->db_read_cx_network_stay_points();
	gsm_churn->db_read_cx_credit_ratings();

	gsm_churn->db_read_bill_period_transaction_master();
	
	gsm_churn->db_read_fb_contract_balances_new();

	cout << "fb_contract_balances_pay_map.size() = " << gsm_churn->fb_contract_balances_pay_map.size() << endl;

	cout << "fb_contract_balances_map.size() = " << gsm_churn->fb_contract_balances_map.size() << endl;

	cout << "bill_map.size() = " << gsm_churn->bill_map.size() << endl;

	gsm_churn->clear_bill_period_tx_master();	//memory cleanup

	gsm_churn->db_read_cam_contract_package();

	cout << "network_stay_map.size() = " << gsm_churn->network_stay_map.size() << endl;

	gsm_churn->process_data_new();
	gsm_churn->clear_bill_map(); //memory cleanup
	gsm_churn->process_final_final();
	gsm_churn->clear_other_maps();	//memory cleanup

	gsm_churn->db_truncate_cx_profiled_customers();
	gsm_churn->insert_to_database_summary();

	gsm_churn->db_truncate_cx_profiled_details();
	gsm_churn->insert_to_database();

	cout << "ccbs_profile_map.size() = " << gsm_churn->ccbs_profile_map.size() << endl;
	//cout << "bill_period_transaction_master_k_map.size() = " << gsm_churn->bill_period_transaction_master_k_map.size() << endl;

	db_disconnect_cust_care();

	delete gsm_churn;

	return 0;
}



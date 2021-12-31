

//////////////////////////////////////////////////////////////////////
//
// profiler.cpp
// Customer Credit Risk Profiler Engine class implementation
// developer - Chandika Nettasinghe
// code start - 2010-April
//
//////////////////////////////////////////////////////////////////////


#pragma warning(disable:4786)

#include "data_containers.h"
#include <time.h>

extern	char		*LogFileName;

// -------------churn----------------------------

bool cam_contract::init()
{
	contract_id	= 0;							
	subscriber_node_id = 0;						
	finance_broker_id = "";						
	is_payment_responsible = "";	
	web_bill = "";									
	bill_format_code = "";						
	bill_dispatch_type_id = 0;					
	bill_run_code = "";							
	address_id = 0;								
	is_charity = "";								
	customer_category = "";						
	credit_type = "";							
	credit_limit = 0;							
	remarks = "";								
	pending_status = "";							
	contract_type = "";							
	auto_disconnect_date = "";					
	nexus_card_no = "";							
	nexus_card_type = "";						
	nexus_exp_date = "";							
	club_vision_type = "";					
	status = "";									
	start_date = "";							
	end_date = "";								
	created_user = "";							
	updated_user = "";											

	return true;
}

bool cam_connection::init()
{
	connection_id = 0;					
	package_contract_id = 0;
	package_service_id = 0;
	service_start_date = "";		
	rental_activation_date = "";
	rental = 0.0;
	status = "";
	status_reason_id = "";
	pending_status = "";
	image_id = 0;
	remarks = "";
	used_for_provisioning = "";
	is_used_for_rating = "";
	format_id = 0;
	auto_disconnect_date = "";
	start_date = "";
	end_date = "";
	created_user = "";
	updated_user = "";				

	return true;
}

bool dyn_1_connection::init()
{
	connection_id = 0;					
	service_id = 0;						
	format_id = 0;						
	status = "";							
	sim = "";							
	imsi = "";							
	imei = "";							
	mobile_no = "";						
	pre_post = "";						
	updated_user = "";				

	return true;
}

bool cam_subscriber_node::init()
{
	subscriber_node_id = 0 ;				
	subscriber_profile_id = 0 ;			
	parent_node_id = 0 ;					
	bill_despatch_type_id = 0 ;			
	address_id = 0 ;						

	finance_broker_id = "" ;				
	remarks = "" ;						
	description = "" ;					
	is_payment_responsible = "" ;		
	web_bill = "" ;						
	bill_format_code = "" ;				
	bill_run_code = "" ;					
	can_be_parent = "" ;					
	is_charity = "" ;						
	nexus_card_number = "" ;				
	nexus_card_type = "" ;				
	nexus_exp_date = "" ;			
	status = "" ;						
	start_date = "" ;					
	end_date = "" ;					
	created_user = "" ;					
	updated_user = "" ;			

	return true;
}

bool cam_contract_package::init()
{
	contract_package_id = 0;					
	contract_id = 0;							
	package_id = "" ;								
	status = "" ;									
	pending_status = "" ;							
	is_supplementary = "" ;						
	is_original_assignment = "" ;					
	agent_code = "" ;								
	branch_code = "" ;							
	phone_model = "" ;							
	purchase_type = "" ;							
	auto_disconnect_date = "" ;					
	original_package_start_date = "" ;			
	start_date = "" ;								
	end_date = "" ;								
	created_user = "" ;							
	updated_user = "" ;											

	return true;
}



// sets the current pointer to correct churn_data
bool churn::set_current(int image_id)
{
	i_current = churn_map.find(image_id);
	if(i_current !=churn_map.end())
	{
		current=&(*i_current).second;
		return true;
	}
	return false;
}

void churn::set_dates(char* p_start_date, char* p_end_date)
{
	start_date.set_date(p_start_date);
	end_date.set_date(p_end_date);
}

string	churn::get_mobile_no(int connection_id)
{
	CONNECTION_TO_MOBILE_DEF::iterator i=connection_to_mobile_map.find(connection_id);

	if (i==connection_to_mobile_map.end())
		return "UNDEF";
	else
		return (*i).second;
}


bool churn::insert_to_database()
{
	cout << endl;
	cout << "rows to insert = " << profiled_cx_map.size() << endl;

	div_t div_result;

	div_result = div( profiled_cx_map.size(), bulk_insert_size );
   
	remainder_insert_size	= div_result.rem;
	insert_iterations		= div_result.quot;

	i_db_insert = profiled_cx_map.begin();

	if ( (insert_iterations > 0) && (i_db_insert != profiled_cx_map.end()) )
	{
		db_insert_churn_data();
		db_insert_churn_data_remainder();
	}
	else if ( (i_db_insert != profiled_cx_map.end()) &&  (remainder_insert_size > 0) )
	{
		db_insert_churn_data_remainder();
	}

	if (i_db_insert == profiled_cx_map.end())
	{
		cout << "Iterotor @ map end after database insertion" << endl;
		return true;
	}
	else
	{
		cout << "ERROR - Iterotor not @ map end after database insertion" << endl;
		return false;
	}
}


bool churn::insert_to_database_summary()
{
	cout << endl;
	cout << "rows to insert = " << profiled_cx_map.size() << endl;

	div_t div_result;

	div_result = div( profiled_cx_map.size(), bulk_insert_size );
   
	remainder_insert_size	= div_result.rem;
	insert_iterations		= div_result.quot;

	i_db_insert = profiled_cx_map.begin();

	if ( (insert_iterations > 0) && (i_db_insert != profiled_cx_map.end()) )
	{
		db_insert_churn_data_summary();
		db_insert_churn_data_remainder_summary();
	}
	else if ( (i_db_insert != profiled_cx_map.end()) &&  (remainder_insert_size > 0) )
	{
		db_insert_churn_data_remainder_summary();
	}

	if (i_db_insert == profiled_cx_map.end())
	{
		cout << "Iterotor @ map end after database insertion" << endl;
		return true;
	}
	else
	{
		cout << "ERROR - Iterotor not @ map end after database insertion" << endl;
		return false;
	}
}

// -------------churn-end----------------------------

// -------------churn_data--------------------------------

/*
bool reject_data::process_data(reng_date_time call_time)
{
	count++;

	if (max_call_time < call_time)
		max_call_time = call_time;

	if (call_time < min_call_time)
		min_call_time = call_time;

	return true;
}
*/

bool churn_data::init()
{
	contract_id		=0;
	connection_id	=0;
	phone_no		="";
	credit_limit	=0;
	outstanding		=0;
	subscriber_node_id	=0;
	is_payment_responsible = "";
	subscriber_profile_id=0;
	amount			= 0.0;
	last_billamt	= 0.0;
	brought_forward = 0.0;
	interim_bill_amount = 0.0;
	minimum_payment = 0.0;

	return true;
}


// -------------churn_data-end------------------------------

bool cam_subscriber_profile::init()
{
	title					= "";				
	name1					= "";				
	name2					= "";	
	identification_number	= "";
	communication_language_id="";
	
	return true;
}



bool churn::process()
{
	cout << "processing " << endl;
	cout << "processing end" << endl;

	return true;
}

void churn::transition_error(char *msg)
{
    cout << endl << msg << endl;
	transition = false;
}

char* churn::decode_payment_mode(string pay_mode)
{
	char *m;

	if ( strncmp(pay_mode.c_str(), "CARD", 4) == 0 )
	{
		m = "CC";
	}
	else if ( strncmp(pay_mode.c_str(), "CASH", 4) == 0 )
	{
		m = "CSH";
	}
	else if ( strncmp(pay_mode.c_str(), "CHEQ", 4) == 0 )
	{
		m = "CHQ";
	}
	else
	{
		m = "DD";
	}

	return m;
}

bool churn::hlr_ccbs_compare()
{
	CCBS_PROFILE_DEF::iterator	i_ccbs;
	HLR_PROFILE_DEF::iterator	i_hlr;
	hlr_ccbs_mismatch			mismatch;

	int hlr_count = 0;

	ofstream f_log(LogFileName, ios::out | ios::app);

	for(i_hlr =hlr_profile_map.begin(); i_hlr!=hlr_profile_map.end(); i_hlr++)
	{
		//cout <<  (*i_hlr).first << "," << (*i_hlr).second.msisdn << endl;

		//hlr_count ++;
		//cout << "hlr_count = " << hlr_count << endl;
		i_ccbs = ccbs_profile_map.find( (*i_hlr).first );

		if ( i_ccbs == ccbs_profile_map.end() )
		{
			mismatch.init();
			mismatch.imsi		= (*i_hlr).first;
			mismatch.msisdn		= (*i_hlr).second.msisdn;
			mismatch.reason_id	= 1;		// No matching profile in CCBS

			//cout << "No matching profile in CCBS for IMSI " << (*i_hlr).first << endl;
			f_log <<  (*i_hlr).first << "," << (*i_hlr).second.msisdn << endl;
		hlr_count ++;

			mismatch_map.insert(MISMATCH_DEF::value_type((*i_hlr).first, mismatch));
		}
		else
		{
			(*i_ccbs).second.hlr_profile_found	= true;
		}
	}

	cout <<  hlr_count << " profiles in HLR without matching CCBS profiles" << endl;

	/*

	for(i_ccbs = ccbs_profile_map.begin(); i_ccbs!=ccbs_profile_map.end(); i_ccbs++)
	{
		i_hlr = hlr_profile_map.find( (*i_ccbs).first );

		if ( i_hlr == hlr_profile_map.end() )
		{
			mismatch.init();
			mismatch.imsi		= (*i_ccbs).first;
			mismatch.reason_id	= 2;		// No matching profile in HLR

			mismatch_map.insert(MISMATCH_DEF::value_type((*i_hlr).first, mismatch));
		}
		else
		{
			//(*i_hlr).second.ccbs_profile_found	= true;
		}
	}
*/

	return true;
}

// -> ////////////////////////////////////////

bool transaction_key::operator < (const transaction_key &s) const
{
	if(node_id < s.node_id)
		return true;
	else if	(
		(node_id == s.node_id) && 
		(end_date_rdt < s.end_date_rdt)
		)
		return true;

	return false;
}

/*
bool bill_key::operator < (const bill_key &s) const
{
	if(node_id < s.node_id)
		return true;
	else if	(
		(node_id == s.node_id) && 
		(end_date_rdt < s.end_date_rdt)
		)
		return true;

	return false;
}

*/

bool bill_key::operator < (const bill_key &s) const
{
	if(node_id < s.node_id)
		return true;
	else if	(
		(node_id == s.node_id) && 
		(s.end_date_rdt < end_date_rdt)
		)
		return true;

	return false;
}


bool churn::process_data()
{
	return true;
}

/* //backup on 01-09-2010 
bool churn::process_data_new()
{
	bill_key				bk;
	fb_contract_balances	fcb;
	reng_date_time			next_bill_end_date_rdt;

	next_bill_end_date_rdt.date.init();
	next_bill_end_date_rdt.time.init();

	int		node_id_current		= 0;
	int		node_id_previous	= 0;
	int		collection_size		= 0;

	cout << "processing " << endl;

	cout << "bill_map.size() = " << bill_map.size() << endl;
	cout << "processing started" << endl;

	fcb.init();	// to_do ??????

	if (bill_map.size() != 0 )
	{
		//BILL_DEF::iterator i_init = bill_map.begin();
		//node_id_current = (*i_init).first.node_id;

		node_id_previous = 0;	// Assuming no 0 node_id s

		for (BILL_DEF::iterator i = bill_map.begin(); i != bill_map.end(); i++)
		{
			fcb		= (*i).second;
			bk		= (*i).first;

			node_id_current = bk.node_id;

			if ( node_id_current != node_id_previous )
			{	
				// A new node found
				collection_size		= 1;
				next_bill_end_date_rdt.set_date_time(sys_date);	

				fcb.next_bill_end_date_rdt	= next_bill_end_date_rdt;

				//cout << "next_bill_end_date_rdt --- = " << next_bill_end_date_rdt << endl;

				// Hence inserting the previous item to second_bill_map
				second_bill_map.insert(BILL_DEF::value_type(bk, fcb));

				node_id_previous		= node_id_current;
				next_bill_end_date_rdt	= fcb.end_date_rdt;
			}
			else	// ( node_id_current == node_id_previous )
			{
				// Still going on current node
				collection_size++;
				fcb.next_bill_end_date_rdt	= next_bill_end_date_rdt;
				
				if (collection_size < 7)
				{
					second_bill_map.insert(BILL_DEF::value_type(bk, fcb));
				}
				
				node_id_previous		= node_id_current;
				next_bill_end_date_rdt	= fcb.end_date_rdt;
			}
		}
	}
	else
	{
		cout << "Map size zero, hence nothing to process" << endl;
	}

	cout << "second_bill_map.size() = " << second_bill_map.size() << endl;
	cout << "processing end" << endl;

	return true;
}

double	churn::get_total_payments(int node_id, reng_date_time first_date, reng_date_time second_date)
{
	double tot_pay = 0;

	FB_CONTRACT_BALANCES_DEF::iterator i_fcb;

	for (i_fcb = fb_contract_balances_pay_map.equal_range(node_id).first; i_fcb != fb_contract_balances_pay_map.equal_range(node_id).second; i_fcb++)
	{
		if ( (first_date < (*i_fcb).second.tran_date_rdt ) && ( (*i_fcb).second.tran_date_rdt < second_date ) )
		{
			tot_pay = tot_pay + (*i_fcb).second.tran_amount;
		}
	}

	return tot_pay;
}

*/


bool churn::process_data_new()
{
	bill_key				bk;
	fb_contract_balances	fcb;
	reng_date_time			next_bill_end_date_rdt;

	next_bill_end_date_rdt.date.init();
	next_bill_end_date_rdt.time.init();

	int		node_id_current		= 0;
	int		node_id_previous	= 0;
	int		collection_size		= 0;

	cout << "processing " << endl;

	cout << "bill_map.size() = " << bill_map.size() << endl;
	cout << "processing started" << endl;

	fcb.init();	// to_do ??????

	if (bill_map.size() != 0 )
	{
		//BILL_DEF::iterator i_init = bill_map.begin();
		//node_id_current = (*i_init).first.node_id;

		node_id_previous = 0;	// Assuming no 0 node_id s

		for (BILL_DEF::iterator i = bill_map.begin(); i != bill_map.end(); i++)
		{
			fcb		= (*i).second;
			bk		= (*i).first;

			node_id_current = bk.node_id;

			if ( node_id_current != node_id_previous )
			{	
				// A new node found
				collection_size		= 1;
				next_bill_end_date_rdt.set_date_time(sys_date);	

				fcb.next_bill_end_date_rdt	= next_bill_end_date_rdt;

				//cout << "next_bill_end_date_rdt --- = " << next_bill_end_date_rdt << endl;

				// Hence inserting the previous item to second_bill_map
				// Skiping the current bill - commented for Addendum
				// second_bill_map.insert(BILL_DEF::value_type(bk, fcb));

				node_id_previous		= node_id_current;
				next_bill_end_date_rdt	= fcb.end_date_rdt;
			}
			else	// ( node_id_current == node_id_previous )
			{
				// Still going on current node
				collection_size++;
				fcb.next_bill_end_date_rdt	= next_bill_end_date_rdt;
				
				//if (collection_size < 7)
				if (collection_size < 8)	// For Addendum, skipped the current bill
				{
					second_bill_map.insert(BILL_DEF::value_type(bk, fcb));
				}
				
				node_id_previous		= node_id_current;
				next_bill_end_date_rdt	= fcb.end_date_rdt;
			}
		}
	}
	else
	{
		cout << "Map size zero, hence nothing to process" << endl;
	}

	cout << "second_bill_map.size() = " << second_bill_map.size() << endl;
	cout << "processing end" << endl;

	return true;
}

double	churn::get_total_payments(int node_id, reng_date_time first_date, reng_date_time second_date)
{
	double tot_pay = 0;

	FB_CONTRACT_BALANCES_DEF::iterator i_fcb;

	for (i_fcb = fb_contract_balances_pay_map.equal_range(node_id).first; i_fcb != fb_contract_balances_pay_map.equal_range(node_id).second; i_fcb++)
	{
		if ( (first_date < (*i_fcb).second.tran_date_rdt ) && ( (*i_fcb).second.tran_date_rdt < second_date ) )
		{
			tot_pay = tot_pay + (*i_fcb).second.tran_amount;
		}
	}

	return tot_pay;
}

double	churn::get_total_other_payments(int node_id, reng_date_time first_date, reng_date_time second_date)
{
	double tot_pay = 0;

	FB_CONTRACT_BALANCES_DEF::iterator i_fcb;

	for (i_fcb = fb_contract_balances_other_pay_map.equal_range(node_id).first; i_fcb != fb_contract_balances_other_pay_map.equal_range(node_id).second; i_fcb++)
	{
		if ( (first_date < (*i_fcb).second.tran_date_rdt ) && ( (*i_fcb).second.tran_date_rdt < second_date ) )
		{
			tot_pay = tot_pay + (*i_fcb).second.tran_amount;
		}
	}

	return tot_pay;
}

double	churn::get_delay(int node_id, reng_date_time end_date_rdt, reng_date_time due_date_rdt, string due_date)
{
	double delay = 0.0;

	//delay = db_first_minus_second(sys_date, (char *)due_date.c_str());
	delay = date_first_minus_second(sys_date_rdt, due_date_rdt);


	FB_CONTRACT_BALANCES_DEF::iterator i_fcb;

	
	for (i_fcb = fb_contract_balances_pay_map.equal_range(node_id).first; i_fcb != fb_contract_balances_pay_map.equal_range(node_id).second; i_fcb++)
	{
		if ( (end_date_rdt < (*i_fcb).second.tran_date_rdt ) && ( (*i_fcb).second.tran_date_rdt < due_date_rdt ) )
		{
			// A payment between end_date & due_date
			// Hence delay = 0
			return 0;			
		}
		else if (due_date_rdt < (*i_fcb).second.tran_date_rdt )
		{
			float this_delay = 0.0; 

			//this_delay = db_first_minus_second((char *)(*i_fcb).second.tran_date.c_str(), (char *)due_date.c_str()); 

			//this_delay = db_first_minus_second((char *)(reng_date_time_to_string((*i_fcb).second.tran_date_rdt).c_str()), (char *)due_date.c_str());

			this_delay = date_first_minus_second((*i_fcb).second.tran_date_rdt, due_date_rdt);

			if (this_delay < delay)
			{
				delay = this_delay;
			}
		}
	}

	return delay;
}

void churn::clear_bill_period_tx_master()
{
	printf("\nclear_bill_period_tx_master\n");

	TRANSACTION_MASTER_DEF::iterator i = bill_period_transaction_master_map.begin();
	for( ; i != bill_period_transaction_master_map.end(); i++)
	{
		if(i->second)
		{
			delete i->second;
			i->second = NULL;
		}
	}

	bill_period_transaction_master_map.clear();
}

void churn::clear_other_maps()
{
	printf("\nclear_other_maps\n");

	fb_contract_balances_map.clear();
	fb_contract_balances_pay_map.clear();
	second_bill_map.clear();
}

void churn::clear_bill_map()
{
	printf("\nclear_bill_map\n");

	bill_map.clear();
}

//////////////////////////////////////////////////////////////////////////
bool churn::process_final_final()
{
	bill_key				bk;
	fb_contract_balances	*fcb;

	PROFILED_CX_DEF::iterator	i_cx;
	profiled_cx					new_cx;
	profiled_cx					*existing_cx;

	NETWORK_STAY_DEF::iterator i_ns;

	cout << "processing final" << endl;
	cout << "bill_map.size() = " << bill_map.size() << endl;
	cout << "processing started" << endl;

	int loop_count = 1;

	cout<<"second_bill_map.size "<<second_bill_map.size()<<endl;

	if (second_bill_map.size() != 0 )
	{
		for (BILL_DEF::iterator i = second_bill_map.begin(); i != second_bill_map.end(); i++)
		{
			fcb		= &(*i).second;
			bk		= (*i).first;

			//fcb->tot_pay		= get_total_payments(bk.node_id, fcb->end_date_rdt, fcb->next_bill_end_date_rdt);
			fcb->tot_pay		= get_total_payments(bk.node_id, fcb->end_date_rdt, fcb->next_bill_end_date_rdt) + get_total_other_payments(bk.node_id, fcb->end_date_rdt, fcb->next_bill_end_date_rdt);

			fcb->tot_pay				= ((int)(fcb->tot_pay * 100)) / 100;

			
			fcb->cal_contract_balance = get_calculated_contract_balance(bk.node_id, fcb->tran_date_rdt);

			fcb->cal_contract_balance	= ((int)(fcb->cal_contract_balance * 100)) / 100;

			

			if (fcb->cal_contract_balance <= 0) 
			{
				fcb->delay		= 0;
				fcb->delay_risk	= 0;
			}
			else
			{
				fcb->delay			= get_delay(bk.node_id, fcb->end_date_rdt, fcb->due_date_rdt, reng_date_time_to_string(fcb->due_date_rdt));
				fcb->delay_risk		= get_delay_risk(fcb->delay);
			}

			//fcb->delay_risk		= get_delay_risk(fcb->delay);

		
			//fcb->gap			= fcb->cal_contract_balance - fcb->tot_pay;

			fcb->gap			= fcb->cal_contract_balance + fcb->tot_pay;

			if (fcb->cal_contract_balance <= 0)
			{
				fcb->gap = 0;
			}

			if ((fcb->cal_contract_balance <= 0) || ( fcb->gap <= 0 ))
			{
				fcb->gap_ratio	= 0.0;
				fcb->gap_risk	= 0.0;

				//if (bk.node_id == 3405)
				//{
					//cout << "First loop" << endl;
				//}
			}
			else
			{
				fcb->gap_ratio	= (fcb->gap / fcb->cal_contract_balance)*100;
				fcb->gap_risk	= get_gap_risk(fcb->gap_ratio);

				//if (bk.node_id == 3405)
				//{
					//cout << "else" << endl;
				//}
			}

			/*
			if (bk.node_id == 3405)
			{
				printf("fcb->cal_contract_balance		= %.3f\n",fcb->cal_contract_balance);

				printf("fcb->tot_pay		= %.3f\n",fcb->tot_pay);
	 				
				printf("fcb->gap_ratio		= %.3f\n",fcb->gap_ratio);

				printf("fcb->gap		= %.5f\n",fcb->gap);
	 				
				printf("fcb->delay		= %.3f\n",fcb->delay);

				printf("fcb->gap_risk		= %.3f\n",fcb->gap_risk);
	 				
				printf("fcb->delay_risk		= %.3f\n",fcb->delay_risk);
				printf("fcb->tot_credit_risk		= %.2f\n",fcb->tot_credit_risk);
	 				
				printf("fcb->rating		= %.3f\n",fcb->rating);
	  				

				int kk;
				cin >> kk;
			}
			*/

		
			
			

			// To get network stay

			i_ns = network_stay_map.find(bk.node_id);
			
			if ( i_ns != network_stay_map.end() )
			{
				fcb->network_stay_days = date_first_minus_second(sys_date_rdt, (*i_ns).second.start_date_rdt);
	
				fcb->network_stay	= fcb->network_stay_days / 365;	// No of Years
			}
			else
			{
				fcb->network_stay= 0.0;

				fprintf(log_to_info,"Network Start Date not found for contract = %d|\n", bk.node_id);
			}

			fcb->network_stay_points	= get_network_stay_points(fcb->network_stay);

			fcb->tot_credit_risk	= fcb->gap_risk + fcb->delay_risk;
			fcb->rating				= 1 - fcb->tot_credit_risk;
			fcb->tot_points			= fcb->rating + fcb->network_stay_points;

			/*
			if (bk.node_id == 3405)
			{
				printf("fcb->cal_contract_balance		= %.3f\n",fcb->cal_contract_balance);

				printf("fcb->gap		= %.3f\n",fcb->gap);
	 				
				printf("fcb->delay		= %.3f\n",fcb->delay);

				printf("fcb->gap_risk		= %.3f\n",fcb->gap_risk);
	 				
				printf("fcb->delay_risk		= %.3f\n",fcb->delay_risk);
				printf("fcb->tot_credit_risk		= %.2f\n",fcb->tot_credit_risk);
	 				
				printf("fcb->rating		= %.3f\n",fcb->rating);
	  				

				int gg;
				cin >> gg;
			}
			*/

			i_cx = profiled_cx_map.find(bk.node_id);

			if ( i_cx == profiled_cx_map.end() ) // no profile hence insert
			{
				new_cx.init();

				new_cx.account_no		= bk.node_id;
				
				new_cx.average_score	= fcb->tot_points;

				new_cx.total_score		= fcb->tot_points;
				new_cx.no_of_bills		= 1;

				new_cx.cx_type_id	= get_cx_type_id(fcb->tot_points); // average_score = tot_points

				new_cx.network_stay_days	= fcb->network_stay_days;
				new_cx.nt_work_stay			= fcb->network_stay;
				new_cx.network_stay_points	= fcb->network_stay_points;
			
				strcpy(new_cx.bill_no_1, fcb->bill_no);
				
				new_cx.delay_1		= fcb->delay;
	 			new_cx.gap_1		= fcb->gap;
	  			new_cx.tot_pay_1	= fcb->tot_pay;
	  			new_cx.tot_out_1	= fcb->cal_contract_balance;
	  			new_cx.rating_1		= fcb->rating;


				/*
				if (bk.node_id == 3405)
				{
					//cout << "new_cx.delay_1		= "	<<new_cx.delay_1 << endl;
					printf("new_cx.delay_1		= %.3f\n",new_cx.delay_1);
	 				//cout << "new_cx.gap_1		= "	<<new_cx.gap_1 << endl;
					printf("new_cx.gap_1		= %.3f\n",new_cx.gap_1);
	  				cout << "new_cx.tot_pay_1	= "	<<new_cx.tot_pay_1 << endl;
	  				cout << "new_cx.tot_out_1	= "	<< new_cx.tot_out_1<< endl;
	  				cout << "new_cx.rating_1	= "	<<new_cx.rating_1 << endl;

					int hh;
					cin >> hh;
				}
				*/
	  
				profiled_cx_map.insert(PROFILED_CX_DEF::value_type(bk.node_id, new_cx));

				

			}
			else	// update profile
			{
				existing_cx = &(*i_cx).second;

				
				existing_cx->total_score	= existing_cx->total_score + fcb->tot_points;
				existing_cx->no_of_bills	= existing_cx->no_of_bills + 1;

				existing_cx->average_score	= existing_cx->total_score / existing_cx->no_of_bills ;

				existing_cx->cx_type_id		= get_cx_type_id(existing_cx->average_score);


				existing_cx->network_stay_days	= fcb->network_stay_days;
				existing_cx->nt_work_stay		= fcb->network_stay;
				existing_cx->network_stay_points= fcb->network_stay_points;
	
				if (existing_cx->no_of_bills == 2)
				{
					strcpy(existing_cx->bill_no_2, fcb->bill_no);
					existing_cx->delay_2	= fcb->delay;
	 				existing_cx->gap_2		= fcb->gap;
	  				existing_cx->tot_pay_2	= fcb->tot_pay;
	  				existing_cx->tot_out_2	= fcb->cal_contract_balance;
	  				existing_cx->rating_2	= fcb->rating;
				}
				else if (existing_cx->no_of_bills == 3)
				{
					strcpy(existing_cx->bill_no_3, fcb->bill_no);
					existing_cx->delay_3	= fcb->delay;
	 				existing_cx->gap_3		= fcb->gap;
	  				existing_cx->tot_pay_3	= fcb->tot_pay;
	  				existing_cx->tot_out_3	= fcb->cal_contract_balance;
	  				existing_cx->rating_3	= fcb->rating;
				}
				else if (existing_cx->no_of_bills == 4)
				{
					strcpy(existing_cx->bill_no_4, fcb->bill_no);
					existing_cx->delay_4	= fcb->delay;
	 				existing_cx->gap_4		= fcb->gap;
	  				existing_cx->tot_pay_4	= fcb->tot_pay;
	  				existing_cx->tot_out_4	= fcb->cal_contract_balance;
	  				existing_cx->rating_4	= fcb->rating;
				}
				else if (existing_cx->no_of_bills == 5)
				{
					strcpy(existing_cx->bill_no_5, fcb->bill_no);
					existing_cx->delay_5	= fcb->delay;
	 				existing_cx->gap_5		= fcb->gap;
	  				existing_cx->tot_pay_5	= fcb->tot_pay;
	  				existing_cx->tot_out_5	= fcb->cal_contract_balance;
	  				existing_cx->rating_5	= fcb->rating;
				}
				else if (existing_cx->no_of_bills == 6)
				{
					strcpy(existing_cx->bill_no_6, fcb->bill_no);
					existing_cx->delay_6	= fcb->delay;
	 				existing_cx->gap_6		= fcb->gap;
	  				existing_cx->tot_pay_6	= fcb->tot_pay;
	  				existing_cx->tot_out_6	= fcb->cal_contract_balance;
	  				existing_cx->rating_6	= fcb->rating;
				}

			}
		
		}
	}
	else
	{
		cout << "Second Bill Map size zero, hence nothing to process" << endl;
	}

	cout << "second_bill_map.size() = " << second_bill_map.size() << endl;
	cout << "profiled_cx_map.size() = " << profiled_cx_map.size() << endl;
	
	cout << "final processing end" << endl;

	return true;
}
//////////////////////////////////////////////////////////////////////////

/*
bool churn::process_final()
{
	bill_key				bk;
	fb_contract_balances	*fcb;

	PROFILED_CX_DEF::iterator	i_cx;
	profiled_cx					new_cx;
	profiled_cx					*existing_cx;

	NETWORK_STAY_DEF::iterator i_ns;

	cout << "processing final" << endl;

	cout << "bill_map.size() = " << bill_map.size() << endl;
	cout << "processing started" << endl;


	//thushara --> fprintf(log_to_info,"\n ================================================================= |\n");

	//thushara --> fprintf(log_to_info,
	//thushara --> 	"account_no, no_of_bills, tot_pay, delay, delay_risk, gap, \
	//thushara --> 	gap_ratio, gap_risk, network_stay_days, network_stay, \
	//thushara --> 	network_stay_points, tot_credit_risk, total_score, \
	//thushara --> 	average_score, cx_type_id |\n");

	//thushara --> fprintf(log_to_info,"================================================================= |\n");

	int loop_count = 1;

	cout<<"second_bill_map.size "<<second_bill_map.size()<<endl;

	if (second_bill_map.size() != 0 )
	{
		//BILL_DEF::iterator i_init = bill_map.begin();
		//node_id_current = (*i_init).first.node_id;

		for (BILL_DEF::iterator i = second_bill_map.begin(); i != second_bill_map.end(); i++)
		{
			fcb		= &(*i).second;
			bk		= (*i).first;

			fprintf(log_to_info,"bk.node_id %d - %d",bk.node_id, loop_count++);

			fcb->tot_pay		= get_total_payments(bk.node_id, fcb->end_date_rdt, fcb->next_bill_end_date_rdt);

			
			fcb->delay			= get_delay(bk.node_id, fcb->end_date_rdt, fcb->due_date_rdt, reng_date_time_to_string(fcb->due_date_rdt));

			fcb->cal_contract_balance = get_calculated_contract_balance(bk.node_id, fcb->tran_date_rdt);
		
			fcb->gap			= fcb->cal_contract_balance - fcb->tot_pay;

			if ((fcb->cal_contract_balance < 0) || ( fcb->gap <= 0 ))
			{
				fcb->gap_ratio	= 0.0;
				fcb->gap_risk	= 0.0;
			}
			else
			{
				fcb->gap_ratio	= (fcb->gap / fcb->cal_contract_balance)*100;
				fcb->gap_risk	= get_gap_risk(fcb->gap_ratio);
			}

		
			
			fcb->delay_risk	= get_delay_risk(fcb->delay);

			// To get network stay

			i_ns = network_stay_map.find(bk.node_id);
			
			if ( i_ns != network_stay_map.end() )
			{
				//fcb->network_stay_days = db_first_minus_second(sys_date, (char *)((*i_ns).second.start_date).c_str());

				//fcb->network_stay_days = db_first_minus_second(sys_date, (char *)(reng_date_time_to_string((*i_ns).second.start_date_rdt)).c_str());

				fcb->network_stay_days = date_first_minus_second(sys_date_rdt, (*i_ns).second.start_date_rdt);
				//cout << "sys_date = " << sys_date << endl;
				//cout << "start_date = " << (*i_ns).second.start_date << endl;
				//cout << "fcb->network_stay_days = " << fcb->network_stay_days << endl;

				fcb->network_stay	= fcb->network_stay_days / 365;	// No of Years
				//cout << "fcb->network_stay = " << fcb->network_stay << endl;

			}
			else
			{
				fcb->network_stay= 0.0;
				//cout << "Network Start Date not found for contract = " << bk.node_id << endl;

				fprintf(log_to_file,"Network Start Date not found for contract = %d|\n", bk.node_id);
			}

			fcb->network_stay_points	= get_network_stay_points(fcb->network_stay);

			fcb->tot_credit_risk	= fcb->gap_risk + fcb->delay_risk;
			fcb->rating				= 1 - fcb->tot_credit_risk;
			fcb->tot_points			= fcb->rating + fcb->network_stay_points;

			i_cx = profiled_cx_map.find(bk.node_id);

			if ( i_cx == profiled_cx_map.end() ) // no profile hence insert
			{
				new_cx.init();

				new_cx.account_no		= bk.node_id;
				
				new_cx.average_score	= fcb->tot_points;

				new_cx.total_score		= fcb->tot_points;
				new_cx.no_of_bills		= 1;

				new_cx.cx_type_id	= get_cx_type_id(fcb->tot_points); // average_score = tot_points

				//thushara --> fprintf(log_to_info,"New Cx ------------------------------------------------\n");

				//fprintf(log_to_file,"node_id,tot_score, no_of_bills, ave_score, cx_type_id\n");
				//fprintf(log_to_file,"%d,%f,%d,%f,%d|\n",new_cx.account_no, new_cx.total_score, new_cx.no_of_bills, new_cx.average_score, new_cx.cx_type_id);

				//thushara --> fprintf(log_to_info,"%d,%d,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%d|\n",
				//thushara --> 	new_cx.account_no,
				//thushara --> 	new_cx.no_of_bills, 
				//thushara --> 	fcb->tot_pay,
				//thushara --> 	fcb->delay,
				//thushara --> 	fcb->delay_risk,
				//thushara --> 	fcb->gap,
				//thushara --> 	fcb->gap_ratio,
				//thushara --> 	fcb->gap_risk,
				//thushara --> 	fcb->network_stay_days,
				//thushara --> 	fcb->network_stay,
				//thushara --> 	fcb->network_stay_points,
				//thushara --> 	fcb->tot_credit_risk,
				//thushara --> 	new_cx.total_score, 
				//thushara --> 	new_cx.average_score, 
				//thushara --> 	new_cx.cx_type_id);

				profiled_cx_map.insert(PROFILED_CX_DEF::value_type(bk.node_id, new_cx));
			}
			else	// update profile
			{
				existing_cx = &(*i_cx).second;

				
				existing_cx->total_score	= existing_cx->total_score + fcb->tot_points;
				existing_cx->no_of_bills	= existing_cx->no_of_bills + 1;

				existing_cx->average_score	= existing_cx->total_score / existing_cx->no_of_bills ;

				existing_cx->cx_type_id		= get_cx_type_id(existing_cx->average_score);

				////// Log

				//fprintf(log_to_file,"node_id,tot_score, no_of_bills, ave_score, cx_type_id\n");

				//thushara --> fprintf(log_to_info,"%d,%d,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%d|\n",
				//thushara --> 	existing_cx->account_no,
				//thushara --> 	existing_cx->no_of_bills, 
				//thushara --> 	fcb->tot_pay,
				//thushara --> 	fcb->delay,
				//thushara --> 	fcb->delay_risk,
				//thushara --> 	fcb->gap,
				//thushara --> 	fcb->gap_ratio,
				//thushara --> 	fcb->gap_risk,
				//thushara --> 	fcb->network_stay_days,
				//thushara --> 	fcb->network_stay,
				//thushara --> 	fcb->network_stay_points,
				//thushara --> 	fcb->tot_credit_risk,
				//thushara --> 	existing_cx->total_score, 
				//thushara --> 	existing_cx->average_score, 
				//thushara --> 	existing_cx->cx_type_id);

				//fprintf(log_to_file,"no_of_bills = %d|\n",existing_cx->no_of_bills);
				//fprintf(log_to_file,"average_score = %f|\n",existing_cx->average_score);
				//fprintf(log_to_file,"cx_type_id = %d|\n",existing_cx->cx_type_id);
			}
		
		}
	}
	else
	{
		cout << "Second Bill Map size zero, hence nothing to process" << endl;
	}

	cout << "second_bill_map.size() = " << second_bill_map.size() << endl;
	cout << "profiled_cx_map.size() = " << profiled_cx_map.size() << endl;
	
	cout << "final processing end" << endl;

	return true;
}
*/

double	churn::get_delay_risk(double delay)
{
	double delay_risk = 0.0;

	for (DELAY_DEF::iterator i = delay_map.begin(); i != delay_map.end(); i++)
	{
		if ( ( (*i).first.delay_days_from < delay ) && ( delay <= (*i).first.delay_days_to ) )
		{
			return (*i).second;
		}
	}

	return delay_risk;
}

double	churn::get_gap_risk(double gap)
{
	double gap_risk = 0.0;

	for (GAP_DEF::iterator i = gap_map.begin(); i != gap_map.end(); i++)
	{
		if ( ( (*i).first.prob_from < gap ) && ( gap <= (*i).first.prob_to ) )
		{
			return (*i).second;
		}
	}

	return gap_risk;
}


double	churn::get_network_stay_points(double network_stay)
{
	double network_stay_points = 0.0;

	for (STAY_DEF::iterator i = stay_map.begin(); i != stay_map.end(); i++)
	{
		if ( ( (*i).first.stay_years_from < network_stay ) && ( network_stay <= (*i).first.stay_years_to ) )
		{
			return (*i).second;
		}
	}

	return network_stay_points;
}


int	churn::get_cx_type_id(double average_score)
{
	int cx_type_id = 0;

	for (RATING_DEF::iterator i = rating_map.begin(); i != rating_map.end(); i++)
	{
		if ( ( (*i).first.prob_from < average_score ) && ( average_score <= (*i).first.prob_to ) )
		{
			return (*i).second;
		}
	}

	return cx_type_id;
}


string	churn::reng_date_time_to_string(reng_date_time rdt)
{
	string s_date_time;

	char *c_date_time;
	
	c_date_time = new char[20];
	
	c_date_time[0]	= '\0';
	
	char	s_month[02];
	char	s_day[02];
	char	s_hour[02];
	char	s_min[02];
	char	s_sec[02];

	if (rdt.date.month < 10)
			sprintf(s_month,"0%1d", rdt.date.month);
		else
			sprintf(s_month,"%2d", rdt.date.month);
	
	if (rdt.date.day < 10)
			sprintf(s_day,"0%1d", rdt.date.day);
		else
			sprintf(s_day,"%2d", rdt.date.day);

	if (rdt.time.hour < 10)
			sprintf(s_hour,"0%1d", rdt.time.hour);
		else
			sprintf(s_hour,"%2d", rdt.time.hour);
	
	if (rdt.time.min < 10)
			sprintf(s_min,"0%1d", rdt.time.min);
		else
			sprintf(s_min,"%2d", rdt.time.min);

	if (rdt.time.second < 10)
			sprintf(s_sec,"0%1d", rdt.time.second);
		else
			sprintf(s_sec,"%2d", rdt.time.second);
	
	sprintf(c_date_time,"%4d%2s%2s%2s%2s%2s",
					rdt.date.year,
					s_month, 
					s_day,
					s_hour,
					s_min,
					s_sec);

	s_date_time = c_date_time;

	delete c_date_time;

	return s_date_time;
}

double churn::get_calculated_contract_balance(int node_id, reng_date_time tran_date_rdt)
{
	double cal_contract_balance = 0.0;

	fb_contract_balances_new *p_fcb;	

	FB_CONTRACT_BALANCES_DEF::iterator i_fcb;

	for (i_fcb = fb_contract_balances_map.equal_range(node_id).first; i_fcb != fb_contract_balances_map.equal_range(node_id).second; i_fcb++)
	{
		p_fcb = &(*i_fcb).second;

		if ( tran_date_rdt < p_fcb->tran_date_rdt ) 
		{
			// do nothing
		}
		else
		{
			cal_contract_balance = cal_contract_balance + p_fcb->tran_amount;
		}
	}

	return cal_contract_balance;
}

float churn::date_first_minus_second(reng_date_time first_date_rdt, reng_date_time second_date_rdt)
{
	// first - latest date (large date) - eg year 2015
	// second - earlist date (small date) - eg year 2005
	time_t t1;
	time_t t2;

	time(&t1);
	time(&t2);

	struct tm  timeinfo1 = {0};
	struct tm  timeinfo2 = {0};

	timeinfo1.tm_year		= first_date_rdt.date.year - 1900;
	timeinfo1.tm_mon		= first_date_rdt.date.month - 1;
	timeinfo1.tm_mday		= first_date_rdt.date.day;
	timeinfo1.tm_hour       = first_date_rdt.time.hour;
	timeinfo1.tm_min		= first_date_rdt.time.min;
	timeinfo1.tm_sec		= first_date_rdt.time.second;

	timeinfo2.tm_year       = second_date_rdt.date.year - 1900;
	timeinfo2.tm_mon        = second_date_rdt.date.month - 1;
	timeinfo2.tm_mday       = second_date_rdt.date.day;
	timeinfo2.tm_hour		= second_date_rdt.time.hour;
	timeinfo2.tm_min        = second_date_rdt.time.min;
	timeinfo2.tm_sec        = second_date_rdt.time.second;

	t1            = mktime(&timeinfo1);
	t2            = mktime(&timeinfo2);

	//double d = difftime(t1, t2);
	//cout << "d =" << d << endl;

	if (t1 == -1)
	{
		fprintf(log_to_file, "bad first date format: %d \n", first_date_rdt.date.year);
	}

	if (t2 == -1)
	{
		fprintf(log_to_file, "bad second date format: %d \n", second_date_rdt.date.year);
	}
	
               
	if(t1 != -1 && t2 != -1)
	{
			long day = 0;
			double d = difftime(t1, t2);

		//if(d < 0) d *= -1.0;
			day = d / 86400;
				//printf("%ld day%s\n", day, day == 1 ? "" : "s");

			return day;
	}
	else
	{
		//fprintf(stderr, "bad date format: %ld %ld\n", (long)t1, (long)t2);
		fprintf(log_to_file, "bad date format: %ld %ld\n", (long)t1, (long)t2);
		return 0;
	}
}



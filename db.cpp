
/* Result Sets Interface */
#ifndef SQL_CRSR
#  define SQL_CRSR
  struct sql_cursor
  {
    unsigned int curocn;
    void *ptr1;
    void *ptr2;
    unsigned int magic;
  };
  typedef struct sql_cursor sql_cursor;
  typedef struct sql_cursor SQL_CURSOR;
#endif /* SQL_CRSR */

/* Thread Safety */
typedef void * sql_context;
typedef void * SQL_CONTEXT;

/* Object support */
struct sqltvn
{
  unsigned char *tvnvsn; 
  unsigned short tvnvsnl; 
  unsigned char *tvnnm;
  unsigned short tvnnml; 
  unsigned char *tvnsnm;
  unsigned short tvnsnml;
};
typedef struct sqltvn sqltvn;

struct sqladts
{
  unsigned int adtvsn; 
  unsigned short adtmode; 
  unsigned short adtnum;  
  sqltvn adttvn[1];       
};
typedef struct sqladts sqladts;

static struct sqladts sqladt = {
  1,1,0,
};

/* Binding to PL/SQL Records */
struct sqltdss
{
  unsigned int tdsvsn; 
  unsigned short tdsnum; 
  unsigned char *tdsval[1]; 
};
typedef struct sqltdss sqltdss;
static struct sqltdss sqltds =
{
  1,
  0,
};

/* File name & Package Name */
struct sqlcxp
{
  unsigned short fillen;
           char  filnam[30];
};
static const struct sqlcxp sqlfpn =
{
    29,
    "d:\\src\\customerprofiler\\db.pc"
};


static unsigned int sqlctx = 1018308501;


static struct sqlexd {
   unsigned int   sqlvsn;
   unsigned int   arrsiz;
   unsigned int   iters;
   unsigned int   offset;
   unsigned short selerr;
   unsigned short sqlety;
   unsigned int   occurs;
      const short *cud;
   unsigned char  *sqlest;
      const char  *stmt;
   sqladts *sqladtp;
   sqltdss *sqltdsp;
            void  **sqphsv;
   unsigned int   *sqphsl;
            int   *sqphss;
            void  **sqpind;
            int   *sqpins;
   unsigned int   *sqparm;
   unsigned int   **sqparc;
   unsigned short  *sqpadto;
   unsigned short  *sqptdso;
   unsigned int   sqlcmax;
   unsigned int   sqlcmin;
   unsigned int   sqlcincr;
   unsigned int   sqlctimeout;
   unsigned int   sqlcnowait;
              int   sqfoff;
   unsigned int   sqcmod;
   unsigned int   sqfmod;
            void  *sqhstv[44];
   unsigned int   sqhstl[44];
            int   sqhsts[44];
            void  *sqindv[44];
            int   sqinds[44];
   unsigned int   sqharm[44];
   unsigned int   *sqharc[44];
   unsigned short  sqadto[44];
   unsigned short  sqtdso[44];
} sqlstm = {12,44};

// Prototypes
extern "C" {
  void sqlcxt (void **, unsigned int *,
               struct sqlexd *, const struct sqlcxp *);
  void sqlcx2t(void **, unsigned int *,
               struct sqlexd *, const struct sqlcxp *);
  void sqlbuft(void **, char *);
  void sqlgs2t(void **, char *);
  void sqlorat(void **, unsigned int *, void *);
}

// Forms Interface
static const int IAPSUCC = 0;
static const int IAPFAIL = 1403;
static const int IAPFTL  = 535;
extern "C" { void sqliem(char *, int *); }

 static const char *sq0010 = 
"select ROWID ,BILLENQ_MOB_NUM ,BILLENQ_ACCT_NUM ,BILLENQ_PIN ,BILLENQ_CURREN\
T ,BILLENQ_OUTSTAND ,BILLENQ_LAST_UPDATE ,BILLENQ_LAST_BILLAMT ,BILLENQ_LAST_B\
ILLDATE ,BILLENQ_LAST_PAYAMT ,BILLENQ_LAST_PAYMODE ,BILLENQ_LAST_PAYDATE ,BILL\
ENQ_LANG ,BILLENQ_MIN_PAYMENT ,BILLENQ_CON_TYPE  from BILLENQ_TAB            ";

 static const char *sq0011 = 
"select SUBSCRIBER_NODE_ID ,SUBSCRIBER_PROFILE_ID ,IS_PAYMENT_RESPONSIBLE ,ST\
ATUS  from CAM_SUBSCRIBER_NODE            ";

 static const char *sq0012 = 
"select SUBSCRIBER_PROFILE_ID ,COMMUNICATION_LANGUAGE_ID  from CAM_SUBSCRIBER\
_PROFILE            ";

 static const char *sq0013 = 
"select NODE_ID ,NODE_TYPE ,BROUGHT_FWD ,INTERIM_BILL_AMOUNT  from BILL_I_PR_\
MASTER            ";

 static const char *sq0014 = 
"select CONTRACT_ID ,BROUGHT_FORWARD_OUTSTANDING ,INTERIM_BILL_AMOUNT  from B\
ILL_I_NONPR_CONTRACT_MASTER            ";

 static const char *sq0015 = 
"select NODE_ID ,NODE_TYPE ,AMOUNT  from BILL_BILL_MASTER_SUMMARY where ITEM_\
CODE='BILLAMT'           ";

 static const char *sq0016 = 
"select NODE_ID ,NODE_TYPE ,AMOUNT  from BILL_BILL_STATEMENT_SUMMARY where IT\
EM_CODE='BILLAMT'           ";

 static const char *sq0017 = 
"select TRAN_NO ,NODE_ID ,NODE_TYPE ,AMOUNT ,TRAN_DATE ,TRAN_TYPE  from FB_BI\
LL_TRANSACTIONS            ";

 static const char *sq0018 = 
"select RECEIPT_TRAN_NO ,PAYMENT_MODE  from FB_BILL_RECEIPTS            ";

 static const char *sq0031 = 
"select IMAGE_ID ,IMSI_NO ,CONN_TYPE ,STATUS_REASON_ID ,SWITCH_STATUS  from P\
ROV_SWITCH_IMAGE            ";

 static const char *sq0032 = 
"select IMSI ,CONNECTION_ID ,SERVICE_ID  from DYN_1_CONNECTION where SERVICE_\
ID in (1,2,3)           ";

 static const char *sq0033 = 
"select CONNECTION_ID ,PACKAGE_CONTRACT_ID  from CAM_CONNECTION            ";

 static const char *sq0034 = 
"select CONTRACT_PACKAGE_ID ,CONTRACT_ID ,STATUS ,ORIGINAL_PACKAGE_START_DATE\
 ,START_DATE  from CAM_CONTRACT_PACKAGE            ";

 static const char *sq0035 = 
"select CONTRACT_ID ,SUBSCRIBER_NODE_ID ,IS_PAYMENT_RESPONSIBLE ,CREDIT_LIMIT\
 ,CONTRACT_TYPE ,STATUS  from CAM_CONTRACT            ";

 static const char *sq0036 = 
"select NODE_ID ,BILL_NUMBER ,START_DATE ,END_DATE ,DUE_DATE  from BILL_PERIO\
D_TRANSACTION_MASTER            ";

 static const char *sq0037 = 
"select DELAY_DAYS_FROM ,DELAY_DAYS_TO ,PAYMENT_DELAY_RISK  from CX_PAYMENT_D\
ELAY_RISK            ";

 static const char *sq0038 = 
"select PROB_FROM ,PROB_TO ,PAYMENT_GAP_RISK  from CX_PAYMENT_GAP_RISK       \
     ";

 static const char *sq0039 = 
"select STAY_YEARS_FROM ,STAY_YEARS_TO ,POINTS  from CX_NETWORK_STAY_POINTS  \
          ";

 static const char *sq0040 = 
"select PROB_FROM ,PROB_TO ,CREDIT_RATING_ID  from CX_CREDIT_RATINGS         \
   ";

 static const char *sq0041 = 
"select TRAN_NO ,CONTRACT_ID ,TRAN_AMOUNT ,CONTRACT_BALANCE ,TRAN_DATE ,TRAN_\
TYPE ,TRAN_REFERENCE  from FB_CONTRACT_BALANCES            ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{12,4146,178,0,0,
5,0,0,1,0,0,32,61,0,0,0,0,0,1,0,
20,0,0,2,0,0,27,77,0,0,4,4,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,1,5,0,
0,1,10,0,0,1,10,0,0,1,10,0,0,
64,0,0,3,54,0,1,78,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
92,0,0,4,0,0,27,94,0,0,4,4,0,3,6,82,65,84,73,78,71,1,5,0,0,1,10,0,0,1,10,0,0,1,
10,0,0,
129,0,0,5,54,0,1,95,0,0,0,0,0,3,6,82,65,84,73,78,71,
150,0,0,6,0,0,30,104,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
178,0,0,7,0,0,30,110,0,0,0,0,0,3,6,82,65,84,73,78,71,
199,0,0,8,55,0,4,124,0,0,1,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,2,5,
0,0,
231,0,0,9,75,0,4,144,0,0,1,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,2,5,
0,0,
263,0,0,10,309,0,9,235,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
291,0,0,10,0,0,13,240,0,0,15,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,2,
5,0,0,2,5,0,0,2,5,0,0,2,5,0,0,2,5,0,0,2,5,0,0,2,5,0,0,2,5,0,0,2,5,0,0,2,5,0,0,
2,5,0,0,2,5,0,0,2,5,0,0,2,5,0,0,2,5,0,0,
379,0,0,10,0,0,15,299,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
407,0,0,11,118,0,9,796,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
435,0,0,11,0,0,13,803,0,0,4,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,2,
3,0,0,2,3,0,0,2,5,0,0,2,5,0,0,
479,0,0,11,0,0,15,833,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
507,0,0,12,96,0,9,963,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
535,0,0,12,0,0,13,970,0,0,2,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,2,
3,0,0,2,5,0,0,
571,0,0,12,0,0,15,993,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
599,0,0,13,94,0,9,1044,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
627,0,0,13,0,0,13,1051,0,0,4,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,2,
3,0,0,2,5,0,0,2,4,0,0,2,4,0,0,
671,0,0,13,0,0,15,1080,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
699,0,0,14,115,0,9,1128,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
727,0,0,14,0,0,13,1135,0,0,3,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,2,
3,0,0,2,4,0,0,2,4,0,0,
767,0,0,14,0,0,15,1159,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
795,0,0,15,101,0,9,1208,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
823,0,0,15,0,0,13,1214,0,0,3,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,2,
3,0,0,2,5,0,0,2,4,0,0,
863,0,0,15,0,0,15,1235,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
891,0,0,16,104,0,9,1284,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
919,0,0,16,0,0,13,1289,0,0,3,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,2,
3,0,0,2,5,0,0,2,4,0,0,
959,0,0,16,0,0,15,1310,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
987,0,0,17,103,0,9,1368,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
1015,0,0,17,0,0,13,1377,0,0,6,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
2,3,0,0,2,3,0,0,2,5,0,0,2,4,0,0,2,5,0,0,2,5,0,0,
1067,0,0,17,0,0,15,1468,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
1095,0,0,18,71,0,9,1523,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
1123,0,0,18,0,0,13,1529,0,0,2,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
2,3,0,0,2,5,0,0,
1159,0,0,18,0,0,15,1549,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
1187,0,0,19,35,0,4,1562,0,0,1,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
2,5,0,0,
1219,0,0,20,718,0,3,1760,0,0,44,44,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,
69,1,3,0,0,1,3,0,0,1,4,0,0,1,4,0,0,1,3,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,5,0,0,1,5,
0,0,1,5,0,0,1,5,0,0,1,5,0,0,1,5,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,
4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,
1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,
0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,
1423,0,0,21,0,0,29,1807,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
1451,0,0,22,718,0,3,1997,0,0,44,44,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,
69,1,3,0,0,1,3,0,0,1,4,0,0,1,4,0,0,1,3,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,5,0,0,1,5,
0,0,1,5,0,0,1,5,0,0,1,5,0,0,1,5,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,
4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,
1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,
0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,
1655,0,0,23,0,0,29,2044,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
1683,0,0,24,275,0,5,2112,0,0,11,11,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,
69,1,5,0,0,1,5,0,0,1,5,0,0,1,5,0,0,1,5,0,0,1,5,0,0,1,5,0,0,1,5,0,0,1,5,0,0,1,5,
0,0,1,5,0,0,
1755,0,0,25,0,0,29,2136,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
1783,0,0,26,0,0,29,2140,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
1811,0,0,27,26,0,1,2150,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
1839,0,0,28,36,0,1,2162,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
1867,0,0,29,34,0,1,2173,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
1895,0,0,30,93,0,4,2250,0,0,3,2,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
1,5,0,0,1,5,0,0,2,4,0,0,
1935,0,0,31,104,0,9,2315,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
1963,0,0,31,0,0,13,2320,0,0,5,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
2,3,0,0,2,5,0,0,2,5,0,0,2,5,0,0,2,5,0,0,
2011,0,0,31,0,0,15,2355,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
2039,0,0,32,100,0,9,2404,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
2067,0,0,32,0,0,13,2409,0,0,3,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
2,5,0,0,2,3,0,0,2,3,0,0,
2107,0,0,32,0,0,15,2431,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
2135,0,0,33,74,0,9,2478,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
2163,0,0,33,0,0,13,2484,0,0,2,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
2,3,0,0,2,3,0,0,
2199,0,0,33,0,0,15,2502,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
2227,0,0,34,127,0,9,2555,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
2255,0,0,34,0,0,13,2566,0,0,5,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
2,3,0,0,2,3,0,0,2,5,0,0,2,5,0,0,2,5,0,0,
2303,0,0,34,0,0,15,2641,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
2331,0,0,35,130,0,9,2700,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
2359,0,0,35,0,0,13,2707,0,0,6,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
2,3,0,0,2,3,0,0,2,5,0,0,2,4,0,0,2,5,0,0,2,5,0,0,
2411,0,0,35,0,0,15,2743,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
2439,0,0,36,108,0,9,2936,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
2467,0,0,36,0,0,13,2942,0,0,5,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
2,3,0,0,2,5,0,0,2,5,0,0,2,5,0,0,2,5,0,0,
2515,0,0,36,0,0,15,2992,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
2543,0,0,37,97,0,9,3123,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
2571,0,0,37,0,0,13,3130,0,0,3,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
2,3,0,0,2,3,0,0,2,4,0,0,
2611,0,0,37,0,0,15,3151,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
2639,0,0,38,81,0,9,3201,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
2667,0,0,38,0,0,13,3208,0,0,3,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
2,4,0,0,2,4,0,0,2,4,0,0,
2707,0,0,38,0,0,15,3229,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
2735,0,0,39,86,0,9,3279,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
2763,0,0,39,0,0,13,3286,0,0,3,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
2,3,0,0,2,3,0,0,2,4,0,0,
2803,0,0,39,0,0,15,3307,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
2831,0,0,40,79,0,9,3357,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
2859,0,0,40,0,0,13,3364,0,0,3,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
2,4,0,0,2,4,0,0,2,3,0,0,
2899,0,0,40,0,0,15,3385,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
2927,0,0,41,135,0,9,3584,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
2955,0,0,41,0,0,13,3596,0,0,7,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
2,3,0,0,2,3,0,0,2,4,0,0,2,4,0,0,2,5,0,0,2,5,0,0,2,5,0,0,
3011,0,0,41,0,0,15,3662,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
3039,0,0,42,87,0,3,3711,0,0,3,3,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
1,3,0,0,1,3,0,0,1,4,0,0,
3079,0,0,43,0,0,29,3717,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
3107,0,0,44,87,0,3,3763,0,0,3,3,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
1,3,0,0,1,3,0,0,1,4,0,0,
3147,0,0,45,0,0,29,3769,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
};


#line 1 "d:\\src\\customerprofiler\\db.pc"

#pragma warning(disable:4786)


#include <oraca.h>
//#include <sqlcpr.h>
#include <sqlda.h>
#include <sqlca.h>


#ifndef ORA_PROC

#include <stdio.h>
#include <string.h>
#include <fstream>
#include <stdlib.h>
#include "data_containers.h"

#endif


extern	churn	*gsm_churn;
extern  profiled_data* profiled_data_block;


#define FETCH_SIZE	5000
#define BUF_LEN	100		


/* EXEC SQL DECLARE CUSTOMER_CARE DATABASE; */ 
#line 30 "d:\\src\\customerprofiler\\db.pc"
 
/* EXEC SQL DECLARE RATING DATABASE; */ 
#line 31 "d:\\src\\customerprofiler\\db.pc"
 

/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 33 "d:\\src\\customerprofiler\\db.pc"

char *login_cust_care;
char *login_rating;
/* EXEC SQL END DECLARE SECTION; */ 
#line 36 "d:\\src\\customerprofiler\\db.pc"



void sql_error(char *msg)
{
	cout << endl << msg << endl;
	sqlca.sqlerrm.sqlerrmc[sqlca.sqlerrm.sqlerrml] = '\0';
	oraca.orastxt.orastxtc[oraca.orastxt.orastxtl] = '\0';
	oraca.orasfnm.orasfnmc[oraca.orasfnm.orasfnml] = '\0';
	cout << sqlca.sqlerrm.sqlerrmc << endl;
	cout << "in " << oraca.orastxt.orastxtc << endl;
	cout << "on line " << oraca.oraslnr << " of " << oraca.orasfnm.orasfnmc
		<< endl << endl;
	
	//-- Roll back any pending changes and disconnect from Oracle.
	//EXEC SQL ROLLBACK RELEASE;
	exit(1);
}

void not_found_error(char *msg)
{
    cout << endl << msg << endl;
   
  //-- Roll back any pending changes and disconnect from Oracle.

    /* EXEC SQL ROLLBACK RELEASE; */ 
#line 61 "d:\\src\\customerprofiler\\db.pc"

{
#line 61 "d:\\src\\customerprofiler\\db.pc"
    struct sqlexd sqlstm;
#line 61 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqlvsn = 12;
#line 61 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.arrsiz = 0;
#line 61 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqladtp = &sqladt;
#line 61 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqltdsp = &sqltds;
#line 61 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.iters = (unsigned int  )1;
#line 61 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.offset = (unsigned int  )5;
#line 61 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.cud = sqlcud0;
#line 61 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 61 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqlety = (unsigned short)256;
#line 61 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.occurs = (unsigned int  )0;
#line 61 "d:\\src\\customerprofiler\\db.pc"
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 61 "d:\\src\\customerprofiler\\db.pc"
}

#line 61 "d:\\src\\customerprofiler\\db.pc"

    exit(1);
}



//-- Connect to ORACLE as customer care. 
void db_connect_cust_care(char *in_login)
{
	login_cust_care = in_login;  // a pointer assignment, in_login has the space acclocation

    /* EXEC SQL WHENEVER SQLERROR DO sql_error("ORACLE error--"); */ 
#line 72 "d:\\src\\customerprofiler\\db.pc"


	//ut<<"\nConnecting to ORACLE  as: "<<login_cust_care<<endl;
 	cout<<"\nConnecting to ORACLE  "<< endl;

    /* EXEC SQL CONNECT :login_cust_care AT CUSTOMER_CARE; */ 
#line 77 "d:\\src\\customerprofiler\\db.pc"

{
#line 77 "d:\\src\\customerprofiler\\db.pc"
    struct sqlexd sqlstm;
#line 77 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqlvsn = 12;
#line 77 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.arrsiz = 4;
#line 77 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqladtp = &sqladt;
#line 77 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqltdsp = &sqltds;
#line 77 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.iters = (unsigned int  )10;
#line 77 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.offset = (unsigned int  )20;
#line 77 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.cud = sqlcud0;
#line 77 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 77 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqlety = (unsigned short)256;
#line 77 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.occurs = (unsigned int  )0;
#line 77 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqhstv[0] = (         void  *)login_cust_care;
#line 77 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqhstl[0] = (unsigned int  )0;
#line 77 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqhsts[0] = (         int  )0;
#line 77 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqindv[0] = (         void  *)0;
#line 77 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqinds[0] = (         int  )0;
#line 77 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqharm[0] = (unsigned int  )0;
#line 77 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqadto[0] = (unsigned short )0;
#line 77 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqtdso[0] = (unsigned short )0;
#line 77 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqphsv = sqlstm.sqhstv;
#line 77 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqphsl = sqlstm.sqhstl;
#line 77 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqphss = sqlstm.sqhsts;
#line 77 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqpind = sqlstm.sqindv;
#line 77 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqpins = sqlstm.sqinds;
#line 77 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqparm = sqlstm.sqharm;
#line 77 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqparc = sqlstm.sqharc;
#line 77 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqpadto = sqlstm.sqadto;
#line 77 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqptdso = sqlstm.sqtdso;
#line 77 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqlcmax = (unsigned int )100;
#line 77 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqlcmin = (unsigned int )2;
#line 77 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqlcincr = (unsigned int )1;
#line 77 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqlctimeout = (unsigned int )0;
#line 77 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqlcnowait = (unsigned int )0;
#line 77 "d:\\src\\customerprofiler\\db.pc"
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 77 "d:\\src\\customerprofiler\\db.pc"
    if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 77 "d:\\src\\customerprofiler\\db.pc"
}

#line 77 "d:\\src\\customerprofiler\\db.pc"

	/* EXEC SQL AT CUSTOMER_CARE ALTER SESSION SET NLS_DATE_FORMAT="YYYYMMDDHH24MISS"; */ 
#line 78 "d:\\src\\customerprofiler\\db.pc"

{
#line 78 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 78 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 78 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 4;
#line 78 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 78 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 78 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.stmt = "alter SESSION SET NLS_DATE_FORMAT = \"YYYYMMDDHH24MISS\"";
#line 78 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 78 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )64;
#line 78 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 78 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 78 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 78 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 78 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 78 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 78 "d:\\src\\customerprofiler\\db.pc"
}

#line 78 "d:\\src\\customerprofiler\\db.pc"
 
	cout<<"Connected  to Database"<<endl<<endl; 

}


//-- Connect to ORACLE as rating. 
void db_connect_rating(char *in_login)
{
	login_rating = in_login;  // a pointer assignment, in_login has the space acclocation

    /* EXEC SQL WHENEVER SQLERROR DO sql_error("ORACLE error--"); */ 
#line 89 "d:\\src\\customerprofiler\\db.pc"


	cout<<"\nConnecting to ORACLE  as: "<<login_rating<<endl;
 	cout<<"\nConnecting to ORACLE  "<< endl;

    /* EXEC SQL CONNECT :login_rating AT RATING; */ 
#line 94 "d:\\src\\customerprofiler\\db.pc"

{
#line 94 "d:\\src\\customerprofiler\\db.pc"
    struct sqlexd sqlstm;
#line 94 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqlvsn = 12;
#line 94 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.arrsiz = 4;
#line 94 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqladtp = &sqladt;
#line 94 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqltdsp = &sqltds;
#line 94 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.iters = (unsigned int  )10;
#line 94 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.offset = (unsigned int  )92;
#line 94 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.cud = sqlcud0;
#line 94 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 94 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqlety = (unsigned short)256;
#line 94 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.occurs = (unsigned int  )0;
#line 94 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqhstv[0] = (         void  *)login_rating;
#line 94 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqhstl[0] = (unsigned int  )0;
#line 94 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqhsts[0] = (         int  )0;
#line 94 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqindv[0] = (         void  *)0;
#line 94 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqinds[0] = (         int  )0;
#line 94 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqharm[0] = (unsigned int  )0;
#line 94 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqadto[0] = (unsigned short )0;
#line 94 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqtdso[0] = (unsigned short )0;
#line 94 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqphsv = sqlstm.sqhstv;
#line 94 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqphsl = sqlstm.sqhstl;
#line 94 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqphss = sqlstm.sqhsts;
#line 94 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqpind = sqlstm.sqindv;
#line 94 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqpins = sqlstm.sqinds;
#line 94 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqparm = sqlstm.sqharm;
#line 94 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqparc = sqlstm.sqharc;
#line 94 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqpadto = sqlstm.sqadto;
#line 94 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqptdso = sqlstm.sqtdso;
#line 94 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqlcmax = (unsigned int )100;
#line 94 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqlcmin = (unsigned int )2;
#line 94 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqlcincr = (unsigned int )1;
#line 94 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqlctimeout = (unsigned int )0;
#line 94 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqlcnowait = (unsigned int )0;
#line 94 "d:\\src\\customerprofiler\\db.pc"
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 94 "d:\\src\\customerprofiler\\db.pc"
    if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 94 "d:\\src\\customerprofiler\\db.pc"
}

#line 94 "d:\\src\\customerprofiler\\db.pc"

	/* EXEC SQL AT RATING ALTER SESSION SET NLS_DATE_FORMAT="YYYYMMDDHH24MISS"; */ 
#line 95 "d:\\src\\customerprofiler\\db.pc"

{
#line 95 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 95 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 95 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 4;
#line 95 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 95 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 95 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.stmt = "alter SESSION SET NLS_DATE_FORMAT = \"YYYYMMDDHH24MISS\"";
#line 95 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 95 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )129;
#line 95 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 95 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 95 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 95 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 95 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 95 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 95 "d:\\src\\customerprofiler\\db.pc"
}

#line 95 "d:\\src\\customerprofiler\\db.pc"
 
	cout<<"Connected  to Database"<<endl<<endl; 

}


void db_disconnect_cust_care()
{
	cout<<"\nORACLE  customer care database: DISCONNECT"<<endl;
	/* EXEC SQL AT CUSTOMER_CARE COMMIT WORK RELEASE; */ 
#line 104 "d:\\src\\customerprofiler\\db.pc"

{
#line 104 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 104 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 104 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 4;
#line 104 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 104 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 104 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 104 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )150;
#line 104 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 104 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 104 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 104 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 104 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 104 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 104 "d:\\src\\customerprofiler\\db.pc"
}

#line 104 "d:\\src\\customerprofiler\\db.pc"
 
}

void db_disconnect_rating()
{
	cout<<"\nORACLE  rating database: DISCONNECT"<<endl;
	/* EXEC SQL AT RATING COMMIT WORK RELEASE; */ 
#line 110 "d:\\src\\customerprofiler\\db.pc"

{
#line 110 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 110 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 110 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 4;
#line 110 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 110 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 110 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 110 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )178;
#line 110 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 110 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 110 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 110 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 110 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 110 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 110 "d:\\src\\customerprofiler\\db.pc"
}

#line 110 "d:\\src\\customerprofiler\\db.pc"
 
}


void churn::get_db_sysdate()
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 116 "d:\\src\\customerprofiler\\db.pc"

		
		 char	br_system_date[20];	

	/* EXEC SQL END DECLARE SECTION; */ 
#line 120 "d:\\src\\customerprofiler\\db.pc"


	/* EXEC SQL WHENEVER NOT FOUND DO not_found_error("not_found_error in get_db_sysdate()"); */ 
#line 122 "d:\\src\\customerprofiler\\db.pc"
 

	/* EXEC SQL 
	AT customer_care
	SELECT	to_char(sysdate,'YYYYMMDD')
	INTO	:br_system_date
	FROM	DUAL; */ 
#line 128 "d:\\src\\customerprofiler\\db.pc"

{
#line 124 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 124 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 124 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 4;
#line 124 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 124 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 124 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.stmt = "select to_char(sysdate,'YYYYMMDD') into :b0  from DUAL ";
#line 124 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 124 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )199;
#line 124 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.selerr = (unsigned short)1;
#line 124 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 124 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 124 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 124 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 124 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[0] = (         void  *)br_system_date;
#line 124 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[0] = (unsigned int  )20;
#line 124 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[0] = (         int  )0;
#line 124 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[0] = (         void  *)0;
#line 124 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[0] = (         int  )0;
#line 124 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[0] = (unsigned int  )0;
#line 124 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[0] = (unsigned short )0;
#line 124 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[0] = (unsigned short )0;
#line 124 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqphsv = sqlstm.sqhstv;
#line 124 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqphsl = sqlstm.sqhstl;
#line 124 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqphss = sqlstm.sqhsts;
#line 124 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqpind = sqlstm.sqindv;
#line 124 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqpins = sqlstm.sqinds;
#line 124 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqparm = sqlstm.sqharm;
#line 124 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqparc = sqlstm.sqharc;
#line 124 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqpadto = sqlstm.sqadto;
#line 124 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqptdso = sqlstm.sqtdso;
#line 124 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 124 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode == 1403) not_found_error("not_found_error in get_db_sysdate()");
#line 124 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 124 "d:\\src\\customerprofiler\\db.pc"
}

#line 128 "d:\\src\\customerprofiler\\db.pc"


	sys_date	= br_system_date;
	transition	= true;
}

void churn::get_db_last_bill_date()
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 136 "d:\\src\\customerprofiler\\db.pc"

		
		 char	br_last_bill_date[20];	

	/* EXEC SQL END DECLARE SECTION; */ 
#line 140 "d:\\src\\customerprofiler\\db.pc"


	/* EXEC SQL WHENEVER NOT FOUND DO transition_error("transition false"); */ 
#line 142 "d:\\src\\customerprofiler\\db.pc"


	/* EXEC SQL 
	AT customer_care
	SELECT END_DATE 
		INTO : br_last_bill_date
		FROM bill_run_detail
	WHERE BR_STATUS = 'TRANSITION'; */ 
#line 149 "d:\\src\\customerprofiler\\db.pc"

{
#line 144 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 144 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 144 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 4;
#line 144 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 144 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 144 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.stmt = "select END_DATE into :b0  from bill_run_detail where BR_STAT\
US='TRANSITION'";
#line 144 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 144 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )231;
#line 144 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.selerr = (unsigned short)1;
#line 144 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 144 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 144 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 144 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 144 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[0] = (         void  *)br_last_bill_date;
#line 144 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[0] = (unsigned int  )20;
#line 144 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[0] = (         int  )0;
#line 144 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[0] = (         void  *)0;
#line 144 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[0] = (         int  )0;
#line 144 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[0] = (unsigned int  )0;
#line 144 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[0] = (unsigned short )0;
#line 144 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[0] = (unsigned short )0;
#line 144 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqphsv = sqlstm.sqhstv;
#line 144 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqphsl = sqlstm.sqhstl;
#line 144 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqphss = sqlstm.sqhsts;
#line 144 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqpind = sqlstm.sqindv;
#line 144 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqpins = sqlstm.sqinds;
#line 144 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqparm = sqlstm.sqharm;
#line 144 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqparc = sqlstm.sqharc;
#line 144 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqpadto = sqlstm.sqadto;
#line 144 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqptdso = sqlstm.sqtdso;
#line 144 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 144 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode == 1403) transition_error("transition false");
#line 144 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 144 "d:\\src\\customerprofiler\\db.pc"
}

#line 149 "d:\\src\\customerprofiler\\db.pc"


	last_bill_date	= br_last_bill_date;
}

void churn::db_read_billenq_tab()
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 156 "d:\\src\\customerprofiler\\db.pc"


	struct psi_t
	{ 
		char	row_id[BUF_LEN];
		char	billenq_mob_num[BUF_LEN];		// varchar2(10)	- NN
		char	billenq_acct_num[BUF_LEN];		// varchar2(10)	- NN
		char	billenq_pin[BUF_LEN];			// varchar2(6)	- NN
		char	billenq_current[BUF_LEN];		// varchar2(15)
		char	billenq_outstand[BUF_LEN];		// varchar2(15)
		char	billenq_last_update[BUF_LEN];	// varchar2(14)
		char	billenq_last_billamt[BUF_LEN];	// varchar2(15)
		char	billenq_last_billdate[BUF_LEN];	// varchar2(14)
		char	billenq_last_payamt[BUF_LEN];	// varchar2(15)
		char	billenq_last_paymode[BUF_LEN];	// varchar2(3)
		char	billenq_last_paydate[BUF_LEN];	// varchar2(14)
		char	billenq_lang[BUF_LEN];			// varchar2(1)
		char	billenq_min_payment[BUF_LEN];	// varchar2(15)
		char	billenq_con_type[BUF_LEN];		// varchar2(1)
	} *a;

	struct psi_ind
	{
		short	row_id_ind; 
 		short	billenq_mob_num_ind;
		short	billenq_acct_num_ind;
		short	billenq_pin_ind;
		short	billenq_current_ind;
		short	billenq_outstand_ind;
		short	billenq_last_update_ind;
 		short	billenq_last_billamt_ind;
		short	billenq_last_billdate_ind;
		short	billenq_last_payamt_ind;
		short	billenq_last_paymode_ind;
		short	billenq_last_paydate_ind;
		short	billenq_lang_ind;
		short	billenq_min_payment_ind;
		short	billenq_con_type_ind;
	}a_ind[FETCH_SIZE];

	int rows_to_fetch, rows_before, rows_this_time;

/* EXEC SQL END DECLARE SECTION; */ 
#line 198 "d:\\src\\customerprofiler\\db.pc"


	int i;

	rows_to_fetch = FETCH_SIZE;		// number of rows in each "batch"  
	rows_before = 0;				   // previous value of sqlerrd[2]   
	rows_this_time = FETCH_SIZE; 

	if((a = new psi_t[rows_to_fetch])==NULL)
	{
		cout<<" cant allocate memory for billenq_tab fetch"<<endl;
		exit(0);
	}

 
	/* EXEC SQL 
	AT customer_care 
	DECLARE  c_billenq_tab CURSOR FOR 
	SELECT	ROWID,
		BILLENQ_MOB_NUM,
		BILLENQ_ACCT_NUM, 
		BILLENQ_PIN, 
		BILLENQ_CURRENT, 
		BILLENQ_OUTSTAND, 
		BILLENQ_LAST_UPDATE, 
		BILLENQ_LAST_BILLAMT, 
		BILLENQ_LAST_BILLDATE, 
		BILLENQ_LAST_PAYAMT, 
		BILLENQ_LAST_PAYMODE, 
		BILLENQ_LAST_PAYDATE, 
		BILLENQ_LANG, 
		BILLENQ_MIN_PAYMENT, 
		BILLENQ_CON_TYPE
	//FROM	BILLENQ_TAB_TEST;
	FROM	BILLENQ_TAB; */ 
#line 232 "d:\\src\\customerprofiler\\db.pc"


 
	/* EXEC SQL AT customer_care  OPEN c_billenq_tab; */ 
#line 235 "d:\\src\\customerprofiler\\db.pc"

{
#line 235 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 235 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 235 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 4;
#line 235 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 235 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 235 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.stmt = sq0010;
#line 235 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 235 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )263;
#line 235 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.selerr = (unsigned short)1;
#line 235 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 235 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 235 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 235 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 235 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqcmod = (unsigned int )0;
#line 235 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 235 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 235 "d:\\src\\customerprofiler\\db.pc"
}

#line 235 "d:\\src\\customerprofiler\\db.pc"
 
	/* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 
#line 236 "d:\\src\\customerprofiler\\db.pc"
 

	while (rows_this_time == rows_to_fetch) 
	{ 
		/* EXEC SQL AT customer_care FOR :rows_to_fetch FETCH c_billenq_tab INTO :a INDICATOR :a_ind; */ 
#line 240 "d:\\src\\customerprofiler\\db.pc"

{
#line 240 "d:\\src\\customerprofiler\\db.pc"
  struct sqlexd sqlstm;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlvsn = 12;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.arrsiz = 15;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqladtp = &sqladt;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqltdsp = &sqltds;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.iters = (unsigned int  )rows_to_fetch;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.offset = (unsigned int  )291;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.selerr = (unsigned short)1;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.cud = sqlcud0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlety = (unsigned short)256;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqfoff = (           int )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqfmod = (unsigned int )2;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[0] = (         void  *)a->row_id;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[0] = (unsigned int  )100;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[0] = (         int  )sizeof(struct psi_t);
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[0] = (         void  *)&a_ind->row_id_ind;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[0] = (         int  )sizeof(struct psi_ind);
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[0] = (unsigned int  )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[1] = (         void  *)a->billenq_mob_num;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[1] = (unsigned int  )100;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[1] = (         int  )sizeof(struct psi_t);
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[1] = (         void  *)&a_ind->billenq_mob_num_ind;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[1] = (         int  )sizeof(struct psi_ind);
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[1] = (unsigned int  )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[1] = (unsigned short )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[1] = (unsigned short )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[2] = (         void  *)a->billenq_acct_num;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[2] = (unsigned int  )100;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[2] = (         int  )sizeof(struct psi_t);
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[2] = (         void  *)&a_ind->billenq_acct_num_ind;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[2] = (         int  )sizeof(struct psi_ind);
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[2] = (unsigned int  )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[2] = (unsigned short )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[2] = (unsigned short )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[3] = (         void  *)a->billenq_pin;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[3] = (unsigned int  )100;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[3] = (         int  )sizeof(struct psi_t);
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[3] = (         void  *)&a_ind->billenq_pin_ind;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[3] = (         int  )sizeof(struct psi_ind);
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[3] = (unsigned int  )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[3] = (unsigned short )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[3] = (unsigned short )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[4] = (         void  *)a->billenq_current;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[4] = (unsigned int  )100;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[4] = (         int  )sizeof(struct psi_t);
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[4] = (         void  *)&a_ind->billenq_current_ind;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[4] = (         int  )sizeof(struct psi_ind);
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[4] = (unsigned int  )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[4] = (unsigned short )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[4] = (unsigned short )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[5] = (         void  *)a->billenq_outstand;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[5] = (unsigned int  )100;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[5] = (         int  )sizeof(struct psi_t);
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[5] = (         void  *)&a_ind->billenq_outstand_ind;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[5] = (         int  )sizeof(struct psi_ind);
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[5] = (unsigned int  )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[5] = (unsigned short )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[5] = (unsigned short )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[6] = (         void  *)a->billenq_last_update;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[6] = (unsigned int  )100;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[6] = (         int  )sizeof(struct psi_t);
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[6] = (         void  *)&a_ind->billenq_last_update_ind;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[6] = (         int  )sizeof(struct psi_ind);
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[6] = (unsigned int  )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[6] = (unsigned short )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[6] = (unsigned short )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[7] = (         void  *)a->billenq_last_billamt;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[7] = (unsigned int  )100;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[7] = (         int  )sizeof(struct psi_t);
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[7] = (         void  *)&a_ind->billenq_last_billamt_ind;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[7] = (         int  )sizeof(struct psi_ind);
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[7] = (unsigned int  )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[7] = (unsigned short )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[7] = (unsigned short )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[8] = (         void  *)a->billenq_last_billdate;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[8] = (unsigned int  )100;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[8] = (         int  )sizeof(struct psi_t);
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[8] = (         void  *)&a_ind->billenq_last_billdate_ind;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[8] = (         int  )sizeof(struct psi_ind);
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[8] = (unsigned int  )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[8] = (unsigned short )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[8] = (unsigned short )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[9] = (         void  *)a->billenq_last_payamt;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[9] = (unsigned int  )100;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[9] = (         int  )sizeof(struct psi_t);
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[9] = (         void  *)&a_ind->billenq_last_payamt_ind;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[9] = (         int  )sizeof(struct psi_ind);
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[9] = (unsigned int  )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[9] = (unsigned short )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[9] = (unsigned short )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[10] = (         void  *)a->billenq_last_paymode;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[10] = (unsigned int  )100;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[10] = (         int  )sizeof(struct psi_t);
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[10] = (         void  *)&a_ind->billenq_last_paymode_ind;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[10] = (         int  )sizeof(struct psi_ind);
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[10] = (unsigned int  )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[10] = (unsigned short )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[10] = (unsigned short )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[11] = (         void  *)a->billenq_last_paydate;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[11] = (unsigned int  )100;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[11] = (         int  )sizeof(struct psi_t);
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[11] = (         void  *)&a_ind->billenq_last_paydate_ind;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[11] = (         int  )sizeof(struct psi_ind);
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[11] = (unsigned int  )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[11] = (unsigned short )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[11] = (unsigned short )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[12] = (         void  *)a->billenq_lang;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[12] = (unsigned int  )100;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[12] = (         int  )sizeof(struct psi_t);
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[12] = (         void  *)&a_ind->billenq_lang_ind;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[12] = (         int  )sizeof(struct psi_ind);
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[12] = (unsigned int  )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[12] = (unsigned short )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[12] = (unsigned short )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[13] = (         void  *)a->billenq_min_payment;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[13] = (unsigned int  )100;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[13] = (         int  )sizeof(struct psi_t);
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[13] = (         void  *)&a_ind->billenq_min_payment_ind;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[13] = (         int  )sizeof(struct psi_ind);
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[13] = (unsigned int  )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[13] = (unsigned short )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[13] = (unsigned short )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[14] = (         void  *)a->billenq_con_type;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[14] = (unsigned int  )100;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[14] = (         int  )sizeof(struct psi_t);
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[14] = (         void  *)&a_ind->billenq_con_type_ind;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[14] = (         int  )sizeof(struct psi_ind);
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[14] = (unsigned int  )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[14] = (unsigned short )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[14] = (unsigned short )0;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 240 "d:\\src\\customerprofiler\\db.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 240 "d:\\src\\customerprofiler\\db.pc"
  if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 240 "d:\\src\\customerprofiler\\db.pc"
}

#line 240 "d:\\src\\customerprofiler\\db.pc"
 		 

		rows_this_time = sqlca.sqlerrd[2] - rows_before; 
		rows_before = sqlca.sqlerrd[2]; 
//		printf(" this=%d before=%d \n", rows_this_time, rows_before);
		printf(" billenq_tab=%d \n", rows_before);

		billenq	bt;
		
		for(i=0; i<rows_this_time; i++)
		{

			//handling null fetches

			strcpy(a[i].billenq_current,
				  ((a_ind[i].billenq_current_ind < 0) ? "UNDEF":a[i].billenq_current));
			strcpy(a[i].billenq_outstand,
				  ((a_ind[i].billenq_outstand_ind < 0) ? "UNDEF":a[i].billenq_outstand));
			strcpy(a[i].billenq_last_update,
				  ((a_ind[i].billenq_last_update_ind < 0) ? "UNDEF":a[i].billenq_last_update));
			strcpy(a[i].billenq_last_billamt,
				  ((a_ind[i].billenq_last_billamt_ind < 0) ? "UNDEF":a[i].billenq_last_billamt));
			strcpy(a[i].billenq_last_billdate,
				  ((a_ind[i].billenq_last_billdate_ind < 0) ? "UNDEF":a[i].billenq_last_billdate));
			strcpy(a[i].billenq_last_payamt,
				  ((a_ind[i].billenq_last_payamt_ind < 0) ? "UNDEF":a[i].billenq_last_payamt));
			strcpy(a[i].billenq_last_paymode,
				  ((a_ind[i].billenq_last_paymode_ind < 0) ? "UNDEF":a[i].billenq_last_paymode));
			strcpy(a[i].billenq_last_paydate,
				  ((a_ind[i].billenq_last_paydate_ind < 0) ? "UNDEF":a[i].billenq_last_paydate));
			strcpy(a[i].billenq_lang,
				  ((a_ind[i].billenq_lang_ind < 0) ? "UNDEF":a[i].billenq_lang));
			strcpy(a[i].billenq_min_payment,
				  ((a_ind[i].billenq_min_payment_ind < 0) ? "UNDEF":a[i].billenq_min_payment));
			strcpy(a[i].billenq_con_type,
				  ((a_ind[i].billenq_con_type_ind < 0) ? "UNDEF":a[i].billenq_con_type));
			
			bt.init();

			bt.row_id				= a[i].row_id;
			bt.billenq_mob_num		= a[i].billenq_mob_num;
			bt.billenq_acct_num		= a[i].billenq_acct_num;
			bt.billenq_pin			= a[i].billenq_pin;
			bt.billenq_current		= a[i].billenq_current;
			bt.billenq_outstand		= a[i].billenq_outstand;
			bt.billenq_last_update	= a[i].billenq_last_update;
			bt.billenq_last_billamt	= a[i].billenq_last_billamt;
			bt.billenq_last_billdate= a[i].billenq_last_billdate;
			bt.billenq_last_payamt	= a[i].billenq_last_payamt;
			bt.billenq_last_paymode	= a[i].billenq_last_paymode;
			bt.billenq_last_paydate	= a[i].billenq_last_paydate;
			bt.billenq_lang			= a[i].billenq_lang;
			bt.billenq_min_payment	= a[i].billenq_min_payment;
			bt.billenq_con_type		= a[i].billenq_con_type;

			billenq_db_map.insert(BILLENQ_DEF::value_type(a[i].billenq_mob_num, bt));
		}
	} 

	/* EXEC SQL AT customer_care CLOSE c_billenq_tab; */ 
#line 299 "d:\\src\\customerprofiler\\db.pc"

{
#line 299 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 299 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 299 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 15;
#line 299 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 299 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 299 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 299 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )379;
#line 299 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 299 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 299 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 299 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 299 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 299 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 299 "d:\\src\\customerprofiler\\db.pc"
}

#line 299 "d:\\src\\customerprofiler\\db.pc"
 
	delete a;
	printf("%d  billenq_tab data read.\n\n",rows_before);
}

/*
void churn::db_read_prov_switch_image()
{
	EXEC SQL BEGIN DECLARE SECTION;

	struct psi_t
	{ 
		int		image_id;							// number(10)
		char	imsi_no[BUF_LEN];					// varchar2(15)
		char	conn_type[BUF_LEN];					// varchar2(10)
		char	status_reason_id[BUF_LEN];			// varchar2(5)
		char	switch_status[BUF_LEN];				// varchar2(2)
	} *a;

	struct psi_ind
	{ 
 		short	image_id_ind;
		short	imsi_no_ind;
		short	conn_type_ind;
		short	status_reason_id_ind;	
		short	switch_status_ind;		
	}a_ind[FETCH_SIZE];

	int rows_to_fetch, rows_before, rows_this_time;

EXEC SQL END DECLARE SECTION;

	int i;

	rows_to_fetch = FETCH_SIZE;		// number of rows in each "batch"  
	rows_before = 0;				   // previous value of sqlerrd[2]   
	rows_this_time = FETCH_SIZE; 

	if((a = new psi_t[rows_to_fetch])==NULL)
	{
		cout<<" cant allocate memory for prov_switch_image fetch"<<endl;
		exit(0);
	}

 
	EXEC SQL 
	AT customer_care 
	DECLARE  c_psi CURSOR FOR 
	SELECT	IMAGE_ID,
			IMSI_NO,
			CONN_TYPE,
			STATUS_REASON_ID,
			SWITCH_STATUS
	FROM	PROV_SWITCH_IMAGE;

 
	EXEC SQL AT customer_care  OPEN c_psi; 
	EXEC SQL WHENEVER NOT FOUND CONTINUE; 

	while (rows_this_time == rows_to_fetch) 
	{ 
		EXEC SQL AT customer_care FOR :rows_to_fetch FETCH c_psi INTO :a INDICATOR :a_ind; 		 

		rows_this_time = sqlca.sqlerrd[2] - rows_before; 
		rows_before = sqlca.sqlerrd[2]; 
//		printf(" this=%d before=%d \n", rows_this_time, rows_before);
		printf(" prov_switch_image=%d \n", rows_before);

		prov_switch_image	psi;
		churn_data			cd;
		ccbs_profile		ccbs_p;

		DOC_DEF::iterator i_doc;

		
		for(i=0; i<rows_this_time; i++)
		{

			//handling null fetches

			a[i].image_id = (a_ind[i].image_id_ind < 0) ? 0 : a[i].image_id;
			strcpy(a[i].imsi_no,
				  ((a_ind[i].imsi_no_ind < 0) ? "UNDEF":a[i].imsi_no));
			strcpy(a[i].conn_type,
				  ((a_ind[i].conn_type_ind < 0) ? "UNDEF":a[i].conn_type));
			strcpy(a[i].status_reason_id,
				  ((a_ind[i].status_reason_id_ind < 0) ? "UNDEF":a[i].status_reason_id));
			strcpy(a[i].switch_status,
				  ((a_ind[i].switch_status_ind < 0) ? "UNDEF":a[i].switch_status));
			
			//if ( ( strncmp(a[i].conn_type, "VOICEPRE", 8) != 0 ) && ( strncmp(a[i].switch_status, "D", 1) != 0 ) )
			if ( strncmp(a[i].switch_status, "D", 1) != 0 )
			{
				ccbs_p.init();
				ccbs_p.imsi		= a[i].imsi_no;
				//ccbs_p.image_id	= a[i].image_id;

				//psi_map.insert(PSI_DEF::value_type(a[i].image_id, a[i].imsi_no));

				ccbs_profile_map.insert(CCBS_PROFILE_DEF::value_type(a[i].imsi_no, ccbs_p));

			}
		}
	} 

	EXEC SQL AT customer_care CLOSE c_psi; 
	delete a;
	printf("%d  prov_switch_image data read.\n\n",rows_before);
}

*/

/*
void churn::db_read_cam_contract()
{
	EXEC SQL BEGIN DECLARE SECTION;

	struct contract_t
	{ 
		int		contract_id;							// number(10) - NN
		int		subscriber_node_id;						// number(10) - NN
		char	is_payment_responsible[BUF_LEN];		// varchar2(1)
		float	credit_limit;							// number(11,2)
		char	contract_type[BUF_LEN];					// varchar2(5) - NN
		char	status[BUF_LEN];						// varchar2(2) - NN
	} *a;

	struct contract_ind
	{ 
		short	contract_id_ind;							
		short	subscriber_node_id_ind;						
		short	is_payment_responsible_ind;		
		short	credit_limit_ind;							
		short	contract_type_ind;					
		short	status_ind;						
	}a_ind[FETCH_SIZE];

	int rows_to_fetch, rows_before, rows_this_time;

EXEC SQL END DECLARE SECTION;

	int i;
 
	rows_to_fetch = FETCH_SIZE;		// number of rows in each "batch"  
	rows_before = 0;				   // previous value of sqlerrd[2]   
	rows_this_time = FETCH_SIZE; 

	if((a = new contract_t[rows_to_fetch])==NULL)
	{
		cout<<" cant allocate memory for cam_contract fetch"<<endl;
		exit(0);
	}

 
	EXEC SQL 
	AT customer_care 
	DECLARE  c_contract CURSOR FOR 
	SELECT	CONTRACT_ID, 
			  SUBSCRIBER_NODE_ID, 
			  IS_PAYMENT_RESPONSIBLE, 
			  CREDIT_LIMIT, 
			  CONTRACT_TYPE, 
			  STATUS 
	FROM	CAM_CONTRACT;

 
	EXEC SQL AT customer_care  OPEN c_contract; 
	EXEC SQL WHENEVER NOT FOUND CONTINUE; 

	cam_contract cc;
	
	while (rows_this_time == rows_to_fetch) 
	{ 
		EXEC SQL AT customer_care FOR :rows_to_fetch FETCH c_contract INTO :a INDICATOR :a_ind; 		 

		rows_this_time = sqlca.sqlerrd[2] - rows_before; 
		rows_before = sqlca.sqlerrd[2]; 
//		printf(" this=%d before=%d \n", rows_this_time, rows_before);
		printf(" cam_contract=%d \n", rows_before);

		for(i=0; i<rows_this_time; i++)
		{

			//handling null fetches

			a[i].contract_id = (a_ind[i].contract_id_ind < 0) ? 0 : a[i].contract_id;
			a[i].subscriber_node_id = (a_ind[i].subscriber_node_id_ind < 0) ? 0 : a[i].subscriber_node_id;

			strcpy(a[i].is_payment_responsible,
				  ((a_ind[i].is_payment_responsible_ind < 0) ? "UNDEF":a[i].is_payment_responsible));
			a[i].credit_limit = (a_ind[i].credit_limit_ind < 0) ? 0 : a[i].credit_limit;
			strcpy(a[i].contract_type,
				  ((a_ind[i].contract_type_ind < 0) ? "UNDEF":a[i].contract_type));
			strcpy(a[i].status,
				  ((a_ind[i].status_ind < 0) ? "UNDEF":a[i].status));

			cc.init();

			cc.contract_id				= a[i].contract_id;							
			cc.subscriber_node_id		= a[i].subscriber_node_id;						
			cc.is_payment_responsible	= a[i].is_payment_responsible;	
			cc.credit_limit				= a[i].credit_limit;							
			cc.contract_type			= a[i].contract_type;							
			cc.status					= a[i].status;									

			cam_contract_map.insert(CONTRACT_DEF::value_type(a[i].contract_id, cc));
		}
	} 

	EXEC SQL AT customer_care CLOSE c_contract; 
	delete a;
	printf("%d  cam_contract data read.\n\n",rows_before);
}
*/

/*
void churn::db_read_cam_connection()
{
	EXEC SQL BEGIN DECLARE SECTION;

	struct connection_t
	{ 
		int		connection_id;						// number(10) - NN
		int		package_contract_id;					// number(10)
		char	status[BUF_LEN];					// varchar2(2) - NN
		int		image_id;							// number(10)
	} *a;

	struct connection_ind
	{ 
		short	connection_id_ind;
		short	package_contract_id_ind;					
		short	status_ind;							
		short	image_id_ind;						
	}a_ind[FETCH_SIZE];

	int rows_to_fetch, rows_before, rows_this_time;

EXEC SQL END DECLARE SECTION;

	int i;
 
	rows_to_fetch = FETCH_SIZE;		// number of rows in each "batch"  
	rows_before = 0;				   // previous value of sqlerrd[2]   
	rows_this_time = FETCH_SIZE; 

	if((a = new connection_t[rows_to_fetch])==NULL)
	{
		cout<<" cant allocate memory for cam_connection fetch"<<endl;
		exit(0);
	}

 
	EXEC SQL 
	AT customer_care 
	DECLARE  c_connection CURSOR FOR 
	SELECT	CONNECTION_ID,
			PACKAGE_CONTRACT_ID, 
			  STATUS, 
			  IMAGE_ID 
	FROM	CAM_CONNECTION;
	//FROM	CAM_CONNECTION_ivr_v;

 
	EXEC SQL AT customer_care  OPEN c_connection; 
	EXEC SQL WHENEVER NOT FOUND CONTINUE; 

	
	cam_connection cc;

	while (rows_this_time == rows_to_fetch) 
	{ 
		EXEC SQL AT customer_care FOR :rows_to_fetch FETCH c_connection INTO :a INDICATOR :a_ind; 		 

		rows_this_time = sqlca.sqlerrd[2] - rows_before; 
		rows_before = sqlca.sqlerrd[2]; 
//		printf(" this=%d before=%d \n", rows_this_time, rows_before);
		printf(" cam_connection=%d \n", rows_before);

		for(i=0; i<rows_this_time; i++)
		{

			//handling null fetches

			a[i].connection_id = (a_ind[i].connection_id_ind < 0) ? 0 : a[i].connection_id;
			a[i].package_contract_id = (a_ind[i].package_contract_id_ind < 0) ? 0 : a[i].package_contract_id;
			strcpy(a[i].status,
				  ((a_ind[i].status_ind < 0) ? "UNDEF":a[i].status));
			a[i].image_id = (a_ind[i].image_id_ind < 0) ? 0 : a[i].image_id;
			
			
			cc.init();

			cc.connection_id			= a[i].connection_id;
			cc.package_contract_id		= a[i].package_contract_id;					
			cc.status					= a[i].status;
			cc.image_id					= a[i].image_id;

			cam_connection_map.insert(CONNECTION_DEF::value_type(a[i].connection_id, cc));

			if(set_current(a[i].image_id))
			{
				current->connection_id			= a[i].connection_id;
				current->package_contract_id	= a[i].package_contract_id;
			}
			

			if ( strncmp(a[i].status, "D", 1) != 0 )
			{
				cc_multimap.insert(CC_DEF::value_type(a[i].image_id, a[i].connection_id));
			}
		}
	} 

	EXEC SQL AT customer_care CLOSE c_connection; 
	delete a;
	printf("%d  cam_connection data read.\n\n",rows_before);
}
*/

/*
void churn::db_read_dyn_1_connection()
{
	EXEC SQL BEGIN DECLARE SECTION;

	struct connection_t
	{ 
		char	imsi[BUF_LEN];					// varchar2(20)
		char	start_date[BUF_LEN];			// date - NN
		char	end_date[BUF_LEN];				// date
		char	status[BUF_LEN];				// varchar2(2)
	} *a;

	struct connection_ind
	{ 
		short	imsi_ind;			
		short	start_date_ind;	
		short	end_date_ind;
		short	status_ind;		
	}a_ind[FETCH_SIZE];

	int rows_to_fetch, rows_before, rows_this_time;

	char	b_check_date[20];

	EXEC SQL END DECLARE SECTION;

	strcpy(b_check_date, check_date);

	int i;
	rows_to_fetch = FETCH_SIZE;		// number of rows in each "batch"  
	rows_before = 0;				   // previous value of sqlerrd[2]   
	rows_this_time = FETCH_SIZE; 

	if((a = new connection_t[rows_to_fetch])==NULL)
	{
		cout<<" cant allocate memeory for dyn_1_connection fetch"<<endl;
		exit(0);
	}

	cout << "b_check_date = " << b_check_date << "|" << endl;

	ccbs_profile ccbs_p;

 
	EXEC SQL 
	AT customer_care 
	DECLARE  c_conn CURSOR FOR 
	SELECT	IMSI,
			START_DATE,
			END_DATE,
			STATUS
	FROM	DYN_1_CONNECTION_H
	WHERE	SERVICE_ID IN(1,2,3);

	//AND		to_date(to_char(START_DATE, 'YYYYMMDDHH24MISS'),'YYYYMMDDHH24MISS') < to_date (to_char(:b_check_date, 'YYYYMMDDHH24MISS'),'YYYYMMDDHH24MISS');

	//AND		STATUS NOT IN('D');

	//AND		to_date (to_char(:b_check_date, 'YYYYMMDDHH24MISS')) BETWEEN to_date(to_char(START_DATE, 'YYYYMMDDHH24MISS')) AND to_date(to_char(NVL(END_DATE, '20500101000000'),'YYYYMMDDHH24MISS'));
	

	EXEC SQL AT customer_care  OPEN c_conn; 
	EXEC SQL WHENEVER NOT FOUND CONTINUE; 

	while (rows_this_time == rows_to_fetch) 
	{ 
		EXEC SQL AT customer_care FOR :rows_to_fetch FETCH c_conn INTO :a INDICATOR :a_ind; 		 

		rows_this_time = sqlca.sqlerrd[2] - rows_before; 
		rows_before = sqlca.sqlerrd[2]; 
//		printf(" this=%d before=%d \n", rows_this_time, rows_before);
		printf(" dyn_1_connection=%d \n", rows_before);

		//dyn_1_connection cc;
		reng_date_time c_date, s_date, e_date;

		check_date[14] = '\0';
		c_date.set_date_time(check_date);



		for(i=0; i<rows_this_time; i++)
		{

			//handling null fetches

			strcpy(a[i].imsi,
				  ((a_ind[i].imsi_ind < 0) ? "UNDEF":a[i].imsi));
			strcpy(a[i].start_date,
				  ((a_ind[i].start_date_ind < 0) ? "19490101000000":a[i].start_date));
			strcpy(a[i].end_date,
				  ((a_ind[i].end_date_ind < 0) ? "20500101000000":a[i].end_date));
			strcpy(a[i].status,
				  ((a_ind[i].status_ind < 0) ? "UNDEF":a[i].status));

			a[i].start_date[14] = '\0';
			s_date.set_date_time(a[i].start_date);

			a[i].end_date[14] = '\0';
			e_date.set_date_time(a[i].end_date);
			

			//if ( ( db_first_minus_second(check_date, a[i].start_date) > 0 ) && ( 
			//db_first_minus_second(a[i].end_date, check_date) > 0 ) )
			
			
			//if ( ( strncmp(a[i].status, "D", 1) != 0 ) && ( db_first_minus_second(check_date, a[i].start_date) > 0 ) && ( 
			//db_first_minus_second(a[i].end_date, check_date) > 0 ) )
			
			if ( ( strncmp(a[i].status, "D", 1) != 0 ) && ( s_date < c_date ) && ( 
			c_date < e_date ) )
			{
				ccbs_p.init();
				ccbs_p.imsi		= a[i].imsi;

				ccbs_profile_map.insert(CCBS_PROFILE_DEF::value_type(a[i].imsi, ccbs_p));
				//cout << "put to map" << endl;
			}

			//int jj;

			//cin >> jj;
		}
	}
	
	EXEC SQL AT customer_care CLOSE c_conn; 
	delete a;
	printf("%d  dyn_1_connection data read.\n\n",rows_before);
}
*/

void churn::db_read_cam_subscriber_node()
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 753 "d:\\src\\customerprofiler\\db.pc"


	struct subscriber_t
	{ 
		int		subscriber_node_id;				// number(10) - NN
		int		subscriber_profile_id;			// number(10) - NN
		char	is_payment_responsible[BUF_LEN];	// varchar2(1)
		char	status[BUF_LEN];				// varchar2(2) - NN
	} *a;

	struct subscriber_ind
	{ 
		short	subscriber_node_id_ind;			
		short	subscriber_profile_id_ind;		
		short	is_payment_responsible_ind;		
		short	status_ind;						
	}a_ind[FETCH_SIZE];

	int rows_to_fetch, rows_before, rows_this_time;

	/* EXEC SQL END DECLARE SECTION; */ 
#line 773 "d:\\src\\customerprofiler\\db.pc"


	int i;
	rows_to_fetch = FETCH_SIZE;		// number of rows in each "batch"  
	rows_before = 0;				   // previous value of sqlerrd[2]   
	rows_this_time = FETCH_SIZE; 

	if((a = new subscriber_t[rows_to_fetch])==NULL)
	{
		cout<<" cant allocate memeory for cam_subscriber_node fetch"<<endl;
		exit(0);
	}

 
	/* EXEC SQL 
	AT customer_care 
	DECLARE  c_subscriber CURSOR FOR 
	SELECT	SUBSCRIBER_NODE_ID, 
		  SUBSCRIBER_PROFILE_ID, 
		  IS_PAYMENT_RESPONSIBLE, 
		  STATUS
	FROM	CAM_SUBSCRIBER_NODE; */ 
#line 794 "d:\\src\\customerprofiler\\db.pc"


	/* EXEC SQL AT customer_care  OPEN c_subscriber; */ 
#line 796 "d:\\src\\customerprofiler\\db.pc"

{
#line 796 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 796 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 796 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 15;
#line 796 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 796 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 796 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.stmt = sq0011;
#line 796 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 796 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )407;
#line 796 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.selerr = (unsigned short)1;
#line 796 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 796 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 796 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 796 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 796 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqcmod = (unsigned int )0;
#line 796 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 796 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 796 "d:\\src\\customerprofiler\\db.pc"
}

#line 796 "d:\\src\\customerprofiler\\db.pc"
 
	/* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 
#line 797 "d:\\src\\customerprofiler\\db.pc"
 

	cam_subscriber_node cc;
	
	while (rows_this_time == rows_to_fetch) 
	{ 
		/* EXEC SQL AT customer_care FOR :rows_to_fetch FETCH c_subscriber INTO :a INDICATOR :a_ind; */ 
#line 803 "d:\\src\\customerprofiler\\db.pc"

{
#line 803 "d:\\src\\customerprofiler\\db.pc"
  struct sqlexd sqlstm;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlvsn = 12;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.arrsiz = 15;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqladtp = &sqladt;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqltdsp = &sqltds;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.iters = (unsigned int  )rows_to_fetch;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.offset = (unsigned int  )435;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.selerr = (unsigned short)1;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.cud = sqlcud0;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlety = (unsigned short)256;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqfoff = (           int )0;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqfmod = (unsigned int )2;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[0] = (         void  *)&a->subscriber_node_id;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[0] = (         int  )sizeof(struct subscriber_t);
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[0] = (         void  *)&a_ind->subscriber_node_id_ind;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[0] = (         int  )sizeof(struct subscriber_ind);
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[0] = (unsigned int  )0;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[1] = (         void  *)&a->subscriber_profile_id;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[1] = (         int  )sizeof(struct subscriber_t);
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[1] = (         void  *)&a_ind->subscriber_profile_id_ind;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[1] = (         int  )sizeof(struct subscriber_ind);
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[1] = (unsigned int  )0;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[1] = (unsigned short )0;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[1] = (unsigned short )0;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[2] = (         void  *)a->is_payment_responsible;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[2] = (unsigned int  )100;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[2] = (         int  )sizeof(struct subscriber_t);
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[2] = (         void  *)&a_ind->is_payment_responsible_ind;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[2] = (         int  )sizeof(struct subscriber_ind);
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[2] = (unsigned int  )0;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[2] = (unsigned short )0;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[2] = (unsigned short )0;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[3] = (         void  *)a->status;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[3] = (unsigned int  )100;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[3] = (         int  )sizeof(struct subscriber_t);
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[3] = (         void  *)&a_ind->status_ind;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[3] = (         int  )sizeof(struct subscriber_ind);
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[3] = (unsigned int  )0;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[3] = (unsigned short )0;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[3] = (unsigned short )0;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 803 "d:\\src\\customerprofiler\\db.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 803 "d:\\src\\customerprofiler\\db.pc"
  if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 803 "d:\\src\\customerprofiler\\db.pc"
}

#line 803 "d:\\src\\customerprofiler\\db.pc"
 		 

		rows_this_time = sqlca.sqlerrd[2] - rows_before; 
		rows_before = sqlca.sqlerrd[2]; 
//		printf(" this=%d before=%d \n", rows_this_time, rows_before);
		printf(" cam_subscriber_node=%d \n", rows_before);

		for(i=0; i<rows_this_time; i++)
		{

			//handling null fetches

			a[i].subscriber_node_id = (a_ind[i].subscriber_node_id_ind < 0) ? 0 : a[i].subscriber_node_id;
			a[i].subscriber_profile_id = (a_ind[i].subscriber_profile_id_ind < 0) ? 0 : a[i].subscriber_profile_id;
			strcpy(a[i].is_payment_responsible,
				  ((a_ind[i].is_payment_responsible_ind < 0) ? "UNDEF":a[i].is_payment_responsible));
			strcpy(a[i].status,
				  ((a_ind[i].status_ind < 0) ? "UNDEF":a[i].status));
			
			cc.init();

			cc.subscriber_node_id		= a[i].subscriber_node_id ;				
			cc.subscriber_profile_id	= a[i].subscriber_profile_id ;			
			cc.is_payment_responsible	= a[i].is_payment_responsible ;		
			cc.status					= a[i].status ;						

			cam_subscriber_node_map.insert(CAM_SUBSCRIBER_NODE_DEF::value_type(a[i].subscriber_node_id, cc));
		}
	}
	
	/* EXEC SQL AT customer_care CLOSE c_subscriber; */ 
#line 833 "d:\\src\\customerprofiler\\db.pc"

{
#line 833 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 833 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 833 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 15;
#line 833 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 833 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 833 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 833 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )479;
#line 833 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 833 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 833 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 833 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 833 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 833 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 833 "d:\\src\\customerprofiler\\db.pc"
}

#line 833 "d:\\src\\customerprofiler\\db.pc"
 
	delete a;
	printf("%d  cam_subscriber_node data read.\n\n",rows_before);
}


/*
void churn::db_read_cam_contract_package()
{
	EXEC SQL BEGIN DECLARE SECTION;

	struct contract_package_t
	{ 
		int		contract_package_id;					// number(10) - NN
		int		contract_id;							// number(10)
		char	status[BUF_LEN];						// varchar2(2) - NN
	} *a;

	struct contract_package_ind
	{ 
		short	contract_package_id_ind;					
		short	contract_id_ind;							
		short	status_ind;									
	}a_ind[FETCH_SIZE];

	int rows_to_fetch, rows_before, rows_this_time;

	EXEC SQL END DECLARE SECTION;

	int i;
	rows_to_fetch = FETCH_SIZE;		// number of rows in each "batch"  
	rows_before = 0;				   // previous value of sqlerrd[2]   
	rows_this_time = FETCH_SIZE; 

	if((a = new contract_package_t[rows_to_fetch])==NULL)
	{
		cout<<" cant allocate memeory for cam_contract_package fetch"<<endl;
		exit(0);
	}

 
	EXEC SQL 
	AT customer_care 
	DECLARE  c_ccp CURSOR FOR 
	SELECT	CONTRACT_PACKAGE_ID, 
		  CONTRACT_ID, 
		  STATUS 
	FROM	CAM_CONTRACT_PACKAGE;

	EXEC SQL AT customer_care  OPEN c_ccp; 
	EXEC SQL WHENEVER NOT FOUND CONTINUE; 

	cam_contract_package cc;
	
	while (rows_this_time == rows_to_fetch) 
	{ 
		EXEC SQL AT customer_care FOR :rows_to_fetch FETCH c_ccp INTO :a INDICATOR :a_ind; 		 

		rows_this_time = sqlca.sqlerrd[2] - rows_before; 
		rows_before = sqlca.sqlerrd[2]; 
//		printf(" this=%d before=%d \n", rows_this_time, rows_before);
		printf(" cam_contract_package =%d \n", rows_before);

		for(i=0; i<rows_this_time; i++)
		{
			//handling null fetches

			a[i].contract_package_id = (a_ind[i].contract_package_id_ind < 0) ? 0 : a[i].contract_package_id;
			a[i].contract_id = (a_ind[i].contract_id_ind < 0) ? 0 : a[i].contract_id;
			strcpy(a[i].status,
				  ((a_ind[i].status_ind < 0) ? "UNDEF":a[i].status));

			cc.init();

			cc.contract_package_id		= a[i].contract_package_id;
			cc.contract_id				= a[i].contract_id;
			cc.status					= a[i].status;

			cam_contract_package_map.insert(CAM_CONTRACT_PACKAGE_DEF::value_type(a[i].contract_package_id, cc));
		}
	}
	
	EXEC SQL AT customer_care CLOSE c_ccp; 
	delete a;
	printf("%d  cam_contract_package data read.\n\n",rows_before);
}
*/




void churn::db_read_cam_subscriber_profile()
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 926 "d:\\src\\customerprofiler\\db.pc"


	struct profile_t
	{ 
		int		subscriber_profile_id;			// number(10)
		char	communication_language_id[BUF_LEN];	// varchar2(5)
	} *a;

	struct profile_ind
	{ 
		short	subscriber_profile_id_ind;
		short	communication_language_id_ind;		
	}a_ind[FETCH_SIZE];

	int rows_to_fetch, rows_before, rows_this_time;

	/* EXEC SQL END DECLARE SECTION; */ 
#line 942 "d:\\src\\customerprofiler\\db.pc"


	int i;
	rows_to_fetch = FETCH_SIZE;		// number of rows in each "batch"  
	rows_before = 0;				   // previous value of sqlerrd[2]   
	rows_this_time = FETCH_SIZE; 

	if((a = new profile_t[rows_to_fetch])==NULL)
	{
		cout<<" cant allocate memeory for cam_subscriber_profile fetch"<<endl;
		exit(0);
	}

 
	/* EXEC SQL 
	AT customer_care 
	DECLARE  c_profile CURSOR FOR 
	SELECT	SUBSCRIBER_PROFILE_ID,
			COMMUNICATION_LANGUAGE_ID
	FROM	CAM_SUBSCRIBER_PROFILE; */ 
#line 961 "d:\\src\\customerprofiler\\db.pc"


	/* EXEC SQL AT customer_care  OPEN c_profile; */ 
#line 963 "d:\\src\\customerprofiler\\db.pc"

{
#line 963 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 963 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 963 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 15;
#line 963 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 963 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 963 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.stmt = sq0012;
#line 963 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 963 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )507;
#line 963 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.selerr = (unsigned short)1;
#line 963 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 963 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 963 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 963 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 963 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqcmod = (unsigned int )0;
#line 963 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 963 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 963 "d:\\src\\customerprofiler\\db.pc"
}

#line 963 "d:\\src\\customerprofiler\\db.pc"
 
	/* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 
#line 964 "d:\\src\\customerprofiler\\db.pc"
 

	cam_subscriber_profile csp;
	
	while (rows_this_time == rows_to_fetch) 
	{ 
		/* EXEC SQL AT customer_care FOR :rows_to_fetch FETCH c_profile INTO :a INDICATOR :a_ind; */ 
#line 970 "d:\\src\\customerprofiler\\db.pc"

{
#line 970 "d:\\src\\customerprofiler\\db.pc"
  struct sqlexd sqlstm;
#line 970 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlvsn = 12;
#line 970 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.arrsiz = 15;
#line 970 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqladtp = &sqladt;
#line 970 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqltdsp = &sqltds;
#line 970 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.iters = (unsigned int  )rows_to_fetch;
#line 970 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.offset = (unsigned int  )535;
#line 970 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.selerr = (unsigned short)1;
#line 970 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.cud = sqlcud0;
#line 970 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 970 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlety = (unsigned short)256;
#line 970 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 970 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqfoff = (           int )0;
#line 970 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqfmod = (unsigned int )2;
#line 970 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[0] = (         void  *)&a->subscriber_profile_id;
#line 970 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
#line 970 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[0] = (         int  )sizeof(struct profile_t);
#line 970 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[0] = (         void  *)&a_ind->subscriber_profile_id_ind;
#line 970 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[0] = (         int  )sizeof(struct profile_ind);
#line 970 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[0] = (unsigned int  )0;
#line 970 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 970 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 970 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[1] = (         void  *)a->communication_language_id;
#line 970 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[1] = (unsigned int  )100;
#line 970 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[1] = (         int  )sizeof(struct profile_t);
#line 970 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[1] = (         void  *)&a_ind->communication_language_id_ind;
#line 970 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[1] = (         int  )sizeof(struct profile_ind);
#line 970 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[1] = (unsigned int  )0;
#line 970 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[1] = (unsigned short )0;
#line 970 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[1] = (unsigned short )0;
#line 970 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 970 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 970 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 970 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 970 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 970 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 970 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 970 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 970 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 970 "d:\\src\\customerprofiler\\db.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 970 "d:\\src\\customerprofiler\\db.pc"
  if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 970 "d:\\src\\customerprofiler\\db.pc"
}

#line 970 "d:\\src\\customerprofiler\\db.pc"
 		 

		rows_this_time = sqlca.sqlerrd[2] - rows_before; 
		rows_before = sqlca.sqlerrd[2]; 
//		printf(" this=%d before=%d \n", rows_this_time, rows_before);
		printf(" cam_subscriber_profile =%d \n", rows_before);

		for(i=0; i<rows_this_time; i++)
		{

			//handling null fetches

			a[i].subscriber_profile_id = (a_ind[i].subscriber_profile_id_ind < 0) ? 0 : a[i].subscriber_profile_id;
			strcpy(a[i].communication_language_id,
				  ((a_ind[i].communication_language_id_ind < 0) ? "ENG":a[i].communication_language_id));
			
			csp.init();
			csp.communication_language_id=a[i].communication_language_id;

			cam_subscriber_profile_map.insert(PROFILE_DEF::value_type(a[i].subscriber_profile_id, csp));
		}
	}
	
	/* EXEC SQL AT customer_care CLOSE c_profile; */ 
#line 993 "d:\\src\\customerprofiler\\db.pc"

{
#line 993 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 993 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 993 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 15;
#line 993 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 993 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 993 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 993 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )571;
#line 993 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 993 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 993 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 993 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 993 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 993 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 993 "d:\\src\\customerprofiler\\db.pc"
}

#line 993 "d:\\src\\customerprofiler\\db.pc"
 
	delete a;
	printf("%d  cam_subscriber_profile data read.\n\n",rows_before);
}


void churn::db_read_bill_i_pr_master()
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 1001 "d:\\src\\customerprofiler\\db.pc"


	struct profile_t
	{ 
		int		node_id;				// number(10)
		char	node_type[BUF_LEN];		// varchar2(2)
		float	brought_fwd;			// number(14,2)
		float	interim_bill_amount;	// number(14,2)
	} *a;

	struct profile_ind
	{ 
		short	node_id_ind;
		short	node_type_ind;
		short	brought_fwd_ind;
		short	interim_bill_amount_ind;
	}a_ind[FETCH_SIZE];

	int rows_to_fetch, rows_before, rows_this_time;

	/* EXEC SQL END DECLARE SECTION; */ 
#line 1021 "d:\\src\\customerprofiler\\db.pc"


	int i;
	rows_to_fetch = FETCH_SIZE;		// number of rows in each "batch"  
	rows_before = 0;				   // previous value of sqlerrd[2]   
	rows_this_time = FETCH_SIZE; 

	if((a = new profile_t[rows_to_fetch])==NULL)
	{
		cout<<" cant allocate memeory for bill_i_pr_master fetch"<<endl;
		exit(0);
	}

 
	/* EXEC SQL 
	AT customer_care 
	DECLARE  c_bill_i_pr_master CURSOR FOR 
	SELECT	NODE_ID,
			NODE_TYPE,
			BROUGHT_FWD,
			INTERIM_BILL_AMOUNT
	FROM	BILL_I_PR_MASTER; */ 
#line 1042 "d:\\src\\customerprofiler\\db.pc"


	/* EXEC SQL AT customer_care  OPEN c_bill_i_pr_master; */ 
#line 1044 "d:\\src\\customerprofiler\\db.pc"

{
#line 1044 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 1044 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 1044 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 15;
#line 1044 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 1044 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 1044 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.stmt = sq0013;
#line 1044 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 1044 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )599;
#line 1044 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.selerr = (unsigned short)1;
#line 1044 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 1044 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1044 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 1044 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 1044 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqcmod = (unsigned int )0;
#line 1044 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1044 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 1044 "d:\\src\\customerprofiler\\db.pc"
}

#line 1044 "d:\\src\\customerprofiler\\db.pc"
 
	/* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 
#line 1045 "d:\\src\\customerprofiler\\db.pc"
 

	bill_i_pr_master bipm;
	
	while (rows_this_time == rows_to_fetch) 
	{ 
		/* EXEC SQL AT customer_care FOR :rows_to_fetch FETCH c_bill_i_pr_master INTO :a INDICATOR :a_ind; */ 
#line 1051 "d:\\src\\customerprofiler\\db.pc"

{
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  struct sqlexd sqlstm;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlvsn = 12;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.arrsiz = 15;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqladtp = &sqladt;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqltdsp = &sqltds;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.iters = (unsigned int  )rows_to_fetch;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.offset = (unsigned int  )627;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.selerr = (unsigned short)1;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.cud = sqlcud0;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlety = (unsigned short)256;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqfoff = (           int )0;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqfmod = (unsigned int )2;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[0] = (         void  *)&a->node_id;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[0] = (         int  )sizeof(struct profile_t);
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[0] = (         void  *)&a_ind->node_id_ind;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[0] = (         int  )sizeof(struct profile_ind);
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[0] = (unsigned int  )0;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[1] = (         void  *)a->node_type;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[1] = (unsigned int  )100;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[1] = (         int  )sizeof(struct profile_t);
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[1] = (         void  *)&a_ind->node_type_ind;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[1] = (         int  )sizeof(struct profile_ind);
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[1] = (unsigned int  )0;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[1] = (unsigned short )0;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[1] = (unsigned short )0;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[2] = (         void  *)&a->brought_fwd;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[2] = (unsigned int  )sizeof(float);
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[2] = (         int  )sizeof(struct profile_t);
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[2] = (         void  *)&a_ind->brought_fwd_ind;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[2] = (         int  )sizeof(struct profile_ind);
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[2] = (unsigned int  )0;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[2] = (unsigned short )0;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[2] = (unsigned short )0;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[3] = (         void  *)&a->interim_bill_amount;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[3] = (unsigned int  )sizeof(float);
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[3] = (         int  )sizeof(struct profile_t);
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[3] = (         void  *)&a_ind->interim_bill_amount_ind;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[3] = (         int  )sizeof(struct profile_ind);
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[3] = (unsigned int  )0;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[3] = (unsigned short )0;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[3] = (unsigned short )0;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1051 "d:\\src\\customerprofiler\\db.pc"
  if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 1051 "d:\\src\\customerprofiler\\db.pc"
}

#line 1051 "d:\\src\\customerprofiler\\db.pc"
 		 

		rows_this_time = sqlca.sqlerrd[2] - rows_before; 
		rows_before = sqlca.sqlerrd[2]; 
//		printf(" this=%d before=%d \n", rows_this_time, rows_before);
		printf(" bill_i_pr_master =%d \n", rows_before);

		for(i=0; i<rows_this_time; i++)
		{

			//handling null fetches

			a[i].node_id = (a_ind[i].node_id_ind < 0) ? 0 : a[i].node_id;
			strcpy(a[i].node_type,
				  ((a_ind[i].node_type_ind < 0) ? "UNDEF":a[i].node_type));
			a[i].brought_fwd = (a_ind[i].brought_fwd_ind < 0) ? 0.0 : a[i].brought_fwd;
			a[i].interim_bill_amount = (a_ind[i].interim_bill_amount_ind < 0) ? 0.0 : a[i].interim_bill_amount;

			if ( strncmp(a[i].node_type, "C", 1) == 0 )
			{
				bipm.init();
				bipm.brought_fwd			= a[i].brought_fwd;
				bipm.interim_bill_amount	= a[i].interim_bill_amount;

				bill_i_pr_master_map.insert(BILL_I_PR_MASTER_DEF::value_type(a[i].node_id, bipm));
			}
		}
	}
	
	/* EXEC SQL AT customer_care CLOSE c_bill_i_pr_master; */ 
#line 1080 "d:\\src\\customerprofiler\\db.pc"

{
#line 1080 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 1080 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 1080 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 15;
#line 1080 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 1080 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 1080 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 1080 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )671;
#line 1080 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 1080 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1080 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 1080 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 1080 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1080 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 1080 "d:\\src\\customerprofiler\\db.pc"
}

#line 1080 "d:\\src\\customerprofiler\\db.pc"
 
	delete a;
	printf("%d  bill_i_pr_master data read.\n\n",rows_before);
}


void churn::db_read_bill_i_nonpr_contract_master()
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 1088 "d:\\src\\customerprofiler\\db.pc"


	struct profile_t
	{ 
		int		contract_id;					// number(10)
		float	brought_forward_outstanding;	// number(14,2)
		float	interim_bill_amount;			// number(14,2)
	} *a;

	struct profile_ind
	{ 
		short	contract_id_ind;
		short	brought_forward_outstanding_ind;
		short	interim_bill_amount_ind;
	}a_ind[FETCH_SIZE];

	int rows_to_fetch, rows_before, rows_this_time;

	/* EXEC SQL END DECLARE SECTION; */ 
#line 1106 "d:\\src\\customerprofiler\\db.pc"


	int i;
	rows_to_fetch = FETCH_SIZE;		// number of rows in each "batch"  
	rows_before = 0;				   // previous value of sqlerrd[2]   
	rows_this_time = FETCH_SIZE; 

	if((a = new profile_t[rows_to_fetch])==NULL)
	{
		cout<<" cant allocate memeory for bill_i_nonpr_contract_master fetch"<<endl;
		exit(0);
	}

 
	/* EXEC SQL 
	AT customer_care 
	DECLARE  c_bill_i_nonpr_contract_master CURSOR FOR 
	SELECT	CONTRACT_ID,
			BROUGHT_FORWARD_OUTSTANDING,
			INTERIM_BILL_AMOUNT
	FROM	BILL_I_NONPR_CONTRACT_MASTER; */ 
#line 1126 "d:\\src\\customerprofiler\\db.pc"


	/* EXEC SQL AT customer_care  OPEN c_bill_i_nonpr_contract_master; */ 
#line 1128 "d:\\src\\customerprofiler\\db.pc"

{
#line 1128 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 1128 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 1128 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 15;
#line 1128 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 1128 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 1128 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.stmt = sq0014;
#line 1128 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 1128 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )699;
#line 1128 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.selerr = (unsigned short)1;
#line 1128 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 1128 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1128 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 1128 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 1128 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqcmod = (unsigned int )0;
#line 1128 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1128 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 1128 "d:\\src\\customerprofiler\\db.pc"
}

#line 1128 "d:\\src\\customerprofiler\\db.pc"
 
	/* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 
#line 1129 "d:\\src\\customerprofiler\\db.pc"
 

	bill_i_nonpr_contract_master binpcm;
	
	while (rows_this_time == rows_to_fetch) 
	{ 
		/* EXEC SQL AT customer_care FOR :rows_to_fetch FETCH c_bill_i_nonpr_contract_master INTO :a INDICATOR :a_ind; */ 
#line 1135 "d:\\src\\customerprofiler\\db.pc"

{
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  struct sqlexd sqlstm;
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlvsn = 12;
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.arrsiz = 15;
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqladtp = &sqladt;
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqltdsp = &sqltds;
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.iters = (unsigned int  )rows_to_fetch;
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.offset = (unsigned int  )727;
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.selerr = (unsigned short)1;
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.cud = sqlcud0;
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlety = (unsigned short)256;
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqfoff = (           int )0;
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqfmod = (unsigned int )2;
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[0] = (         void  *)&a->contract_id;
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[0] = (         int  )sizeof(struct profile_t);
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[0] = (         void  *)&a_ind->contract_id_ind;
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[0] = (         int  )sizeof(struct profile_ind);
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[0] = (unsigned int  )0;
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[1] = (         void  *)&a->brought_forward_outstanding;
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(float);
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[1] = (         int  )sizeof(struct profile_t);
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[1] = (         void  *)&a_ind->brought_forward_outstanding_ind;
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[1] = (         int  )sizeof(struct profile_ind);
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[1] = (unsigned int  )0;
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[1] = (unsigned short )0;
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[1] = (unsigned short )0;
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[2] = (         void  *)&a->interim_bill_amount;
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[2] = (unsigned int  )sizeof(float);
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[2] = (         int  )sizeof(struct profile_t);
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[2] = (         void  *)&a_ind->interim_bill_amount_ind;
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[2] = (         int  )sizeof(struct profile_ind);
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[2] = (unsigned int  )0;
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[2] = (unsigned short )0;
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[2] = (unsigned short )0;
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1135 "d:\\src\\customerprofiler\\db.pc"
  if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 1135 "d:\\src\\customerprofiler\\db.pc"
}

#line 1135 "d:\\src\\customerprofiler\\db.pc"
 		 

		rows_this_time = sqlca.sqlerrd[2] - rows_before; 
		rows_before = sqlca.sqlerrd[2]; 
//		printf(" this=%d before=%d \n", rows_this_time, rows_before);
		printf(" bill_i_nonpr_contract_master =%d \n", rows_before);

		for(i=0; i<rows_this_time; i++)
		{

			//handling null fetches

			a[i].contract_id = (a_ind[i].contract_id_ind < 0) ? 0 : a[i].contract_id;
			a[i].brought_forward_outstanding = (a_ind[i].brought_forward_outstanding_ind < 0) ? 0.0 : a[i].brought_forward_outstanding;
			a[i].interim_bill_amount = (a_ind[i].interim_bill_amount_ind < 0) ? 0.0 : a[i].interim_bill_amount;

			binpcm.init();
			binpcm.brought_forward_outstanding			= a[i].brought_forward_outstanding;
			binpcm.interim_bill_amount	= a[i].interim_bill_amount;

			bill_i_nonpr_contract_master_map.insert(BILL_I_NONPR_CONTRACT_MASTER_DEF::value_type(a[i].contract_id, binpcm));
		}
	}
	
	/* EXEC SQL AT customer_care CLOSE c_bill_i_nonpr_contract_master; */ 
#line 1159 "d:\\src\\customerprofiler\\db.pc"

{
#line 1159 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 1159 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 1159 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 15;
#line 1159 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 1159 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 1159 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 1159 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )767;
#line 1159 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 1159 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1159 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 1159 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 1159 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1159 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 1159 "d:\\src\\customerprofiler\\db.pc"
}

#line 1159 "d:\\src\\customerprofiler\\db.pc"
 
	delete a;
	printf("%d  bill_i_nonpr_contract_master data read.\n\n",rows_before);
}


void churn::db_read_bill_bill_master_summary()
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 1167 "d:\\src\\customerprofiler\\db.pc"


	struct contract_balances_t
	{ 
		int		node_id;					// number(10)
		char	node_type[BUF_LEN];			// varchar2(1)
		float	amount;						// number(14,2)
	} *a;

	struct contract_balances_ind
	{ 
		short	node_id_ind;					
		short	node_type_ind;				
		short	amount_ind;					
	}a_ind[FETCH_SIZE];

	int rows_to_fetch, rows_before, rows_this_time;

	/* EXEC SQL END DECLARE SECTION; */ 
#line 1185 "d:\\src\\customerprofiler\\db.pc"


	int i;
	rows_to_fetch = FETCH_SIZE;		// number of rows in each "batch"  
	rows_before = 0;				   // previous value of sqlerrd[2]   
	rows_this_time = FETCH_SIZE; 

	if((a = new contract_balances_t[rows_to_fetch])==NULL)
	{
		cout<<" cant allocate memeory for bill_bill_master_summary fetch"<<endl;
		exit(0);
	}

 
	/* EXEC SQL 
	AT customer_care 
	DECLARE  c_contract_balances CURSOR FOR 
	SELECT		NODE_ID,          
				NODE_TYPE,       
				AMOUNT       
	FROM	BILL_BILL_MASTER_SUMMARY
	WHERE	ITEM_CODE = 'BILLAMT'; */ 
#line 1206 "d:\\src\\customerprofiler\\db.pc"


	/* EXEC SQL AT customer_care  OPEN c_contract_balances; */ 
#line 1208 "d:\\src\\customerprofiler\\db.pc"

{
#line 1208 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 1208 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 1208 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 15;
#line 1208 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 1208 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 1208 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.stmt = sq0015;
#line 1208 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 1208 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )795;
#line 1208 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.selerr = (unsigned short)1;
#line 1208 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 1208 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1208 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 1208 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 1208 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqcmod = (unsigned int )0;
#line 1208 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1208 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 1208 "d:\\src\\customerprofiler\\db.pc"
}

#line 1208 "d:\\src\\customerprofiler\\db.pc"
 
	/* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 
#line 1209 "d:\\src\\customerprofiler\\db.pc"
 


	while (rows_this_time == rows_to_fetch) 
	{ 
		/* EXEC SQL AT customer_care FOR :rows_to_fetch FETCH c_contract_balances INTO :a INDICATOR :a_ind; */ 
#line 1214 "d:\\src\\customerprofiler\\db.pc"

{
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  struct sqlexd sqlstm;
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlvsn = 12;
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.arrsiz = 15;
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqladtp = &sqladt;
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqltdsp = &sqltds;
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.iters = (unsigned int  )rows_to_fetch;
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.offset = (unsigned int  )823;
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.selerr = (unsigned short)1;
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.cud = sqlcud0;
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlety = (unsigned short)256;
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqfoff = (           int )0;
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqfmod = (unsigned int )2;
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[0] = (         void  *)&a->node_id;
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[0] = (         int  )sizeof(struct contract_balances_t);
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[0] = (         void  *)&a_ind->node_id_ind;
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[0] = (         int  )sizeof(struct contract_balances_ind);
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[0] = (unsigned int  )0;
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[1] = (         void  *)a->node_type;
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[1] = (unsigned int  )100;
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[1] = (         int  )sizeof(struct contract_balances_t);
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[1] = (         void  *)&a_ind->node_type_ind;
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[1] = (         int  )sizeof(struct contract_balances_ind);
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[1] = (unsigned int  )0;
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[1] = (unsigned short )0;
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[1] = (unsigned short )0;
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[2] = (         void  *)&a->amount;
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[2] = (unsigned int  )sizeof(float);
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[2] = (         int  )sizeof(struct contract_balances_t);
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[2] = (         void  *)&a_ind->amount_ind;
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[2] = (         int  )sizeof(struct contract_balances_ind);
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[2] = (unsigned int  )0;
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[2] = (unsigned short )0;
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[2] = (unsigned short )0;
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1214 "d:\\src\\customerprofiler\\db.pc"
  if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 1214 "d:\\src\\customerprofiler\\db.pc"
}

#line 1214 "d:\\src\\customerprofiler\\db.pc"
 		 

		rows_this_time = sqlca.sqlerrd[2] - rows_before; 
		rows_before = sqlca.sqlerrd[2]; 
//		printf(" this=%d before=%d \n", rows_this_time, rows_before);
		printf(" fb_contract_balances =%d \n", rows_before);

		for(i=0; i<rows_this_time; i++)
		{

			//handling null fetches

			a[i].amount = (a_ind[i].amount_ind < 0) ? 0.0 : a[i].amount;

			if ( strncmp(a[i].node_type, "C", 1) == 0 )
			{
				bill_bill_master_summary_map.insert(BILL_BILL_MASTER_SUMMARY_DEF::value_type(a[i].node_id, a[i].amount));
			}
		}
	}
	
	/* EXEC SQL AT customer_care CLOSE c_contract_balances; */ 
#line 1235 "d:\\src\\customerprofiler\\db.pc"

{
#line 1235 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 1235 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 1235 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 15;
#line 1235 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 1235 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 1235 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 1235 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )863;
#line 1235 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 1235 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1235 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 1235 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 1235 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1235 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 1235 "d:\\src\\customerprofiler\\db.pc"
}

#line 1235 "d:\\src\\customerprofiler\\db.pc"
 
	delete a;
	printf("%d  bill_bill_master_summary data read.\n\n",rows_before);
}

void churn::db_read_bill_bill_statement_summary()
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 1242 "d:\\src\\customerprofiler\\db.pc"


	struct contract_balances_t
	{ 
		int		node_id;					// number(10)
		char	node_type[BUF_LEN];			// varchar2(1)
		float	amount;						// number(14,2)
	} *a;

	struct contract_balances_ind
	{ 
		short	node_id_ind;					
		short	node_type_ind;			
		short	amount_ind;					
	}a_ind[FETCH_SIZE];

	int rows_to_fetch, rows_before, rows_this_time;

	/* EXEC SQL END DECLARE SECTION; */ 
#line 1260 "d:\\src\\customerprofiler\\db.pc"


	int i;
	rows_to_fetch = FETCH_SIZE;		// number of rows in each "batch"  
	rows_before = 0;				   // previous value of sqlerrd[2]   
	rows_this_time = FETCH_SIZE; 

	if((a = new contract_balances_t[rows_to_fetch])==NULL)
	{
		cout<<" cant allocate memeory for bill_bill_statement_summary fetch"<<endl;
		exit(0);
	}

 
	/* EXEC SQL 
	AT customer_care 
	DECLARE  c_bill_bill_statement_summary CURSOR FOR 
	SELECT		NODE_ID,          
				NODE_TYPE,         
				AMOUNT       
	FROM	BILL_BILL_STATEMENT_SUMMARY
	WHERE	ITEM_CODE = 'BILLAMT'; */ 
#line 1281 "d:\\src\\customerprofiler\\db.pc"



	/* EXEC SQL AT customer_care  OPEN c_bill_bill_statement_summary; */ 
#line 1284 "d:\\src\\customerprofiler\\db.pc"

{
#line 1284 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 1284 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 1284 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 15;
#line 1284 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 1284 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 1284 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.stmt = sq0016;
#line 1284 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 1284 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )891;
#line 1284 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.selerr = (unsigned short)1;
#line 1284 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 1284 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1284 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 1284 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 1284 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqcmod = (unsigned int )0;
#line 1284 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1284 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 1284 "d:\\src\\customerprofiler\\db.pc"
}

#line 1284 "d:\\src\\customerprofiler\\db.pc"
 
	/* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 
#line 1285 "d:\\src\\customerprofiler\\db.pc"
 

	while (rows_this_time == rows_to_fetch) 
	{ 
		/* EXEC SQL AT customer_care FOR :rows_to_fetch FETCH c_bill_bill_statement_summary INTO :a INDICATOR :a_ind; */ 
#line 1289 "d:\\src\\customerprofiler\\db.pc"

{
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  struct sqlexd sqlstm;
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlvsn = 12;
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.arrsiz = 15;
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqladtp = &sqladt;
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqltdsp = &sqltds;
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.iters = (unsigned int  )rows_to_fetch;
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.offset = (unsigned int  )919;
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.selerr = (unsigned short)1;
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.cud = sqlcud0;
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlety = (unsigned short)256;
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqfoff = (           int )0;
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqfmod = (unsigned int )2;
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[0] = (         void  *)&a->node_id;
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[0] = (         int  )sizeof(struct contract_balances_t);
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[0] = (         void  *)&a_ind->node_id_ind;
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[0] = (         int  )sizeof(struct contract_balances_ind);
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[0] = (unsigned int  )0;
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[1] = (         void  *)a->node_type;
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[1] = (unsigned int  )100;
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[1] = (         int  )sizeof(struct contract_balances_t);
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[1] = (         void  *)&a_ind->node_type_ind;
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[1] = (         int  )sizeof(struct contract_balances_ind);
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[1] = (unsigned int  )0;
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[1] = (unsigned short )0;
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[1] = (unsigned short )0;
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[2] = (         void  *)&a->amount;
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[2] = (unsigned int  )sizeof(float);
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[2] = (         int  )sizeof(struct contract_balances_t);
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[2] = (         void  *)&a_ind->amount_ind;
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[2] = (         int  )sizeof(struct contract_balances_ind);
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[2] = (unsigned int  )0;
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[2] = (unsigned short )0;
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[2] = (unsigned short )0;
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1289 "d:\\src\\customerprofiler\\db.pc"
  if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 1289 "d:\\src\\customerprofiler\\db.pc"
}

#line 1289 "d:\\src\\customerprofiler\\db.pc"
 		 

		rows_this_time = sqlca.sqlerrd[2] - rows_before; 
		rows_before = sqlca.sqlerrd[2]; 
//		printf(" this=%d before=%d \n", rows_this_time, rows_before);
		printf(" bill_bill_statement_summary =%d \n", rows_before);

		for(i=0; i<rows_this_time; i++)
		{

			//handling null fetches

			a[i].amount = (a_ind[i].amount_ind < 0) ? 0 : a[i].amount;

			if ( strncmp(a[i].node_type, "C", 1) == 0 )
			{
				bill_bill_statement_summary_map.insert(BILL_BILL_STATEMENT_SUMMARY_DEF::value_type(a[i].node_id, a[i].amount));
			}
		}
	}
	
	/* EXEC SQL AT customer_care CLOSE c_bill_bill_statement_summary; */ 
#line 1310 "d:\\src\\customerprofiler\\db.pc"

{
#line 1310 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 1310 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 1310 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 15;
#line 1310 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 1310 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 1310 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 1310 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )959;
#line 1310 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 1310 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1310 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 1310 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 1310 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1310 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 1310 "d:\\src\\customerprofiler\\db.pc"
}

#line 1310 "d:\\src\\customerprofiler\\db.pc"
 
	delete a;
	printf("%d  bill_bill_statement_summary data read.\n\n",rows_before);
}


void churn::db_read_fb_bill_transactions()
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 1318 "d:\\src\\customerprofiler\\db.pc"


	struct bill_transactions_t
	{
		int		tran_no;					// number(16)
		int		node_id;					// number(10)
		char	node_type[BUF_LEN];			// varchar2(1) 
		float	amount;						// number(14,2)
		char	tran_date[BUF_LEN];			// date
		char	tran_type[BUF_LEN];			// varchar2(10) 
	} *a;

	struct bill_transactions_ind
	{ 
  		short	tran_no_ind;				
		short	node_id_ind;
		short	node_type_ind;
		short	amount_ind;	
		short	tran_date_ind;
		short	tran_type_ind;
	}a_ind[FETCH_SIZE];

	int rows_to_fetch, rows_before, rows_this_time;
	
	/* EXEC SQL END DECLARE SECTION; */ 
#line 1342 "d:\\src\\customerprofiler\\db.pc"


	int i;
	rows_to_fetch = FETCH_SIZE;		// number of rows in each "batch"  
	rows_before = 0;				   // previous value of sqlerrd[2]   
	rows_this_time = FETCH_SIZE; 

	if((a = new bill_transactions_t[rows_to_fetch])==NULL)
	{
		cout<<" cant allocate memeory for fb_bill_transactions fetch"<<endl;
		exit(0);
	}

 
	/* EXEC SQL 
	AT customer_care 
	DECLARE  c_bill_transactions CURSOR FOR 
	SELECT	TRAN_NO,
			NODE_ID,
			NODE_TYPE,
			AMOUNT,
			TRAN_DATE,
			TRAN_TYPE
	FROM	FB_BILL_TRANSACTIONS; */ 
#line 1365 "d:\\src\\customerprofiler\\db.pc"

	//WHERE	TRAN_TYPE = 'BILL';

	/* EXEC SQL AT customer_care  OPEN c_bill_transactions; */ 
#line 1368 "d:\\src\\customerprofiler\\db.pc"

{
#line 1368 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 1368 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 1368 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 15;
#line 1368 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 1368 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 1368 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.stmt = sq0017;
#line 1368 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 1368 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )987;
#line 1368 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.selerr = (unsigned short)1;
#line 1368 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 1368 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1368 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 1368 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 1368 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqcmod = (unsigned int )0;
#line 1368 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1368 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 1368 "d:\\src\\customerprofiler\\db.pc"
}

#line 1368 "d:\\src\\customerprofiler\\db.pc"
 
	/* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 
#line 1369 "d:\\src\\customerprofiler\\db.pc"
 

	fb_bill_transactions fbt;
	FB_BILL_TRANSACTIONS_DEF::iterator i_fbt;
	reng_date_time rdt;
	
	while (rows_this_time == rows_to_fetch) 
	{ 
		/* EXEC SQL AT customer_care FOR :rows_to_fetch FETCH c_bill_transactions INTO :a INDICATOR :a_ind; */ 
#line 1377 "d:\\src\\customerprofiler\\db.pc"

{
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  struct sqlexd sqlstm;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlvsn = 12;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.arrsiz = 15;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqladtp = &sqladt;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqltdsp = &sqltds;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.iters = (unsigned int  )rows_to_fetch;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.offset = (unsigned int  )1015;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.selerr = (unsigned short)1;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.cud = sqlcud0;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlety = (unsigned short)256;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqfoff = (           int )0;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqfmod = (unsigned int )2;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[0] = (         void  *)&a->tran_no;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[0] = (         int  )sizeof(struct bill_transactions_t);
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[0] = (         void  *)&a_ind->tran_no_ind;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[0] = (         int  )sizeof(struct bill_transactions_ind);
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[0] = (unsigned int  )0;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[1] = (         void  *)&a->node_id;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[1] = (         int  )sizeof(struct bill_transactions_t);
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[1] = (         void  *)&a_ind->node_id_ind;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[1] = (         int  )sizeof(struct bill_transactions_ind);
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[1] = (unsigned int  )0;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[1] = (unsigned short )0;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[1] = (unsigned short )0;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[2] = (         void  *)a->node_type;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[2] = (unsigned int  )100;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[2] = (         int  )sizeof(struct bill_transactions_t);
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[2] = (         void  *)&a_ind->node_type_ind;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[2] = (         int  )sizeof(struct bill_transactions_ind);
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[2] = (unsigned int  )0;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[2] = (unsigned short )0;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[2] = (unsigned short )0;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[3] = (         void  *)&a->amount;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[3] = (unsigned int  )sizeof(float);
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[3] = (         int  )sizeof(struct bill_transactions_t);
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[3] = (         void  *)&a_ind->amount_ind;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[3] = (         int  )sizeof(struct bill_transactions_ind);
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[3] = (unsigned int  )0;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[3] = (unsigned short )0;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[3] = (unsigned short )0;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[4] = (         void  *)a->tran_date;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[4] = (unsigned int  )100;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[4] = (         int  )sizeof(struct bill_transactions_t);
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[4] = (         void  *)&a_ind->tran_date_ind;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[4] = (         int  )sizeof(struct bill_transactions_ind);
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[4] = (unsigned int  )0;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[4] = (unsigned short )0;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[4] = (unsigned short )0;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[5] = (         void  *)a->tran_type;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[5] = (unsigned int  )100;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[5] = (         int  )sizeof(struct bill_transactions_t);
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[5] = (         void  *)&a_ind->tran_type_ind;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[5] = (         int  )sizeof(struct bill_transactions_ind);
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[5] = (unsigned int  )0;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[5] = (unsigned short )0;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[5] = (unsigned short )0;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1377 "d:\\src\\customerprofiler\\db.pc"
  if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 1377 "d:\\src\\customerprofiler\\db.pc"
}

#line 1377 "d:\\src\\customerprofiler\\db.pc"
 		 

		rows_this_time = sqlca.sqlerrd[2] - rows_before; 
		rows_before = sqlca.sqlerrd[2]; 
//		printf(" this=%d before=%d \n", rows_this_time, rows_before);
		printf(" fb_bill_transactions =%d \n", rows_before);

		for(i=0; i<rows_this_time; i++)
		{

			//handling null fetches

			a[i].amount = (a_ind[i].amount_ind < 0) ? 0 : a[i].amount;
			strcpy(a[i].tran_type,
				  ((a_ind[i].tran_type_ind < 0) ? "UNDEF":a[i].tran_type));
	
			if ( strncmp(a[i].node_type, "C", 1) == 0 )		// only PR contracts
															// non PR contracts are loaded in
															// db_read_fb_contract_balances()
			{
				if ( strncmp(a[i].tran_type, "BILL", 4) == 0 )
				{
					if ( ( i_fbt = fb_bill_transactions_bill_map.find(a[i].node_id) ) == fb_bill_transactions_bill_map.end() )
					{
						fbt.init();
						fbt.amount		= a[i].amount;					
						fbt.tran_date	= a[i].tran_date;
						fbt.tran_no		= a[i].tran_no;
						a[i].tran_date[14] = '\0';
						fbt.tran_date_rdt.set_date_time(a[i].tran_date); 
							
						fb_bill_transactions_bill_map.insert(FB_BILL_TRANSACTIONS_DEF::value_type(a[i].node_id, fbt));
					}
					else
					{
						rdt.date.init();
						rdt.time.init();
						a[i].tran_date[14] = '\0';
						rdt.set_date_time(a[i].tran_date); 
						if ( (*i_fbt).second.tran_date_rdt < rdt )
						{
							fbt.init();
							fbt.amount		= a[i].amount;					
							fbt.tran_date	= a[i].tran_date;
							fbt.tran_no		= a[i].tran_no;
							fbt.tran_date_rdt.set_date_time(a[i].tran_date); 

							fb_bill_transactions_bill_map.erase(i_fbt);

							fb_bill_transactions_bill_map.insert(FB_BILL_TRANSACTIONS_DEF::value_type(a[i].node_id, fbt));
						}
					}
				}
				if ( strncmp(a[i].tran_type, "PAY", 3) == 0 )
				{

					if ( ( i_fbt = fb_bill_transactions_pay_map.find(a[i].node_id) ) == fb_bill_transactions_pay_map.end() )
					{
						fbt.init();
						fbt.amount		= a[i].amount;					
						fbt.tran_date	= a[i].tran_date;
						fbt.tran_no		= a[i].tran_no;
						a[i].tran_date[14] = '\0';
						fbt.tran_date_rdt.set_date_time(a[i].tran_date); 
							
						fb_bill_transactions_pay_map.insert(FB_BILL_TRANSACTIONS_DEF::value_type(a[i].node_id, fbt));
					}
					else
					{
						rdt.date.init();
						rdt.time.init();
						rdt.set_date_time(a[i].tran_date); 
						if ( (*i_fbt).second.tran_date_rdt < rdt )
						{
							fbt.init();
							fbt.amount		= a[i].amount;					
							fbt.tran_date	= a[i].tran_date;
							fbt.tran_no		= a[i].tran_no;
							a[i].tran_date[14] = '\0';
							fbt.tran_date_rdt.set_date_time(a[i].tran_date);

							fb_bill_transactions_pay_map.erase(i_fbt);

							fb_bill_transactions_pay_map.insert(FB_BILL_TRANSACTIONS_DEF::value_type(a[i].node_id, fbt));
						}
					}
				}
			}
		}
	}
	
	/* EXEC SQL AT customer_care CLOSE c_bill_transactions; */ 
#line 1468 "d:\\src\\customerprofiler\\db.pc"

{
#line 1468 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 1468 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 1468 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 15;
#line 1468 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 1468 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 1468 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 1468 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )1067;
#line 1468 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 1468 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1468 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 1468 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 1468 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1468 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 1468 "d:\\src\\customerprofiler\\db.pc"
}

#line 1468 "d:\\src\\customerprofiler\\db.pc"
 
	delete a;
	printf("%d  fb_bill_transactions data read.\n\n",rows_before);
}





void churn::db_read_fb_contract_balances()
{

	// not used.
}


void churn::db_read_fb_bill_receipts()
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 1486 "d:\\src\\customerprofiler\\db.pc"


	struct bill_transactions_t
	{
		int		receipt_tran_no;				// number(16)
		char	payment_mode[BUF_LEN];			// varchar2(5)
	} *a;

	struct bill_transactions_ind
	{ 
		short	receipt_tran_no_ind;
  		short	payment_mode_ind;				
	}a_ind[FETCH_SIZE];

	int rows_to_fetch, rows_before, rows_this_time;
	
	/* EXEC SQL END DECLARE SECTION; */ 
#line 1502 "d:\\src\\customerprofiler\\db.pc"


	int i;
	rows_to_fetch = FETCH_SIZE;		// number of rows in each "batch"  
	rows_before = 0;				   // previous value of sqlerrd[2]   
	rows_this_time = FETCH_SIZE; 

	if((a = new bill_transactions_t[rows_to_fetch])==NULL)
	{
		cout<<" cant allocate memeory for fb_bill_transactions fetch"<<endl;
		exit(0);
	}

 
	/* EXEC SQL 
	AT customer_care 
	DECLARE  c_fb_bill_receipts CURSOR FOR 
	SELECT	RECEIPT_TRAN_NO,	
			PAYMENT_MODE
	FROM	FB_BILL_RECEIPTS; */ 
#line 1521 "d:\\src\\customerprofiler\\db.pc"


	/* EXEC SQL AT customer_care  OPEN c_fb_bill_receipts; */ 
#line 1523 "d:\\src\\customerprofiler\\db.pc"

{
#line 1523 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 1523 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 1523 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 15;
#line 1523 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 1523 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 1523 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.stmt = sq0018;
#line 1523 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 1523 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )1095;
#line 1523 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.selerr = (unsigned short)1;
#line 1523 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 1523 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1523 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 1523 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 1523 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqcmod = (unsigned int )0;
#line 1523 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1523 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 1523 "d:\\src\\customerprofiler\\db.pc"
}

#line 1523 "d:\\src\\customerprofiler\\db.pc"
 
	/* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 
#line 1524 "d:\\src\\customerprofiler\\db.pc"
 

	
	while (rows_this_time == rows_to_fetch) 
	{ 
		/* EXEC SQL AT customer_care FOR :rows_to_fetch FETCH c_fb_bill_receipts INTO :a INDICATOR :a_ind; */ 
#line 1529 "d:\\src\\customerprofiler\\db.pc"

{
#line 1529 "d:\\src\\customerprofiler\\db.pc"
  struct sqlexd sqlstm;
#line 1529 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlvsn = 12;
#line 1529 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.arrsiz = 15;
#line 1529 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqladtp = &sqladt;
#line 1529 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqltdsp = &sqltds;
#line 1529 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.iters = (unsigned int  )rows_to_fetch;
#line 1529 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.offset = (unsigned int  )1123;
#line 1529 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.selerr = (unsigned short)1;
#line 1529 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.cud = sqlcud0;
#line 1529 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1529 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlety = (unsigned short)256;
#line 1529 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 1529 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqfoff = (           int )0;
#line 1529 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqfmod = (unsigned int )2;
#line 1529 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[0] = (         void  *)&a->receipt_tran_no;
#line 1529 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
#line 1529 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[0] = (         int  )sizeof(struct bill_transactions_t);
#line 1529 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[0] = (         void  *)&a_ind->receipt_tran_no_ind;
#line 1529 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[0] = (         int  )sizeof(struct bill_transactions_ind);
#line 1529 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[0] = (unsigned int  )0;
#line 1529 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 1529 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 1529 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[1] = (         void  *)a->payment_mode;
#line 1529 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[1] = (unsigned int  )100;
#line 1529 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[1] = (         int  )sizeof(struct bill_transactions_t);
#line 1529 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[1] = (         void  *)&a_ind->payment_mode_ind;
#line 1529 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[1] = (         int  )sizeof(struct bill_transactions_ind);
#line 1529 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[1] = (unsigned int  )0;
#line 1529 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[1] = (unsigned short )0;
#line 1529 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[1] = (unsigned short )0;
#line 1529 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 1529 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 1529 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 1529 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 1529 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 1529 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 1529 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 1529 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 1529 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 1529 "d:\\src\\customerprofiler\\db.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1529 "d:\\src\\customerprofiler\\db.pc"
  if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 1529 "d:\\src\\customerprofiler\\db.pc"
}

#line 1529 "d:\\src\\customerprofiler\\db.pc"
 		 

		rows_this_time = sqlca.sqlerrd[2] - rows_before; 
		rows_before = sqlca.sqlerrd[2]; 
//		printf(" this=%d before=%d \n", rows_this_time, rows_before);
		printf(" fb_bill_receipts =%d \n", rows_before);

		for(i=0; i<rows_this_time; i++)
		{

			//handling null fetches

			strcpy(a[i].payment_mode,
				  ((a_ind[i].payment_mode_ind < 0) ? "UNDEF":a[i].payment_mode));

			fb_bill_receipts_map.insert(FB_BILL_RECEIPTS_DEF::value_type(a[i].receipt_tran_no, a[i].payment_mode));

		}
	}
	
	/* EXEC SQL AT customer_care CLOSE c_fb_bill_receipts; */ 
#line 1549 "d:\\src\\customerprofiler\\db.pc"

{
#line 1549 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 1549 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 1549 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 15;
#line 1549 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 1549 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 1549 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 1549 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )1159;
#line 1549 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 1549 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1549 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 1549 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 1549 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1549 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 1549 "d:\\src\\customerprofiler\\db.pc"
}

#line 1549 "d:\\src\\customerprofiler\\db.pc"
 
	delete a;
	printf("%d  fb_bill_receipts data read.\n\n",rows_before);
}

void churn::db_get_sysdate()
{
	// YYYYMMDDHH24MISS

	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 1558 "d:\\src\\customerprofiler\\db.pc"

		char	b_sysdate[20];			
	/* EXEC SQL END DECLARE SECTION; */ 
#line 1560 "d:\\src\\customerprofiler\\db.pc"


	/* EXEC SQL
	AT customer_care
	SELECT SYSDATE
	INTO	:b_sysdate	
	FROM DUAL; */ 
#line 1566 "d:\\src\\customerprofiler\\db.pc"

{
#line 1562 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 1562 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 1562 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 15;
#line 1562 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 1562 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 1562 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.stmt = "select SYSDATE into :b0  from DUAL ";
#line 1562 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 1562 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )1187;
#line 1562 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.selerr = (unsigned short)1;
#line 1562 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 1562 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1562 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 1562 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 1562 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[0] = (         void  *)b_sysdate;
#line 1562 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[0] = (unsigned int  )20;
#line 1562 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[0] = (         int  )0;
#line 1562 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[0] = (         void  *)0;
#line 1562 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[0] = (         int  )0;
#line 1562 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[0] = (unsigned int  )0;
#line 1562 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[0] = (unsigned short )0;
#line 1562 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[0] = (unsigned short )0;
#line 1562 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqphsv = sqlstm.sqhstv;
#line 1562 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqphsl = sqlstm.sqhstl;
#line 1562 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqphss = sqlstm.sqhsts;
#line 1562 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqpind = sqlstm.sqindv;
#line 1562 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqpins = sqlstm.sqinds;
#line 1562 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqparm = sqlstm.sqharm;
#line 1562 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqparc = sqlstm.sqharc;
#line 1562 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqpadto = sqlstm.sqadto;
#line 1562 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqptdso = sqlstm.sqtdso;
#line 1562 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1562 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 1562 "d:\\src\\customerprofiler\\db.pc"
}

#line 1566 "d:\\src\\customerprofiler\\db.pc"


	strcpy(sys_date, b_sysdate);
	sys_date_rdt.set_date_time(sys_date);
}


void churn::db_insert_churn_data()
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 1575 "d:\\src\\customerprofiler\\db.pc"

	
	static struct db_churn
	{
		int		account_no;				// number	- NN	
		int		cx_type_id;				// number
		float	score;					// number(14,4)
		double	total_score;
		int		no_of_bills;

		double  network_stay_days;
		double  nt_work_stay;                  
		double  network_stay_points;

		char	bill_no_1[21];
		char	bill_no_2[21];
		char	bill_no_3[21];
		char	bill_no_4[21];
		char	bill_no_5[21];
		char	bill_no_6[21];

		double  delay_1;
		double  delay_2;
		double  delay_3;
		double  delay_4;
		double  delay_5;
		double  delay_6;

		double  gap_1;
		double  gap_2;
		double  gap_3;
		double  gap_4;
		double  gap_5;
		double  gap_6;

		double  tot_pay_1;
		double  tot_pay_2;
		double  tot_pay_3;
		double  tot_pay_4;
		double  tot_pay_5;
		double  tot_pay_6;

		double  tot_out_1;
		double  tot_out_2;
		double  tot_out_3;
		double  tot_out_4;
		double  tot_out_5;
		double  tot_out_6;

		double  rating_1;
		double  rating_2;
		double  rating_3;
		double  rating_4;
		double  rating_5;
		double  rating_6;
	} *a; 
	
	int rows_to_insert;
	
	/* EXEC SQL END DECLARE SECTION; */ 
#line 1634 "d:\\src\\customerprofiler\\db.pc"

	
	rows_to_insert = bulk_insert_size;
	
	if((a = new db_churn[bulk_insert_size])==NULL)
	{
		cout<<" cant allocate memory for churn data insert"<<endl;
		exit(0);
	}

	for(int j=0; j<insert_iterations; j++)
	{

		for(int n=0; n<rows_to_insert; n++)
		{
			a[n].account_no		= 0;
			a[n].cx_type_id		= 0;
			a[n].score			= 0.0;
			a[n].total_score	= 0.0;
			a[n].no_of_bills	= 0;

			a[n].network_stay_days		= 0.0;
			a[n].nt_work_stay			= 0.0;                  
			a[n].network_stay_points	= 0.0;

			a[n].bill_no_1[0]	= '\0';
			a[n].bill_no_2[0]	= '\0';
			a[n].bill_no_3[0]	= '\0';
			a[n].bill_no_4[0]	= '\0';
			a[n].bill_no_5[0]	= '\0';
			a[n].bill_no_6[0]	= '\0';

			a[n].delay_1= 0.0;
			a[n].delay_2= 0.0;
			a[n].delay_3= 0.0;
			a[n].delay_4= 0.0;
			a[n].delay_5= 0.0;
			a[n].delay_6= 0.0;

			a[n].gap_1= 0.0;
			a[n].gap_2= 0.0;
			a[n].gap_3= 0.0;
			a[n].gap_4= 0.0;
			a[n].gap_5= 0.0;
			a[n].gap_6= 0.0;

			a[n].tot_pay_1= 0.0;
			a[n].tot_pay_2= 0.0;
			a[n].tot_pay_3= 0.0;
			a[n].tot_pay_4= 0.0;
			a[n].tot_pay_5= 0.0;
			a[n].tot_pay_6= 0.0;

			a[n].tot_out_1= 0.0;
			a[n].tot_out_2= 0.0;
			a[n].tot_out_3= 0.0;
			a[n].tot_out_4= 0.0;
			a[n].tot_out_5= 0.0;
			a[n].tot_out_6= 0.0;

			a[n].rating_1= 0.0;
			a[n].rating_2= 0.0;
			a[n].rating_3= 0.0;
			a[n].rating_4= 0.0;
			a[n].rating_5= 0.0;
			a[n].rating_6= 0.0;

		}
		
		for(int i=0; i<rows_to_insert; i++, i_db_insert++)
		{
			a[i].account_no		= (*i_db_insert).second.account_no;
			a[i].cx_type_id		= (*i_db_insert).second.cx_type_id;
			a[i].score			= (*i_db_insert).second.average_score;
			a[i].total_score	= (*i_db_insert).second.total_score;
			a[i].no_of_bills	= (*i_db_insert).second.no_of_bills;

			a[i].network_stay_days		= (*i_db_insert).second.network_stay_days;
			a[i].nt_work_stay			= (*i_db_insert).second.nt_work_stay;                  
			a[i].network_stay_points	= (*i_db_insert).second.network_stay_points;


			strcpy(a[i].bill_no_1, (*i_db_insert).second.bill_no_1);
			strcpy(a[i].bill_no_2, (*i_db_insert).second.bill_no_2);
			strcpy(a[i].bill_no_3, (*i_db_insert).second.bill_no_3);
			strcpy(a[i].bill_no_4, (*i_db_insert).second.bill_no_4);
			strcpy(a[i].bill_no_5, (*i_db_insert).second.bill_no_5);
			strcpy(a[i].bill_no_6, (*i_db_insert).second.bill_no_6);


			a[i].delay_1	= (*i_db_insert).second.delay_1;
			a[i].delay_2	= (*i_db_insert).second.delay_2;
			a[i].delay_3	= (*i_db_insert).second.delay_3;
			a[i].delay_4	= (*i_db_insert).second.delay_4;
			a[i].delay_5	= (*i_db_insert).second.delay_5;
			a[i].delay_6	= (*i_db_insert).second.delay_6;

			a[i].gap_1		= (*i_db_insert).second.gap_1;
			a[i].gap_2		= (*i_db_insert).second.gap_2;
			a[i].gap_3		= (*i_db_insert).second.gap_3;
			a[i].gap_4		= (*i_db_insert).second.gap_4;
			a[i].gap_5		= (*i_db_insert).second.gap_5;
			a[i].gap_6		= (*i_db_insert).second.gap_6;

			a[i].tot_pay_1	= (*i_db_insert).second.tot_pay_1;
			a[i].tot_pay_2	= (*i_db_insert).second.tot_pay_2;
			a[i].tot_pay_3	= (*i_db_insert).second.tot_pay_3;
			a[i].tot_pay_4	= (*i_db_insert).second.tot_pay_4;
			a[i].tot_pay_5	= (*i_db_insert).second.tot_pay_5;
			a[i].tot_pay_6	= (*i_db_insert).second.tot_pay_6;

			a[i].tot_out_1	= (*i_db_insert).second.tot_out_1;
			a[i].tot_out_2	= (*i_db_insert).second.tot_out_2;
			a[i].tot_out_3	= (*i_db_insert).second.tot_out_3;
			a[i].tot_out_4	= (*i_db_insert).second.tot_out_4;
			a[i].tot_out_5	= (*i_db_insert).second.tot_out_5;
			a[i].tot_out_6	= (*i_db_insert).second.tot_out_6;

			a[i].rating_1	= (*i_db_insert).second.rating_1;
			a[i].rating_2	= (*i_db_insert).second.rating_2;
			a[i].rating_3	= (*i_db_insert).second.rating_3;
			a[i].rating_4	= (*i_db_insert).second.rating_4;
			a[i].rating_5	= (*i_db_insert).second.rating_5;
			a[i].rating_6	= (*i_db_insert).second.rating_6;
		} 

		/* EXEC SQL  AT customer_care  FOR :rows_to_insert  INSERT INTO CX_PROFILED_DETAILS (
			ACCOUNT_NO,
			CX_TYPE_ID,
			SCORE,
			TOTAL_SCORE,
			NO_OF_BILLS,
			network_stay_days,
			nt_work_stay,                  
			network_stay_points,
			bill_no_1,
			bill_no_2,
			bill_no_3,
			bill_no_4,
			bill_no_5,
			bill_no_6,
			delay_1,
			delay_2,
			delay_3,
			delay_4,
			delay_5,
			delay_6,
			gap_1,
			gap_2,
			gap_3,
			gap_4,
			gap_5,
			gap_6,
			tot_pay_1,
			tot_pay_2,
			tot_pay_3,
			tot_pay_4,
			tot_pay_5,
			tot_pay_6,
			tot_out_1,
			tot_out_2,
			tot_out_3,
			tot_out_4,
			tot_out_5,
			tot_out_6,
			rating_1,
			rating_2,
			rating_3,
			rating_4,
			rating_5,
			rating_6
		) VALUES (:a); */ 
#line 1805 "d:\\src\\customerprofiler\\db.pc"

{
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  struct sqlexd sqlstm;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlvsn = 12;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.arrsiz = 44;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqladtp = &sqladt;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqltdsp = &sqltds;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.stmt = "insert into CX_PROFILED_DETAILS (ACCOUNT_NO,CX_TYPE_ID,SCOR\
E,TOTAL_SCORE,NO_OF_BILLS,network_stay_days,nt_work_stay,network_stay_points,b\
ill_no_1,bill_no_2,bill_no_3,bill_no_4,bill_no_5,bill_no_6,delay_1,delay_2,del\
ay_3,delay_4,delay_5,delay_6,gap_1,gap_2,gap_3,gap_4,gap_5,gap_6,tot_pay_1,tot\
_pay_2,tot_pay_3,tot_pay_4,tot_pay_5,tot_pay_6,tot_out_1,tot_out_2,tot_out_3,t\
ot_out_4,tot_out_5,tot_out_6,rating_1,rating_2,rating_3,rating_4,rating_5,rati\
ng_6) values (:s1 ,:s2 ,:s3 ,:s4 ,:s5 ,:s6 ,:s7 ,:s8 ,:s9 ,:s10 ,:s11 ,:s12 ,:\
s13 ,:s14 ,:s15 ,:s16 ,:s17 ,:s18 ,:s19 ,:s20 ,:s21 ,:s22 ,:s23 ,:s24 ,:s25 ,:\
s26 ,:s27 ,:s28 ,:s29 ,:s30 ,:s31 ,:s32 ,:s33 ,:s34 ,:s35 ,:s36 ,:s37 ,:s38 ,:\
s39 ,:s40 ,:s41 ,:s42 ,:s43 ,:s44 )";
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.iters = (unsigned int  )rows_to_insert;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.offset = (unsigned int  )1219;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.cud = sqlcud0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlety = (unsigned short)256;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[0] = (         void  *)&a->account_no;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[0] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[0] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[0] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[0] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[1] = (         void  *)&a->cx_type_id;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[1] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[1] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[1] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[1] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[1] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[1] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[2] = (         void  *)&a->score;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[2] = (unsigned int  )sizeof(float);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[2] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[2] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[2] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[2] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[2] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[2] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[3] = (         void  *)&a->total_score;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[3] = (unsigned int  )sizeof(double);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[3] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[3] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[3] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[3] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[3] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[3] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[4] = (         void  *)&a->no_of_bills;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[4] = (unsigned int  )sizeof(int);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[4] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[4] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[4] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[4] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[4] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[4] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[5] = (         void  *)&a->network_stay_days;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[5] = (unsigned int  )sizeof(double);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[5] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[5] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[5] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[5] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[5] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[5] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[6] = (         void  *)&a->nt_work_stay;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[6] = (unsigned int  )sizeof(double);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[6] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[6] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[6] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[6] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[6] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[6] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[7] = (         void  *)&a->network_stay_points;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[7] = (unsigned int  )sizeof(double);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[7] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[7] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[7] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[7] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[7] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[7] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[8] = (         void  *)a->bill_no_1;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[8] = (unsigned int  )21;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[8] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[8] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[8] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[8] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[8] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[8] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[9] = (         void  *)a->bill_no_2;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[9] = (unsigned int  )21;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[9] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[9] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[9] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[9] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[9] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[9] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[10] = (         void  *)a->bill_no_3;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[10] = (unsigned int  )21;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[10] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[10] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[10] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[10] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[10] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[10] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[11] = (         void  *)a->bill_no_4;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[11] = (unsigned int  )21;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[11] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[11] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[11] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[11] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[11] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[11] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[12] = (         void  *)a->bill_no_5;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[12] = (unsigned int  )21;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[12] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[12] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[12] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[12] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[12] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[12] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[13] = (         void  *)a->bill_no_6;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[13] = (unsigned int  )21;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[13] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[13] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[13] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[13] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[13] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[13] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[14] = (         void  *)&a->delay_1;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[14] = (unsigned int  )sizeof(double);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[14] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[14] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[14] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[14] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[14] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[14] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[15] = (         void  *)&a->delay_2;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[15] = (unsigned int  )sizeof(double);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[15] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[15] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[15] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[15] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[15] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[15] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[16] = (         void  *)&a->delay_3;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[16] = (unsigned int  )sizeof(double);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[16] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[16] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[16] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[16] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[16] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[16] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[17] = (         void  *)&a->delay_4;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[17] = (unsigned int  )sizeof(double);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[17] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[17] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[17] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[17] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[17] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[17] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[18] = (         void  *)&a->delay_5;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[18] = (unsigned int  )sizeof(double);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[18] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[18] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[18] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[18] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[18] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[18] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[19] = (         void  *)&a->delay_6;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[19] = (unsigned int  )sizeof(double);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[19] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[19] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[19] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[19] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[19] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[19] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[20] = (         void  *)&a->gap_1;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[20] = (unsigned int  )sizeof(double);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[20] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[20] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[20] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[20] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[20] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[20] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[21] = (         void  *)&a->gap_2;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[21] = (unsigned int  )sizeof(double);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[21] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[21] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[21] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[21] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[21] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[21] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[22] = (         void  *)&a->gap_3;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[22] = (unsigned int  )sizeof(double);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[22] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[22] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[22] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[22] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[22] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[22] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[23] = (         void  *)&a->gap_4;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[23] = (unsigned int  )sizeof(double);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[23] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[23] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[23] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[23] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[23] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[23] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[24] = (         void  *)&a->gap_5;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[24] = (unsigned int  )sizeof(double);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[24] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[24] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[24] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[24] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[24] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[24] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[25] = (         void  *)&a->gap_6;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[25] = (unsigned int  )sizeof(double);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[25] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[25] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[25] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[25] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[25] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[25] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[26] = (         void  *)&a->tot_pay_1;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[26] = (unsigned int  )sizeof(double);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[26] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[26] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[26] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[26] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[26] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[26] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[27] = (         void  *)&a->tot_pay_2;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[27] = (unsigned int  )sizeof(double);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[27] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[27] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[27] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[27] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[27] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[27] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[28] = (         void  *)&a->tot_pay_3;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[28] = (unsigned int  )sizeof(double);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[28] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[28] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[28] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[28] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[28] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[28] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[29] = (         void  *)&a->tot_pay_4;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[29] = (unsigned int  )sizeof(double);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[29] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[29] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[29] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[29] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[29] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[29] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[30] = (         void  *)&a->tot_pay_5;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[30] = (unsigned int  )sizeof(double);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[30] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[30] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[30] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[30] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[30] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[30] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[31] = (         void  *)&a->tot_pay_6;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[31] = (unsigned int  )sizeof(double);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[31] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[31] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[31] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[31] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[31] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[31] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[32] = (         void  *)&a->tot_out_1;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[32] = (unsigned int  )sizeof(double);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[32] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[32] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[32] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[32] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[32] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[32] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[33] = (         void  *)&a->tot_out_2;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[33] = (unsigned int  )sizeof(double);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[33] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[33] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[33] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[33] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[33] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[33] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[34] = (         void  *)&a->tot_out_3;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[34] = (unsigned int  )sizeof(double);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[34] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[34] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[34] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[34] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[34] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[34] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[35] = (         void  *)&a->tot_out_4;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[35] = (unsigned int  )sizeof(double);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[35] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[35] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[35] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[35] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[35] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[35] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[36] = (         void  *)&a->tot_out_5;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[36] = (unsigned int  )sizeof(double);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[36] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[36] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[36] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[36] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[36] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[36] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[37] = (         void  *)&a->tot_out_6;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[37] = (unsigned int  )sizeof(double);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[37] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[37] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[37] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[37] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[37] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[37] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[38] = (         void  *)&a->rating_1;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[38] = (unsigned int  )sizeof(double);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[38] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[38] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[38] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[38] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[38] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[38] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[39] = (         void  *)&a->rating_2;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[39] = (unsigned int  )sizeof(double);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[39] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[39] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[39] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[39] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[39] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[39] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[40] = (         void  *)&a->rating_3;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[40] = (unsigned int  )sizeof(double);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[40] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[40] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[40] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[40] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[40] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[40] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[41] = (         void  *)&a->rating_4;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[41] = (unsigned int  )sizeof(double);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[41] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[41] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[41] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[41] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[41] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[41] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[42] = (         void  *)&a->rating_5;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[42] = (unsigned int  )sizeof(double);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[42] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[42] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[42] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[42] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[42] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[42] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[43] = (         void  *)&a->rating_6;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[43] = (unsigned int  )sizeof(double);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[43] = (         int  )sizeof(struct db_churn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[43] = (         void  *)0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[43] = (         int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[43] = (unsigned int  )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[43] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[43] = (unsigned short )0;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1760 "d:\\src\\customerprofiler\\db.pc"
  if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 1760 "d:\\src\\customerprofiler\\db.pc"
}

#line 1805 "d:\\src\\customerprofiler\\db.pc"

	
		/* EXEC SQL AT customer_care  COMMIT; */ 
#line 1807 "d:\\src\\customerprofiler\\db.pc"

{
#line 1807 "d:\\src\\customerprofiler\\db.pc"
  struct sqlexd sqlstm;
#line 1807 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlvsn = 12;
#line 1807 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.arrsiz = 44;
#line 1807 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqladtp = &sqladt;
#line 1807 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqltdsp = &sqltds;
#line 1807 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.iters = (unsigned int  )1;
#line 1807 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.offset = (unsigned int  )1423;
#line 1807 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.cud = sqlcud0;
#line 1807 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1807 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlety = (unsigned short)256;
#line 1807 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 1807 "d:\\src\\customerprofiler\\db.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1807 "d:\\src\\customerprofiler\\db.pc"
  if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 1807 "d:\\src\\customerprofiler\\db.pc"
}

#line 1807 "d:\\src\\customerprofiler\\db.pc"

	}
	
	delete a;
}

void churn::db_insert_churn_data_remainder()
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 1815 "d:\\src\\customerprofiler\\db.pc"

	
	static struct db_churn
	{
		int		account_no;				// number	- NN	
		int		cx_type_id;				// number
		float	score;					// number(14,4)
		double	total_score;
		int		no_of_bills;

		double  network_stay_days;
		double  nt_work_stay;                  
		double  network_stay_points;

		char	bill_no_1[21];
		char	bill_no_2[21];
		char	bill_no_3[21];
		char	bill_no_4[21];
		char	bill_no_5[21];
		char	bill_no_6[21];

		double  delay_1;
		double  delay_2;
		double  delay_3;
		double  delay_4;
		double  delay_5;
		double  delay_6;

		double  gap_1;
		double  gap_2;
		double  gap_3;
		double  gap_4;
		double  gap_5;
		double  gap_6;

		double  tot_pay_1;
		double  tot_pay_2;
		double  tot_pay_3;
		double  tot_pay_4;
		double  tot_pay_5;
		double  tot_pay_6;

		double  tot_out_1;
		double  tot_out_2;
		double  tot_out_3;
		double  tot_out_4;
		double  tot_out_5;
		double  tot_out_6;

		double  rating_1;
		double  rating_2;
		double  rating_3;
		double  rating_4;
		double  rating_5;
		double  rating_6;
	} *a;  
	
	int rows_to_insert;
	
	/* EXEC SQL END DECLARE SECTION; */ 
#line 1874 "d:\\src\\customerprofiler\\db.pc"

	rows_to_insert = remainder_insert_size;
	
	if((a = new db_churn[remainder_insert_size])==NULL)
	{
		cout<<" cant allocate memory for churn data insert"<<endl;
		exit(0);
	}

	for(int n=0; n<rows_to_insert; n++)
	{
			a[n].account_no		= 0;
			a[n].cx_type_id		= 0;
			a[n].score			= 0.0;
			a[n].total_score	= 0.0;
			a[n].no_of_bills	= 0;

			a[n].network_stay_days		= 0.0;
			a[n].nt_work_stay			= 0.0;                  
			a[n].network_stay_points	= 0.0;

			a[n].bill_no_1[0]	= '\0';
			a[n].bill_no_2[0]	= '\0';
			a[n].bill_no_3[0]	= '\0';
			a[n].bill_no_4[0]	= '\0';
			a[n].bill_no_5[0]	= '\0';
			a[n].bill_no_6[0]	= '\0';

			a[n].delay_1= 0.0;
			a[n].delay_2= 0.0;
			a[n].delay_3= 0.0;
			a[n].delay_4= 0.0;
			a[n].delay_5= 0.0;
			a[n].delay_6= 0.0;

			a[n].gap_1= 0.0;
			a[n].gap_2= 0.0;
			a[n].gap_3= 0.0;
			a[n].gap_4= 0.0;
			a[n].gap_5= 0.0;
			a[n].gap_6= 0.0;

			a[n].tot_pay_1= 0.0;
			a[n].tot_pay_2= 0.0;
			a[n].tot_pay_3= 0.0;
			a[n].tot_pay_4= 0.0;
			a[n].tot_pay_5= 0.0;
			a[n].tot_pay_6= 0.0;

			a[n].tot_out_1= 0.0;
			a[n].tot_out_2= 0.0;
			a[n].tot_out_3= 0.0;
			a[n].tot_out_4= 0.0;
			a[n].tot_out_5= 0.0;
			a[n].tot_out_6= 0.0;

			a[n].rating_1= 0.0;
			a[n].rating_2= 0.0;
			a[n].rating_3= 0.0;
			a[n].rating_4= 0.0;
			a[n].rating_5= 0.0;
			a[n].rating_6= 0.0;
	}


	for(int i=0; i<rows_to_insert; i++, i_db_insert++)
	{
			a[i].account_no		= (*i_db_insert).second.account_no;
			a[i].cx_type_id		= (*i_db_insert).second.cx_type_id;
			a[i].score			= (*i_db_insert).second.average_score;
			a[i].total_score	= (*i_db_insert).second.total_score;
			a[i].no_of_bills	= (*i_db_insert).second.no_of_bills;

			a[i].network_stay_days		= (*i_db_insert).second.network_stay_days;
			a[i].nt_work_stay			= (*i_db_insert).second.nt_work_stay;                  
			a[i].network_stay_points	= (*i_db_insert).second.network_stay_points;


			strcpy(a[i].bill_no_1, (*i_db_insert).second.bill_no_1);
			strcpy(a[i].bill_no_2, (*i_db_insert).second.bill_no_2);
			strcpy(a[i].bill_no_3, (*i_db_insert).second.bill_no_3);
			strcpy(a[i].bill_no_4, (*i_db_insert).second.bill_no_4);
			strcpy(a[i].bill_no_5, (*i_db_insert).second.bill_no_5);
			strcpy(a[i].bill_no_6, (*i_db_insert).second.bill_no_6);


			a[i].delay_1	= (*i_db_insert).second.delay_1;
			a[i].delay_2	= (*i_db_insert).second.delay_2;
			a[i].delay_3	= (*i_db_insert).second.delay_3;
			a[i].delay_4	= (*i_db_insert).second.delay_4;
			a[i].delay_5	= (*i_db_insert).second.delay_5;
			a[i].delay_6	= (*i_db_insert).second.delay_6;

			a[i].gap_1		= (*i_db_insert).second.gap_1;
			a[i].gap_2		= (*i_db_insert).second.gap_2;
			a[i].gap_3		= (*i_db_insert).second.gap_3;
			a[i].gap_4		= (*i_db_insert).second.gap_4;
			a[i].gap_5		= (*i_db_insert).second.gap_5;
			a[i].gap_6		= (*i_db_insert).second.gap_6;

			a[i].tot_pay_1	= (*i_db_insert).second.tot_pay_1;
			a[i].tot_pay_2	= (*i_db_insert).second.tot_pay_2;
			a[i].tot_pay_3	= (*i_db_insert).second.tot_pay_3;
			a[i].tot_pay_4	= (*i_db_insert).second.tot_pay_4;
			a[i].tot_pay_5	= (*i_db_insert).second.tot_pay_5;
			a[i].tot_pay_6	= (*i_db_insert).second.tot_pay_6;

			a[i].tot_out_1	= (*i_db_insert).second.tot_out_1;
			a[i].tot_out_2	= (*i_db_insert).second.tot_out_2;
			a[i].tot_out_3	= (*i_db_insert).second.tot_out_3;
			a[i].tot_out_4	= (*i_db_insert).second.tot_out_4;
			a[i].tot_out_5	= (*i_db_insert).second.tot_out_5;
			a[i].tot_out_6	= (*i_db_insert).second.tot_out_6;

			a[i].rating_1	= (*i_db_insert).second.rating_1;
			a[i].rating_2	= (*i_db_insert).second.rating_2;
			a[i].rating_3	= (*i_db_insert).second.rating_3;
			a[i].rating_4	= (*i_db_insert).second.rating_4;
			a[i].rating_5	= (*i_db_insert).second.rating_5;
			a[i].rating_6	= (*i_db_insert).second.rating_6;
	} 


	/* EXEC SQL  AT customer_care  FOR :rows_to_insert  INSERT INTO CX_PROFILED_DETAILS (
			ACCOUNT_NO,
			CX_TYPE_ID,
			SCORE,
			TOTAL_SCORE,
			NO_OF_BILLS,
			network_stay_days,
			nt_work_stay,                  
			network_stay_points,
			bill_no_1,
			bill_no_2,
			bill_no_3,
			bill_no_4,
			bill_no_5,
			bill_no_6,
			delay_1,
			delay_2,
			delay_3,
			delay_4,
			delay_5,
			delay_6,
			gap_1,
			gap_2,
			gap_3,
			gap_4,
			gap_5,
			gap_6,
			tot_pay_1,
			tot_pay_2,
			tot_pay_3,
			tot_pay_4,
			tot_pay_5,
			tot_pay_6,
			tot_out_1,
			tot_out_2,
			tot_out_3,
			tot_out_4,
			tot_out_5,
			tot_out_6,
			rating_1,
			rating_2,
			rating_3,
			rating_4,
			rating_5,
			rating_6
	) VALUES (:a); */ 
#line 2042 "d:\\src\\customerprofiler\\db.pc"

{
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 44;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.stmt = "insert into CX_PROFILED_DETAILS (ACCOUNT_NO,CX_TYPE_ID,SCORE\
,TOTAL_SCORE,NO_OF_BILLS,network_stay_days,nt_work_stay,network_stay_points,bi\
ll_no_1,bill_no_2,bill_no_3,bill_no_4,bill_no_5,bill_no_6,delay_1,delay_2,dela\
y_3,delay_4,delay_5,delay_6,gap_1,gap_2,gap_3,gap_4,gap_5,gap_6,tot_pay_1,tot_\
pay_2,tot_pay_3,tot_pay_4,tot_pay_5,tot_pay_6,tot_out_1,tot_out_2,tot_out_3,to\
t_out_4,tot_out_5,tot_out_6,rating_1,rating_2,rating_3,rating_4,rating_5,ratin\
g_6) values (:s1 ,:s2 ,:s3 ,:s4 ,:s5 ,:s6 ,:s7 ,:s8 ,:s9 ,:s10 ,:s11 ,:s12 ,:s\
13 ,:s14 ,:s15 ,:s16 ,:s17 ,:s18 ,:s19 ,:s20 ,:s21 ,:s22 ,:s23 ,:s24 ,:s25 ,:s\
26 ,:s27 ,:s28 ,:s29 ,:s30 ,:s31 ,:s32 ,:s33 ,:s34 ,:s35 ,:s36 ,:s37 ,:s38 ,:s\
39 ,:s40 ,:s41 ,:s42 ,:s43 ,:s44 )";
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )rows_to_insert;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )1451;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[0] = (         void  *)&a->account_no;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[0] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[0] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[0] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[0] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[0] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[0] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[1] = (         void  *)&a->cx_type_id;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[1] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[1] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[1] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[1] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[1] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[1] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[2] = (         void  *)&a->score;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[2] = (unsigned int  )sizeof(float);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[2] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[2] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[2] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[2] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[2] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[2] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[3] = (         void  *)&a->total_score;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[3] = (unsigned int  )sizeof(double);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[3] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[3] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[3] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[3] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[3] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[3] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[4] = (         void  *)&a->no_of_bills;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[4] = (unsigned int  )sizeof(int);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[4] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[4] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[4] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[4] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[4] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[4] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[5] = (         void  *)&a->network_stay_days;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[5] = (unsigned int  )sizeof(double);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[5] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[5] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[5] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[5] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[5] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[5] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[6] = (         void  *)&a->nt_work_stay;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[6] = (unsigned int  )sizeof(double);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[6] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[6] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[6] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[6] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[6] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[6] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[7] = (         void  *)&a->network_stay_points;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[7] = (unsigned int  )sizeof(double);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[7] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[7] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[7] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[7] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[7] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[7] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[8] = (         void  *)a->bill_no_1;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[8] = (unsigned int  )21;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[8] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[8] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[8] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[8] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[8] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[8] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[9] = (         void  *)a->bill_no_2;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[9] = (unsigned int  )21;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[9] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[9] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[9] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[9] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[9] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[9] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[10] = (         void  *)a->bill_no_3;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[10] = (unsigned int  )21;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[10] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[10] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[10] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[10] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[10] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[10] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[11] = (         void  *)a->bill_no_4;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[11] = (unsigned int  )21;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[11] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[11] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[11] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[11] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[11] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[11] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[12] = (         void  *)a->bill_no_5;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[12] = (unsigned int  )21;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[12] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[12] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[12] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[12] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[12] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[12] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[13] = (         void  *)a->bill_no_6;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[13] = (unsigned int  )21;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[13] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[13] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[13] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[13] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[13] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[13] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[14] = (         void  *)&a->delay_1;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[14] = (unsigned int  )sizeof(double);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[14] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[14] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[14] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[14] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[14] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[14] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[15] = (         void  *)&a->delay_2;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[15] = (unsigned int  )sizeof(double);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[15] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[15] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[15] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[15] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[15] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[15] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[16] = (         void  *)&a->delay_3;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[16] = (unsigned int  )sizeof(double);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[16] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[16] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[16] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[16] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[16] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[16] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[17] = (         void  *)&a->delay_4;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[17] = (unsigned int  )sizeof(double);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[17] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[17] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[17] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[17] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[17] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[17] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[18] = (         void  *)&a->delay_5;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[18] = (unsigned int  )sizeof(double);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[18] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[18] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[18] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[18] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[18] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[18] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[19] = (         void  *)&a->delay_6;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[19] = (unsigned int  )sizeof(double);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[19] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[19] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[19] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[19] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[19] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[19] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[20] = (         void  *)&a->gap_1;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[20] = (unsigned int  )sizeof(double);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[20] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[20] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[20] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[20] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[20] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[20] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[21] = (         void  *)&a->gap_2;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[21] = (unsigned int  )sizeof(double);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[21] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[21] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[21] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[21] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[21] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[21] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[22] = (         void  *)&a->gap_3;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[22] = (unsigned int  )sizeof(double);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[22] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[22] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[22] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[22] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[22] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[22] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[23] = (         void  *)&a->gap_4;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[23] = (unsigned int  )sizeof(double);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[23] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[23] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[23] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[23] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[23] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[23] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[24] = (         void  *)&a->gap_5;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[24] = (unsigned int  )sizeof(double);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[24] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[24] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[24] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[24] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[24] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[24] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[25] = (         void  *)&a->gap_6;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[25] = (unsigned int  )sizeof(double);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[25] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[25] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[25] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[25] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[25] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[25] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[26] = (         void  *)&a->tot_pay_1;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[26] = (unsigned int  )sizeof(double);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[26] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[26] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[26] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[26] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[26] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[26] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[27] = (         void  *)&a->tot_pay_2;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[27] = (unsigned int  )sizeof(double);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[27] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[27] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[27] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[27] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[27] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[27] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[28] = (         void  *)&a->tot_pay_3;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[28] = (unsigned int  )sizeof(double);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[28] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[28] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[28] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[28] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[28] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[28] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[29] = (         void  *)&a->tot_pay_4;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[29] = (unsigned int  )sizeof(double);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[29] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[29] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[29] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[29] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[29] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[29] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[30] = (         void  *)&a->tot_pay_5;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[30] = (unsigned int  )sizeof(double);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[30] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[30] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[30] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[30] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[30] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[30] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[31] = (         void  *)&a->tot_pay_6;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[31] = (unsigned int  )sizeof(double);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[31] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[31] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[31] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[31] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[31] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[31] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[32] = (         void  *)&a->tot_out_1;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[32] = (unsigned int  )sizeof(double);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[32] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[32] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[32] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[32] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[32] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[32] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[33] = (         void  *)&a->tot_out_2;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[33] = (unsigned int  )sizeof(double);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[33] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[33] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[33] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[33] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[33] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[33] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[34] = (         void  *)&a->tot_out_3;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[34] = (unsigned int  )sizeof(double);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[34] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[34] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[34] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[34] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[34] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[34] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[35] = (         void  *)&a->tot_out_4;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[35] = (unsigned int  )sizeof(double);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[35] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[35] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[35] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[35] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[35] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[35] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[36] = (         void  *)&a->tot_out_5;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[36] = (unsigned int  )sizeof(double);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[36] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[36] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[36] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[36] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[36] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[36] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[37] = (         void  *)&a->tot_out_6;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[37] = (unsigned int  )sizeof(double);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[37] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[37] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[37] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[37] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[37] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[37] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[38] = (         void  *)&a->rating_1;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[38] = (unsigned int  )sizeof(double);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[38] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[38] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[38] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[38] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[38] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[38] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[39] = (         void  *)&a->rating_2;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[39] = (unsigned int  )sizeof(double);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[39] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[39] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[39] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[39] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[39] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[39] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[40] = (         void  *)&a->rating_3;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[40] = (unsigned int  )sizeof(double);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[40] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[40] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[40] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[40] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[40] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[40] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[41] = (         void  *)&a->rating_4;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[41] = (unsigned int  )sizeof(double);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[41] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[41] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[41] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[41] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[41] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[41] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[42] = (         void  *)&a->rating_5;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[42] = (unsigned int  )sizeof(double);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[42] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[42] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[42] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[42] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[42] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[42] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[43] = (         void  *)&a->rating_6;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[43] = (unsigned int  )sizeof(double);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[43] = (         int  )sizeof(struct db_churn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[43] = (         void  *)0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[43] = (         int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[43] = (unsigned int  )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[43] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[43] = (unsigned short )0;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqphsv = sqlstm.sqhstv;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqphsl = sqlstm.sqhstl;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqphss = sqlstm.sqhsts;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqpind = sqlstm.sqindv;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqpins = sqlstm.sqinds;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqparm = sqlstm.sqharm;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqparc = sqlstm.sqharc;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqpadto = sqlstm.sqadto;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqptdso = sqlstm.sqtdso;
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1997 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 1997 "d:\\src\\customerprofiler\\db.pc"
}

#line 2042 "d:\\src\\customerprofiler\\db.pc"


	/* EXEC SQL AT customer_care  COMMIT; */ 
#line 2044 "d:\\src\\customerprofiler\\db.pc"

{
#line 2044 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 2044 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 2044 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 44;
#line 2044 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 2044 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 2044 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 2044 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )1655;
#line 2044 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 2044 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 2044 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 2044 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 2044 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 2044 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 2044 "d:\\src\\customerprofiler\\db.pc"
}

#line 2044 "d:\\src\\customerprofiler\\db.pc"

	delete a;
}

void churn::db_update_billenq_tab()
{
	printf("\n updating billenq_tab \n ");

	cout << "rows to update = " << billenq_db_map.size() << endl;

	int	rows_inserted = 0;

	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 2056 "d:\\src\\customerprofiler\\db.pc"


		char	row_id[BUF_LEN];
		//char	billenq_mob_num[BUF_LEN];		// varchar2(10)	- NN
		char	billenq_acct_num[BUF_LEN];		// varchar2(10)	- NN
		//char	billenq_pin[BUF_LEN];			// varchar2(6)	- NN
		char	billenq_current[BUF_LEN];		// varchar2(15)
		char	billenq_outstand[BUF_LEN];		// varchar2(15)
		char	billenq_last_update[BUF_LEN];	// varchar2(14)
		char	billenq_last_billamt[BUF_LEN];	// varchar2(15)
		char	billenq_last_billdate[BUF_LEN];	// varchar2(14)
		char	billenq_last_payamt[BUF_LEN];	// varchar2(15)
		char	billenq_last_paymode[BUF_LEN];	// varchar2(3)
		char	billenq_last_paydate[BUF_LEN];	// varchar2(14)
		//char	billenq_lang[BUF_LEN];			// varchar2(1)
		char	billenq_min_payment[BUF_LEN];	// varchar2(15)
		char	billenq_con_type[BUF_LEN];		// varchar2(1)
	
	/* EXEC SQL END DECLARE SECTION; */ 
#line 2074 "d:\\src\\customerprofiler\\db.pc"


	for(BILLENQ_DEF::iterator i_db_insert =billenq_db_map.begin(); i_db_insert!=billenq_db_map.end(); i_db_insert++)
	{
		strncpy(row_id,					( (*i_db_insert).second.row_id).c_str(), 18 );
		//strncpy(billenq_mob_num,		( (*i_db_insert).second.billenq_mob_num).c_str(), 10 );
		strncpy(billenq_acct_num,		( (*i_db_insert).second.billenq_acct_num).c_str(), 10 );
		//strncpy(billenq_pin,			( (*i_db_insert).second.billenq_pin).c_str(), 6 );
		strncpy(billenq_current,		( (*i_db_insert).second.billenq_current).c_str(), 15 );
		strncpy(billenq_outstand,		( (*i_db_insert).second.billenq_outstand).c_str(), 15 );
		strncpy(billenq_last_update,	( (*i_db_insert).second.billenq_last_update).c_str(), 14 );
		strncpy(billenq_last_billamt,	( (*i_db_insert).second.billenq_last_billamt).c_str(), 15 );
		strncpy(billenq_last_billdate,	( (*i_db_insert).second.billenq_last_billdate).c_str(), 10 );
		strncpy(billenq_last_payamt,	( (*i_db_insert).second.billenq_last_payamt).c_str(), 15 );
		strncpy(billenq_last_paymode,	( (*i_db_insert).second.billenq_last_paymode).c_str(), 3 );
		strncpy(billenq_last_paydate,	( (*i_db_insert).second.billenq_last_paydate).c_str(), 10 );
		//strncpy(billenq_lang,			( (*i_db_insert).second.billenq_lang).c_str(), 1 );
		strncpy(billenq_min_payment,	( (*i_db_insert).second.billenq_min_payment).c_str(), 15 );
		strncpy(billenq_con_type,		( (*i_db_insert).second.billenq_con_type).c_str(), 1 );

		
		row_id[18]				='\0';
		//billenq_mob_num[10]	='\0';
		billenq_acct_num[10]	='\0';
		//billenq_pin[6]		='\0';
		billenq_current[15]		='\0';
		billenq_outstand[15]	='\0';
		billenq_last_update[14]	='\0';
		billenq_last_billamt[15]='\0';
		billenq_last_billdate[10]='\0';
		billenq_last_payamt[15]	='\0';
		billenq_last_paymode[3]	='\0';
		billenq_last_paydate[10]='\0';
		//billenq_lang[1]		='\0';
		billenq_min_payment[15]	='\0';
		billenq_con_type[1]		='\0';


		/* EXEC SQL 
		AT customer_care 
		UPDATE  BILLENQ_TAB
		//UPDATE  BILLENQ_TAB_TEST
		SET
			//BILLENQ_MOB_NUM			= :billenq_mob_num, 
			BILLENQ_ACCT_NUM		= :billenq_acct_num, 
			//BILLENQ_PIN				= :billenq_pin, 
			BILLENQ_CURRENT			= :billenq_current, 
			BILLENQ_OUTSTAND		= :billenq_outstand, 
			BILLENQ_LAST_UPDATE		= :billenq_last_update, 
			BILLENQ_LAST_BILLAMT	= :billenq_last_billamt, 
			BILLENQ_LAST_BILLDATE	= :billenq_last_billdate, 
			BILLENQ_LAST_PAYAMT		= :billenq_last_payamt, 
			BILLENQ_LAST_PAYMODE	= :billenq_last_paymode, 
			BILLENQ_LAST_PAYDATE	= :billenq_last_paydate, 
			//BILLENQ_LANG			= :billenq_lang, 
			BILLENQ_MIN_PAYMENT		= :billenq_min_payment 
		WHERE
		  ROWID = :row_id; */ 
#line 2131 "d:\\src\\customerprofiler\\db.pc"

{
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  struct sqlexd sqlstm;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlvsn = 12;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.arrsiz = 44;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqladtp = &sqladt;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqltdsp = &sqltds;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.stmt = "update BILLENQ_TAB  set BILLENQ_ACCT_NUM=:b0,BILLENQ_CURREN\
T=:b1,BILLENQ_OUTSTAND=:b2,BILLENQ_LAST_UPDATE=:b3,BILLENQ_LAST_BILLAMT=:b4,BI\
LLENQ_LAST_BILLDATE=:b5,BILLENQ_LAST_PAYAMT=:b6,BILLENQ_LAST_PAYMODE=:b7,BILLE\
NQ_LAST_PAYDATE=:b8,BILLENQ_MIN_PAYMENT=:b9 where ROWID=:b10";
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.iters = (unsigned int  )1;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.offset = (unsigned int  )1683;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.cud = sqlcud0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlety = (unsigned short)256;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[0] = (         void  *)billenq_acct_num;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[0] = (unsigned int  )100;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[0] = (         int  )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[0] = (         void  *)0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[0] = (         int  )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[0] = (unsigned int  )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[1] = (         void  *)billenq_current;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[1] = (unsigned int  )100;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[1] = (         int  )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[1] = (         void  *)0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[1] = (         int  )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[1] = (unsigned int  )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[1] = (unsigned short )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[1] = (unsigned short )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[2] = (         void  *)billenq_outstand;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[2] = (unsigned int  )100;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[2] = (         int  )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[2] = (         void  *)0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[2] = (         int  )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[2] = (unsigned int  )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[2] = (unsigned short )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[2] = (unsigned short )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[3] = (         void  *)billenq_last_update;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[3] = (unsigned int  )100;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[3] = (         int  )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[3] = (         void  *)0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[3] = (         int  )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[3] = (unsigned int  )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[3] = (unsigned short )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[3] = (unsigned short )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[4] = (         void  *)billenq_last_billamt;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[4] = (unsigned int  )100;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[4] = (         int  )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[4] = (         void  *)0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[4] = (         int  )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[4] = (unsigned int  )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[4] = (unsigned short )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[4] = (unsigned short )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[5] = (         void  *)billenq_last_billdate;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[5] = (unsigned int  )100;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[5] = (         int  )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[5] = (         void  *)0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[5] = (         int  )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[5] = (unsigned int  )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[5] = (unsigned short )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[5] = (unsigned short )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[6] = (         void  *)billenq_last_payamt;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[6] = (unsigned int  )100;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[6] = (         int  )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[6] = (         void  *)0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[6] = (         int  )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[6] = (unsigned int  )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[6] = (unsigned short )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[6] = (unsigned short )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[7] = (         void  *)billenq_last_paymode;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[7] = (unsigned int  )100;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[7] = (         int  )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[7] = (         void  *)0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[7] = (         int  )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[7] = (unsigned int  )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[7] = (unsigned short )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[7] = (unsigned short )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[8] = (         void  *)billenq_last_paydate;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[8] = (unsigned int  )100;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[8] = (         int  )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[8] = (         void  *)0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[8] = (         int  )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[8] = (unsigned int  )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[8] = (unsigned short )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[8] = (unsigned short )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[9] = (         void  *)billenq_min_payment;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[9] = (unsigned int  )100;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[9] = (         int  )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[9] = (         void  *)0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[9] = (         int  )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[9] = (unsigned int  )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[9] = (unsigned short )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[9] = (unsigned short )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[10] = (         void  *)row_id;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[10] = (unsigned int  )100;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[10] = (         int  )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[10] = (         void  *)0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[10] = (         int  )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[10] = (unsigned int  )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[10] = (unsigned short )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[10] = (unsigned short )0;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 2112 "d:\\src\\customerprofiler\\db.pc"
  if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 2112 "d:\\src\\customerprofiler\\db.pc"
}

#line 2131 "d:\\src\\customerprofiler\\db.pc"


		rows_inserted++;
		if( !(rows_inserted%500))
		{
			/* EXEC SQL AT customer_care  COMMIT; */ 
#line 2136 "d:\\src\\customerprofiler\\db.pc"

{
#line 2136 "d:\\src\\customerprofiler\\db.pc"
   struct sqlexd sqlstm;
#line 2136 "d:\\src\\customerprofiler\\db.pc"
   sqlstm.sqlvsn = 12;
#line 2136 "d:\\src\\customerprofiler\\db.pc"
   sqlstm.arrsiz = 44;
#line 2136 "d:\\src\\customerprofiler\\db.pc"
   sqlstm.sqladtp = &sqladt;
#line 2136 "d:\\src\\customerprofiler\\db.pc"
   sqlstm.sqltdsp = &sqltds;
#line 2136 "d:\\src\\customerprofiler\\db.pc"
   sqlstm.iters = (unsigned int  )1;
#line 2136 "d:\\src\\customerprofiler\\db.pc"
   sqlstm.offset = (unsigned int  )1755;
#line 2136 "d:\\src\\customerprofiler\\db.pc"
   sqlstm.cud = sqlcud0;
#line 2136 "d:\\src\\customerprofiler\\db.pc"
   sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 2136 "d:\\src\\customerprofiler\\db.pc"
   sqlstm.sqlety = (unsigned short)256;
#line 2136 "d:\\src\\customerprofiler\\db.pc"
   sqlstm.occurs = (unsigned int  )0;
#line 2136 "d:\\src\\customerprofiler\\db.pc"
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 2136 "d:\\src\\customerprofiler\\db.pc"
   if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 2136 "d:\\src\\customerprofiler\\db.pc"
}

#line 2136 "d:\\src\\customerprofiler\\db.pc"

		}
	}

	/* EXEC SQL AT customer_care  COMMIT; */ 
#line 2140 "d:\\src\\customerprofiler\\db.pc"

{
#line 2140 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 2140 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 2140 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 44;
#line 2140 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 2140 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 2140 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 2140 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )1783;
#line 2140 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 2140 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 2140 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 2140 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 2140 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 2140 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 2140 "d:\\src\\customerprofiler\\db.pc"
}

#line 2140 "d:\\src\\customerprofiler\\db.pc"

	
	printf("billenq_tab updated ");
}

//-- truncate billenq_tab
void churn::db_truncate_billenq_tab()
{
	printf("truncating billenq_tab");
	
    /* EXEC SQL 
	AT customer_care 
	TRUNCATE TABLE BILLENQ_TAB; */ 
#line 2152 "d:\\src\\customerprofiler\\db.pc"

{
#line 2150 "d:\\src\\customerprofiler\\db.pc"
    struct sqlexd sqlstm;
#line 2150 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqlvsn = 12;
#line 2150 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.arrsiz = 44;
#line 2150 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqladtp = &sqladt;
#line 2150 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqltdsp = &sqltds;
#line 2150 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.stmt = "truncate TABLE BILLENQ_TAB";
#line 2150 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.iters = (unsigned int  )1;
#line 2150 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.offset = (unsigned int  )1811;
#line 2150 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.cud = sqlcud0;
#line 2150 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 2150 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqlety = (unsigned short)256;
#line 2150 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.occurs = (unsigned int  )0;
#line 2150 "d:\\src\\customerprofiler\\db.pc"
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 2150 "d:\\src\\customerprofiler\\db.pc"
    if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 2150 "d:\\src\\customerprofiler\\db.pc"
}

#line 2152 "d:\\src\\customerprofiler\\db.pc"
				
			
	printf("\n billenq_tab truncated");
}

//-- truncate CX_PROFILED_CUSTOMERS
void churn::db_truncate_cx_profiled_customers()
{
	printf("truncating CX_PROFILED_CUSTOMERS");
	
    /* EXEC SQL 
	AT customer_care 
	TRUNCATE TABLE CX_PROFILED_CUSTOMERS; */ 
#line 2164 "d:\\src\\customerprofiler\\db.pc"

{
#line 2162 "d:\\src\\customerprofiler\\db.pc"
    struct sqlexd sqlstm;
#line 2162 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqlvsn = 12;
#line 2162 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.arrsiz = 44;
#line 2162 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqladtp = &sqladt;
#line 2162 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqltdsp = &sqltds;
#line 2162 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.stmt = "truncate TABLE CX_PROFILED_CUSTOMERS";
#line 2162 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.iters = (unsigned int  )1;
#line 2162 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.offset = (unsigned int  )1839;
#line 2162 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.cud = sqlcud0;
#line 2162 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 2162 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqlety = (unsigned short)256;
#line 2162 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.occurs = (unsigned int  )0;
#line 2162 "d:\\src\\customerprofiler\\db.pc"
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 2162 "d:\\src\\customerprofiler\\db.pc"
    if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 2162 "d:\\src\\customerprofiler\\db.pc"
}

#line 2164 "d:\\src\\customerprofiler\\db.pc"
				
			
	printf("\n CX_PROFILED_CUSTOMERS truncated");
}

void churn::db_truncate_cx_profiled_details()
{
	printf("truncating CX_PROFILED_DETAILS");
	
    /* EXEC SQL 
	AT customer_care 
	TRUNCATE TABLE CX_PROFILED_DETAILS; */ 
#line 2175 "d:\\src\\customerprofiler\\db.pc"

{
#line 2173 "d:\\src\\customerprofiler\\db.pc"
    struct sqlexd sqlstm;
#line 2173 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqlvsn = 12;
#line 2173 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.arrsiz = 44;
#line 2173 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqladtp = &sqladt;
#line 2173 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqltdsp = &sqltds;
#line 2173 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.stmt = "truncate TABLE CX_PROFILED_DETAILS";
#line 2173 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.iters = (unsigned int  )1;
#line 2173 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.offset = (unsigned int  )1867;
#line 2173 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.cud = sqlcud0;
#line 2173 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 2173 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.sqlety = (unsigned short)256;
#line 2173 "d:\\src\\customerprofiler\\db.pc"
    sqlstm.occurs = (unsigned int  )0;
#line 2173 "d:\\src\\customerprofiler\\db.pc"
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 2173 "d:\\src\\customerprofiler\\db.pc"
    if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 2173 "d:\\src\\customerprofiler\\db.pc"
}

#line 2175 "d:\\src\\customerprofiler\\db.pc"
				
			
	printf("\n CX_PROFILED_DETAILS truncated");
}



double churn::get_reminder_balance(int contract_id)
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 2184 "d:\\src\\customerprofiler\\db.pc"


		//float	b_min_payment;
		int		b_contract_id;		// number(10)
	
	/* EXEC SQL END DECLARE SECTION; */ 
#line 2189 "d:\\src\\customerprofiler\\db.pc"


	b_contract_id	= contract_id;

/*
	EXEC SQL AT customer_care
	EXECUTE
	BEGIN
	:b_min_payment := FB_BILL_TRAN_API.GET_INTERIM_BALANCE(:b_contract_id);
	END;
	END-EXEC;

	*/

	//return b_min_payment;
	return 0;
}




double churn::get_interim_balance(int contract_id)
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 2212 "d:\\src\\customerprofiler\\db.pc"


		//float	b_min_payment;
		int		b_contract_id;		// number(10)
	
	/* EXEC SQL END DECLARE SECTION; */ 
#line 2217 "d:\\src\\customerprofiler\\db.pc"


	b_contract_id	= contract_id;

/*
	EXEC SQL AT customer_care
	EXECUTE
	BEGIN
	:b_min_payment := FB_BILL_TRAN_API.GET_INTERIM_BALANCE(:b_contract_id);
	END;
	END-EXEC;
*/
	//return b_min_payment;
	return 0;
}


float churn::db_first_minus_second(char* first_date, char* second_date)
{
	// YYYYMMDDHH24MISS

	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 2238 "d:\\src\\customerprofiler\\db.pc"


	char	b_first_date[20];			
	char	b_second_date[20];		
	float	b_difference;				
	/* EXEC SQL END DECLARE SECTION; */ 
#line 2243 "d:\\src\\customerprofiler\\db.pc"


	strcpy(b_first_date, first_date);
	strcpy(b_second_date, second_date);
	//b_difference = 0;
	
	
	/* EXEC SQL
	AT customer_care
	SELECT to_date(:b_first_date,'YYYYMMDDHH24MISS') - to_date(:b_second_date,'YYYYMMDDHH24MISS')
	INTO	:b_difference	
	FROM DUAL; */ 
#line 2254 "d:\\src\\customerprofiler\\db.pc"

{
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 44;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.stmt = "select (to_date(:b0,'YYYYMMDDHH24MISS')-to_date(:b1,'YYYYMMD\
DHH24MISS')) into :b2  from DUAL ";
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )1895;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.selerr = (unsigned short)1;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[0] = (         void  *)b_first_date;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[0] = (unsigned int  )20;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[0] = (         int  )0;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[0] = (         void  *)0;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[0] = (         int  )0;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[0] = (unsigned int  )0;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[0] = (unsigned short )0;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[0] = (unsigned short )0;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[1] = (         void  *)b_second_date;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[1] = (unsigned int  )20;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[1] = (         int  )0;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[1] = (         void  *)0;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[1] = (         int  )0;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[1] = (unsigned int  )0;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[1] = (unsigned short )0;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[1] = (unsigned short )0;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[2] = (         void  *)&b_difference;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[2] = (unsigned int  )sizeof(float);
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[2] = (         int  )0;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[2] = (         void  *)0;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[2] = (         int  )0;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[2] = (unsigned int  )0;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[2] = (unsigned short )0;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[2] = (unsigned short )0;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqphsv = sqlstm.sqhstv;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqphsl = sqlstm.sqhstl;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqphss = sqlstm.sqhsts;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqpind = sqlstm.sqindv;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqpins = sqlstm.sqinds;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqparm = sqlstm.sqharm;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqparc = sqlstm.sqharc;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqpadto = sqlstm.sqadto;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqptdso = sqlstm.sqtdso;
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 2250 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 2250 "d:\\src\\customerprofiler\\db.pc"
}

#line 2254 "d:\\src\\customerprofiler\\db.pc"


	//cout << b_difference << endl;
	
	return b_difference;

}


//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

void churn::db_read_prov_switch_image()
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 2267 "d:\\src\\customerprofiler\\db.pc"


	struct psi_t
	{ 
		int		image_id;							// number(10)
		char	imsi_no[BUF_LEN];					// varchar2(15)
		char	conn_type[BUF_LEN];					// varchar2(10)
		char	status_reason_id[BUF_LEN];			// varchar2(5)
		char	switch_status[BUF_LEN];				// varchar2(2)
	} *a;

	struct psi_ind
	{ 
 		short	image_id_ind;
		short	imsi_no_ind;
		short	conn_type_ind;
		short	status_reason_id_ind;	
		short	switch_status_ind;		
	}a_ind[FETCH_SIZE];

	int rows_to_fetch, rows_before, rows_this_time;

/* EXEC SQL END DECLARE SECTION; */ 
#line 2289 "d:\\src\\customerprofiler\\db.pc"


	int i;

	rows_to_fetch = FETCH_SIZE;		// number of rows in each "batch"  
	rows_before = 0;				   // previous value of sqlerrd[2]   
	rows_this_time = FETCH_SIZE; 

	if((a = new psi_t[rows_to_fetch])==NULL)
	{
		cout<<" cant allocate memory for prov_switch_image fetch"<<endl;
		exit(0);
	}

 
	/* EXEC SQL 
	AT customer_care 
	DECLARE  c_psi CURSOR FOR 
	SELECT	IMAGE_ID,
			IMSI_NO,
			CONN_TYPE,
			STATUS_REASON_ID,
			SWITCH_STATUS
	FROM	PROV_SWITCH_IMAGE; */ 
#line 2312 "d:\\src\\customerprofiler\\db.pc"


 
	/* EXEC SQL AT customer_care  OPEN c_psi; */ 
#line 2315 "d:\\src\\customerprofiler\\db.pc"

{
#line 2315 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 2315 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 2315 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 44;
#line 2315 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 2315 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 2315 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.stmt = sq0031;
#line 2315 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 2315 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )1935;
#line 2315 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.selerr = (unsigned short)1;
#line 2315 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 2315 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 2315 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 2315 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 2315 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqcmod = (unsigned int )0;
#line 2315 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 2315 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 2315 "d:\\src\\customerprofiler\\db.pc"
}

#line 2315 "d:\\src\\customerprofiler\\db.pc"
 
	/* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 
#line 2316 "d:\\src\\customerprofiler\\db.pc"
 

	while (rows_this_time == rows_to_fetch) 
	{ 
		/* EXEC SQL AT customer_care FOR :rows_to_fetch FETCH c_psi INTO :a INDICATOR :a_ind; */ 
#line 2320 "d:\\src\\customerprofiler\\db.pc"

{
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  struct sqlexd sqlstm;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlvsn = 12;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.arrsiz = 44;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqladtp = &sqladt;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqltdsp = &sqltds;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.iters = (unsigned int  )rows_to_fetch;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.offset = (unsigned int  )1963;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.selerr = (unsigned short)1;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.cud = sqlcud0;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlety = (unsigned short)256;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqfoff = (           int )0;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqfmod = (unsigned int )2;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[0] = (         void  *)&a->image_id;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[0] = (         int  )sizeof(struct psi_t);
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[0] = (         void  *)&a_ind->image_id_ind;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[0] = (         int  )sizeof(struct psi_ind);
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[0] = (unsigned int  )0;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[1] = (         void  *)a->imsi_no;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[1] = (unsigned int  )100;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[1] = (         int  )sizeof(struct psi_t);
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[1] = (         void  *)&a_ind->imsi_no_ind;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[1] = (         int  )sizeof(struct psi_ind);
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[1] = (unsigned int  )0;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[1] = (unsigned short )0;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[1] = (unsigned short )0;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[2] = (         void  *)a->conn_type;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[2] = (unsigned int  )100;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[2] = (         int  )sizeof(struct psi_t);
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[2] = (         void  *)&a_ind->conn_type_ind;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[2] = (         int  )sizeof(struct psi_ind);
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[2] = (unsigned int  )0;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[2] = (unsigned short )0;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[2] = (unsigned short )0;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[3] = (         void  *)a->status_reason_id;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[3] = (unsigned int  )100;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[3] = (         int  )sizeof(struct psi_t);
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[3] = (         void  *)&a_ind->status_reason_id_ind;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[3] = (         int  )sizeof(struct psi_ind);
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[3] = (unsigned int  )0;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[3] = (unsigned short )0;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[3] = (unsigned short )0;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[4] = (         void  *)a->switch_status;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[4] = (unsigned int  )100;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[4] = (         int  )sizeof(struct psi_t);
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[4] = (         void  *)&a_ind->switch_status_ind;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[4] = (         int  )sizeof(struct psi_ind);
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[4] = (unsigned int  )0;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[4] = (unsigned short )0;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[4] = (unsigned short )0;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 2320 "d:\\src\\customerprofiler\\db.pc"
  if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 2320 "d:\\src\\customerprofiler\\db.pc"
}

#line 2320 "d:\\src\\customerprofiler\\db.pc"
 		 

		rows_this_time = sqlca.sqlerrd[2] - rows_before; 
		rows_before = sqlca.sqlerrd[2]; 
//		printf(" this=%d before=%d \n", rows_this_time, rows_before);
		printf(" prov_switch_image=%d \n", rows_before);

		

		
		for(i=0; i<rows_this_time; i++)
		{

			//handling null fetches

			a[i].image_id = (a_ind[i].image_id_ind < 0) ? 0 : a[i].image_id;
			strcpy(a[i].imsi_no,
				  ((a_ind[i].imsi_no_ind < 0) ? "UNDEF":a[i].imsi_no));
			strcpy(a[i].conn_type,
				  ((a_ind[i].conn_type_ind < 0) ? "UNDEF":a[i].conn_type));
			strcpy(a[i].status_reason_id,
				  ((a_ind[i].status_reason_id_ind < 0) ? "UNDEF":a[i].status_reason_id));
			strcpy(a[i].switch_status,
				  ((a_ind[i].switch_status_ind < 0) ? "UNDEF":a[i].switch_status));
			
			if ( ( strncmp(a[i].conn_type, "VOICEPRE", 8) != 0 ) && ( strncmp(a[i].switch_status, "D", 1) != 0 ) )
			//if ( strncmp(a[i].switch_status, "D", 1) != 0 )
			{

				bd_image_map.insert(BD_IMAGE_DEF::value_type(a[i].imsi_no, a[i].image_id));

			}
		}
	} 

	/* EXEC SQL AT customer_care CLOSE c_psi; */ 
#line 2355 "d:\\src\\customerprofiler\\db.pc"

{
#line 2355 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 2355 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 2355 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 44;
#line 2355 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 2355 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 2355 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 2355 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )2011;
#line 2355 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 2355 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 2355 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 2355 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 2355 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 2355 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 2355 "d:\\src\\customerprofiler\\db.pc"
}

#line 2355 "d:\\src\\customerprofiler\\db.pc"
 
	delete a;
	printf("%d  prov_switch_image data read.\n\n",rows_before);
}


void churn::db_read_dyn_1_connection()	// Validate columns
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 2363 "d:\\src\\customerprofiler\\db.pc"


	struct connection_t
	{ 
		char	imsi[BUF_LEN];			// varchar2(20)
		int		connection_id;			// number(10)
		int		service_id;				// number(3)		NN
	} *a;

	struct connection_ind
	{ 
		short	imsi_ind;
  		short	connection_id_ind;				
		short	service_id_ind;		
	}a_ind[FETCH_SIZE];

	int rows_to_fetch, rows_before, rows_this_time;

	/* EXEC SQL END DECLARE SECTION; */ 
#line 2381 "d:\\src\\customerprofiler\\db.pc"


	int i;
	rows_to_fetch = FETCH_SIZE;		// number of rows in each "batch"  
	rows_before = 0;				   // previous value of sqlerrd[2]   
	rows_this_time = FETCH_SIZE; 

	if((a = new connection_t[rows_to_fetch])==NULL)
	{
		cout<<" cant allocate memeory for dyn_1_connection fetch"<<endl;
		exit(0);
	}

 
	/* EXEC SQL 
	AT customer_care 
	DECLARE  c_conn CURSOR FOR 
	SELECT	IMSI,
			CONNECTION_ID,
			SERVICE_ID
	FROM	DYN_1_CONNECTION
	WHERE	SERVICE_ID in(1,2,3); */ 
#line 2402 "d:\\src\\customerprofiler\\db.pc"


	/* EXEC SQL AT customer_care  OPEN c_conn; */ 
#line 2404 "d:\\src\\customerprofiler\\db.pc"

{
#line 2404 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 2404 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 2404 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 44;
#line 2404 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 2404 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 2404 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.stmt = sq0032;
#line 2404 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 2404 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )2039;
#line 2404 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.selerr = (unsigned short)1;
#line 2404 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 2404 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 2404 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 2404 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 2404 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqcmod = (unsigned int )0;
#line 2404 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 2404 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 2404 "d:\\src\\customerprofiler\\db.pc"
}

#line 2404 "d:\\src\\customerprofiler\\db.pc"
 
	/* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 
#line 2405 "d:\\src\\customerprofiler\\db.pc"
 

	while (rows_this_time == rows_to_fetch) 
	{ 
		/* EXEC SQL AT customer_care FOR :rows_to_fetch FETCH c_conn INTO :a INDICATOR :a_ind; */ 
#line 2409 "d:\\src\\customerprofiler\\db.pc"

{
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  struct sqlexd sqlstm;
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlvsn = 12;
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.arrsiz = 44;
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqladtp = &sqladt;
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqltdsp = &sqltds;
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.iters = (unsigned int  )rows_to_fetch;
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.offset = (unsigned int  )2067;
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.selerr = (unsigned short)1;
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.cud = sqlcud0;
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlety = (unsigned short)256;
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqfoff = (           int )0;
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqfmod = (unsigned int )2;
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[0] = (         void  *)a->imsi;
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[0] = (unsigned int  )100;
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[0] = (         int  )sizeof(struct connection_t);
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[0] = (         void  *)&a_ind->imsi_ind;
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[0] = (         int  )sizeof(struct connection_ind);
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[0] = (unsigned int  )0;
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[1] = (         void  *)&a->connection_id;
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[1] = (         int  )sizeof(struct connection_t);
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[1] = (         void  *)&a_ind->connection_id_ind;
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[1] = (         int  )sizeof(struct connection_ind);
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[1] = (unsigned int  )0;
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[1] = (unsigned short )0;
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[1] = (unsigned short )0;
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[2] = (         void  *)&a->service_id;
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[2] = (         int  )sizeof(struct connection_t);
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[2] = (         void  *)&a_ind->service_id_ind;
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[2] = (         int  )sizeof(struct connection_ind);
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[2] = (unsigned int  )0;
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[2] = (unsigned short )0;
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[2] = (unsigned short )0;
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 2409 "d:\\src\\customerprofiler\\db.pc"
  if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 2409 "d:\\src\\customerprofiler\\db.pc"
}

#line 2409 "d:\\src\\customerprofiler\\db.pc"
 		 

		rows_this_time = sqlca.sqlerrd[2] - rows_before; 
		rows_before = sqlca.sqlerrd[2]; 
//		printf(" this=%d before=%d \n", rows_this_time, rows_before);
		printf(" dyn_1_connection=%d \n", rows_before);

		for(i=0; i<rows_this_time; i++)
		{

			//handling null fetches

			strcpy(a[i].imsi,
				  ((a_ind[i].imsi_ind < 0) ? "UNDEF":a[i].imsi));
			a[i].connection_id = (a_ind[i].connection_id_ind < 0) ? 0 : a[i].connection_id;
			a[i].service_id = (a_ind[i].service_id_ind < 0) ? 0 : a[i].service_id;

						
			bd_connection_map.insert(BD_CONNECTION_TO_IMSI_DEF::value_type(a[i].connection_id, a[i].imsi));
		}
	}
	
	/* EXEC SQL AT customer_care CLOSE c_conn; */ 
#line 2431 "d:\\src\\customerprofiler\\db.pc"

{
#line 2431 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 2431 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 2431 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 44;
#line 2431 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 2431 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 2431 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 2431 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )2107;
#line 2431 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 2431 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 2431 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 2431 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 2431 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 2431 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 2431 "d:\\src\\customerprofiler\\db.pc"
}

#line 2431 "d:\\src\\customerprofiler\\db.pc"
 
	delete a;
	printf("%d  dyn_1_connection data read.\n\n",rows_before);
}


void churn::db_read_cam_connection()
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 2439 "d:\\src\\customerprofiler\\db.pc"


	struct connection_t
	{ 
		int		connection_id;						// number(10) - NN
		int		package_contract_id;				// number(10)
	} *a;

	struct connection_ind
	{ 
		short	connection_id_ind;
		short	package_contract_id_ind;					
	}a_ind[FETCH_SIZE];

	int rows_to_fetch, rows_before, rows_this_time;

/* EXEC SQL END DECLARE SECTION; */ 
#line 2455 "d:\\src\\customerprofiler\\db.pc"


	int i;
 
	rows_to_fetch = FETCH_SIZE;		// number of rows in each "batch"  
	rows_before = 0;				   // previous value of sqlerrd[2]   
	rows_this_time = FETCH_SIZE; 

	if((a = new connection_t[rows_to_fetch])==NULL)
	{
		cout<<" cant allocate memory for cam_connection fetch"<<endl;
		exit(0);
	}

 
	/* EXEC SQL 
	AT customer_care 
	DECLARE  c_connection CURSOR FOR 
	SELECT	CONNECTION_ID,
			PACKAGE_CONTRACT_ID 
	FROM	CAM_CONNECTION; */ 
#line 2475 "d:\\src\\customerprofiler\\db.pc"


 
	/* EXEC SQL AT customer_care  OPEN c_connection; */ 
#line 2478 "d:\\src\\customerprofiler\\db.pc"

{
#line 2478 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 2478 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 2478 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 44;
#line 2478 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 2478 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 2478 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.stmt = sq0033;
#line 2478 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 2478 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )2135;
#line 2478 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.selerr = (unsigned short)1;
#line 2478 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 2478 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 2478 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 2478 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 2478 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqcmod = (unsigned int )0;
#line 2478 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 2478 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 2478 "d:\\src\\customerprofiler\\db.pc"
}

#line 2478 "d:\\src\\customerprofiler\\db.pc"
 
	/* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 
#line 2479 "d:\\src\\customerprofiler\\db.pc"
 

	
	while (rows_this_time == rows_to_fetch) 
	{ 
		/* EXEC SQL AT customer_care FOR :rows_to_fetch FETCH c_connection INTO :a INDICATOR :a_ind; */ 
#line 2484 "d:\\src\\customerprofiler\\db.pc"

{
#line 2484 "d:\\src\\customerprofiler\\db.pc"
  struct sqlexd sqlstm;
#line 2484 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlvsn = 12;
#line 2484 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.arrsiz = 44;
#line 2484 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqladtp = &sqladt;
#line 2484 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqltdsp = &sqltds;
#line 2484 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.iters = (unsigned int  )rows_to_fetch;
#line 2484 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.offset = (unsigned int  )2163;
#line 2484 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.selerr = (unsigned short)1;
#line 2484 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.cud = sqlcud0;
#line 2484 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 2484 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlety = (unsigned short)256;
#line 2484 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 2484 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqfoff = (           int )0;
#line 2484 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqfmod = (unsigned int )2;
#line 2484 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[0] = (         void  *)&a->connection_id;
#line 2484 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
#line 2484 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[0] = (         int  )sizeof(struct connection_t);
#line 2484 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[0] = (         void  *)&a_ind->connection_id_ind;
#line 2484 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[0] = (         int  )sizeof(struct connection_ind);
#line 2484 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[0] = (unsigned int  )0;
#line 2484 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 2484 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 2484 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[1] = (         void  *)&a->package_contract_id;
#line 2484 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
#line 2484 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[1] = (         int  )sizeof(struct connection_t);
#line 2484 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[1] = (         void  *)&a_ind->package_contract_id_ind;
#line 2484 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[1] = (         int  )sizeof(struct connection_ind);
#line 2484 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[1] = (unsigned int  )0;
#line 2484 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[1] = (unsigned short )0;
#line 2484 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[1] = (unsigned short )0;
#line 2484 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 2484 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 2484 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 2484 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 2484 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 2484 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 2484 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 2484 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 2484 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 2484 "d:\\src\\customerprofiler\\db.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 2484 "d:\\src\\customerprofiler\\db.pc"
  if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 2484 "d:\\src\\customerprofiler\\db.pc"
}

#line 2484 "d:\\src\\customerprofiler\\db.pc"
 		 

		rows_this_time = sqlca.sqlerrd[2] - rows_before; 
		rows_before = sqlca.sqlerrd[2]; 
//		printf(" this=%d before=%d \n", rows_this_time, rows_before);
		printf(" cam_connection=%d \n", rows_before);

		for(i=0; i<rows_this_time; i++)
		{

			//handling null fetches

			a[i].connection_id = (a_ind[i].connection_id_ind < 0) ? 0 : a[i].connection_id;
			a[i].package_contract_id = (a_ind[i].package_contract_id_ind < 0) ? 0 : a[i].package_contract_id;
			
		}
	} 

	/* EXEC SQL AT customer_care CLOSE c_connection; */ 
#line 2502 "d:\\src\\customerprofiler\\db.pc"

{
#line 2502 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 2502 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 2502 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 44;
#line 2502 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 2502 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 2502 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 2502 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )2199;
#line 2502 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 2502 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 2502 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 2502 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 2502 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 2502 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 2502 "d:\\src\\customerprofiler\\db.pc"
}

#line 2502 "d:\\src\\customerprofiler\\db.pc"
 
	delete a;
	printf("%d  cam_connection data read.\n\n",rows_before);
}

void churn::db_read_cam_contract_package()
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 2509 "d:\\src\\customerprofiler\\db.pc"


	struct contract_package_t
	{ 
		int		contract_package_id;					// number(10) - NN
		int		contract_id;							// number(10)
		char	status[BUF_LEN];						// varchar2(2) - NN
		char	original_package_start_date[BUF_LEN];	// date
		char	start_date[BUF_LEN];					// date		- NN
	} *a;

	struct contract_package_ind
	{ 
		short	contract_package_id_ind;					
		short	contract_id_ind;							
		short	status_ind;
		short	original_package_start_date_ind;
		short	start_date_ind;									
	}a_ind[FETCH_SIZE];

	int rows_to_fetch, rows_before, rows_this_time;

	/* EXEC SQL END DECLARE SECTION; */ 
#line 2531 "d:\\src\\customerprofiler\\db.pc"


	int i;
	rows_to_fetch = FETCH_SIZE;		// number of rows in each "batch"  
	rows_before = 0;				   // previous value of sqlerrd[2]   
	rows_this_time = FETCH_SIZE; 

	if((a = new contract_package_t[rows_to_fetch])==NULL)
	{
		cout<<" cant allocate memeory for cam_contract_package fetch"<<endl;
		exit(0);
	}

 
	/* EXEC SQL 
	AT customer_care 
	DECLARE  c_ccp CURSOR FOR 
	SELECT	CONTRACT_PACKAGE_ID, 
		  CONTRACT_ID, 
		  STATUS,
		  ORIGINAL_PACKAGE_START_DATE,
		  START_DATE 
	FROM	CAM_CONTRACT_PACKAGE; */ 
#line 2553 "d:\\src\\customerprofiler\\db.pc"


	/* EXEC SQL AT customer_care  OPEN c_ccp; */ 
#line 2555 "d:\\src\\customerprofiler\\db.pc"

{
#line 2555 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 2555 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 2555 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 44;
#line 2555 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 2555 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 2555 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.stmt = sq0034;
#line 2555 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 2555 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )2227;
#line 2555 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.selerr = (unsigned short)1;
#line 2555 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 2555 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 2555 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 2555 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 2555 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqcmod = (unsigned int )0;
#line 2555 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 2555 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 2555 "d:\\src\\customerprofiler\\db.pc"
}

#line 2555 "d:\\src\\customerprofiler\\db.pc"
 
	/* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 
#line 2556 "d:\\src\\customerprofiler\\db.pc"
 

	network_stay	ns;
	network_stay	*p_ns;
	reng_date_time	rdt;

	NETWORK_STAY_DEF::iterator i_ns;
		
	while (rows_this_time == rows_to_fetch) 
	{ 
		/* EXEC SQL AT customer_care FOR :rows_to_fetch FETCH c_ccp INTO :a INDICATOR :a_ind; */ 
#line 2566 "d:\\src\\customerprofiler\\db.pc"

{
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  struct sqlexd sqlstm;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlvsn = 12;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.arrsiz = 44;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqladtp = &sqladt;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqltdsp = &sqltds;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.iters = (unsigned int  )rows_to_fetch;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.offset = (unsigned int  )2255;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.selerr = (unsigned short)1;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.cud = sqlcud0;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlety = (unsigned short)256;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqfoff = (           int )0;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqfmod = (unsigned int )2;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[0] = (         void  *)&a->contract_package_id;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[0] = (         int  )sizeof(struct contract_package_t);
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[0] = (         void  *)&a_ind->contract_package_id_ind;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[0] = (         int  )sizeof(struct contract_package_ind);
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[0] = (unsigned int  )0;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[1] = (         void  *)&a->contract_id;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[1] = (         int  )sizeof(struct contract_package_t);
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[1] = (         void  *)&a_ind->contract_id_ind;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[1] = (         int  )sizeof(struct contract_package_ind);
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[1] = (unsigned int  )0;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[1] = (unsigned short )0;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[1] = (unsigned short )0;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[2] = (         void  *)a->status;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[2] = (unsigned int  )100;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[2] = (         int  )sizeof(struct contract_package_t);
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[2] = (         void  *)&a_ind->status_ind;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[2] = (         int  )sizeof(struct contract_package_ind);
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[2] = (unsigned int  )0;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[2] = (unsigned short )0;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[2] = (unsigned short )0;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[3] = (         void  *)a->original_package_start_date;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[3] = (unsigned int  )100;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[3] = (         int  )sizeof(struct contract_package_t);
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[3] = (         void  *)&a_ind->original_package_start_date_ind;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[3] = (         int  )sizeof(struct contract_package_ind);
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[3] = (unsigned int  )0;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[3] = (unsigned short )0;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[3] = (unsigned short )0;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[4] = (         void  *)a->start_date;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[4] = (unsigned int  )100;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[4] = (         int  )sizeof(struct contract_package_t);
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[4] = (         void  *)&a_ind->start_date_ind;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[4] = (         int  )sizeof(struct contract_package_ind);
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[4] = (unsigned int  )0;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[4] = (unsigned short )0;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[4] = (unsigned short )0;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 2566 "d:\\src\\customerprofiler\\db.pc"
  if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 2566 "d:\\src\\customerprofiler\\db.pc"
}

#line 2566 "d:\\src\\customerprofiler\\db.pc"
 		 

		rows_this_time = sqlca.sqlerrd[2] - rows_before; 
		rows_before = sqlca.sqlerrd[2]; 
//		printf(" this=%d before=%d \n", rows_this_time, rows_before);
		printf(" cam_contract_package =%d \n", rows_before);

		for(i=0; i<rows_this_time; i++)
		{
			//handling null fetches

			a[i].contract_id = (a_ind[i].contract_id_ind < 0) ? 0 : a[i].contract_id;
			strcpy(a[i].status,
				  ((a_ind[i].status_ind < 0) ? "UNDEF":a[i].status));


			/*
			strcpy(a[i].original_package_start_date,
				  ((a_ind[i].original_package_start_date_ind < 0) ? "20500101000000":a[i].original_package_start_date));
			*/
			
			strcpy(a[i].start_date,
				  ((a_ind[i].start_date_ind < 0) ? "20100101000000":a[i].start_date));
			

			if ( ( i_ns = network_stay_map.find(a[i].contract_id) ) == network_stay_map.end() )
			{
				ns.init();
									
				if (a_ind[i].original_package_start_date_ind < 0)
				{
					// original_package_start_date is null
					// hence getting start_date

					a[i].start_date[14] = '\0';
					ns.start_date_rdt.set_date_time(a[i].start_date);
				}
				else
				{
					a[i].original_package_start_date[14] = '\0';
					ns.start_date_rdt.set_date_time(a[i].original_package_start_date); 
				}
							
				network_stay_map.insert(NETWORK_STAY_DEF::value_type(a[i].contract_id, ns));
			}
			else
			{
				p_ns = &(i_ns)->second;

				rdt.date.init();
				rdt.time.init();

				if (a_ind[i].original_package_start_date_ind < 0)
				{
					// original_package_start_date is null
					// hence getting start_date

					a[i].start_date[14] = '\0';
					rdt.set_date_time(a[i].start_date);
				}
				else
				{
					a[i].original_package_start_date[14] = '\0';
					rdt.set_date_time(a[i].original_package_start_date);
				} 

				if ( rdt < (*i_ns).second.start_date_rdt )
				{
					p_ns->start_date_rdt	= rdt;
				
				}
			}
		}
	}
	
	/* EXEC SQL AT customer_care CLOSE c_ccp; */ 
#line 2641 "d:\\src\\customerprofiler\\db.pc"

{
#line 2641 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 2641 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 2641 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 44;
#line 2641 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 2641 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 2641 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 2641 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )2303;
#line 2641 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 2641 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 2641 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 2641 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 2641 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 2641 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 2641 "d:\\src\\customerprofiler\\db.pc"
}

#line 2641 "d:\\src\\customerprofiler\\db.pc"
 
	delete a;
	printf("%d  cam_contract_package data read.\n\n",rows_before);
}


void churn::db_read_cam_contract()
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 2649 "d:\\src\\customerprofiler\\db.pc"


	struct contract_t
	{ 
		int		contract_id;							// number(10) - NN
		int		subscriber_node_id;						// number(10) - NN
		char	is_payment_responsible[BUF_LEN];		// varchar2(1)
		float	credit_limit;							// number(11,2)
		char	contract_type[BUF_LEN];					// varchar2(5) - NN
		char	status[BUF_LEN];						// varchar2(2) - NN
	} *a;

	struct contract_ind
	{ 
		short	contract_id_ind;							
		short	subscriber_node_id_ind;						
		short	is_payment_responsible_ind;		
		short	credit_limit_ind;							
		short	contract_type_ind;					
		short	status_ind;						
	}a_ind[FETCH_SIZE];

	int rows_to_fetch, rows_before, rows_this_time;

/* EXEC SQL END DECLARE SECTION; */ 
#line 2673 "d:\\src\\customerprofiler\\db.pc"


	int i;
 
	rows_to_fetch = FETCH_SIZE;		// number of rows in each "batch"  
	rows_before = 0;				   // previous value of sqlerrd[2]   
	rows_this_time = FETCH_SIZE; 

	if((a = new contract_t[rows_to_fetch])==NULL)
	{
		cout<<" cant allocate memory for cam_contract fetch"<<endl;
		exit(0);
	}

 
	/* EXEC SQL 
	AT customer_care 
	DECLARE  c_contract CURSOR FOR 
	SELECT	CONTRACT_ID, 
			  SUBSCRIBER_NODE_ID, 
			  IS_PAYMENT_RESPONSIBLE, 
			  CREDIT_LIMIT, 
			  CONTRACT_TYPE, 
			  STATUS 
	FROM	CAM_CONTRACT; */ 
#line 2697 "d:\\src\\customerprofiler\\db.pc"


 
	/* EXEC SQL AT customer_care  OPEN c_contract; */ 
#line 2700 "d:\\src\\customerprofiler\\db.pc"

{
#line 2700 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 2700 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 2700 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 44;
#line 2700 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 2700 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 2700 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.stmt = sq0035;
#line 2700 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 2700 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )2331;
#line 2700 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.selerr = (unsigned short)1;
#line 2700 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 2700 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 2700 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 2700 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 2700 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqcmod = (unsigned int )0;
#line 2700 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 2700 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 2700 "d:\\src\\customerprofiler\\db.pc"
}

#line 2700 "d:\\src\\customerprofiler\\db.pc"
 
	/* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 
#line 2701 "d:\\src\\customerprofiler\\db.pc"
 

	cam_contract cc;
	
	while (rows_this_time == rows_to_fetch) 
	{ 
		/* EXEC SQL AT customer_care FOR :rows_to_fetch FETCH c_contract INTO :a INDICATOR :a_ind; */ 
#line 2707 "d:\\src\\customerprofiler\\db.pc"

{
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  struct sqlexd sqlstm;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlvsn = 12;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.arrsiz = 44;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqladtp = &sqladt;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqltdsp = &sqltds;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.iters = (unsigned int  )rows_to_fetch;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.offset = (unsigned int  )2359;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.selerr = (unsigned short)1;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.cud = sqlcud0;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlety = (unsigned short)256;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqfoff = (           int )0;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqfmod = (unsigned int )2;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[0] = (         void  *)&a->contract_id;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[0] = (         int  )sizeof(struct contract_t);
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[0] = (         void  *)&a_ind->contract_id_ind;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[0] = (         int  )sizeof(struct contract_ind);
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[0] = (unsigned int  )0;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[1] = (         void  *)&a->subscriber_node_id;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[1] = (         int  )sizeof(struct contract_t);
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[1] = (         void  *)&a_ind->subscriber_node_id_ind;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[1] = (         int  )sizeof(struct contract_ind);
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[1] = (unsigned int  )0;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[1] = (unsigned short )0;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[1] = (unsigned short )0;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[2] = (         void  *)a->is_payment_responsible;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[2] = (unsigned int  )100;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[2] = (         int  )sizeof(struct contract_t);
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[2] = (         void  *)&a_ind->is_payment_responsible_ind;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[2] = (         int  )sizeof(struct contract_ind);
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[2] = (unsigned int  )0;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[2] = (unsigned short )0;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[2] = (unsigned short )0;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[3] = (         void  *)&a->credit_limit;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[3] = (unsigned int  )sizeof(float);
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[3] = (         int  )sizeof(struct contract_t);
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[3] = (         void  *)&a_ind->credit_limit_ind;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[3] = (         int  )sizeof(struct contract_ind);
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[3] = (unsigned int  )0;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[3] = (unsigned short )0;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[3] = (unsigned short )0;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[4] = (         void  *)a->contract_type;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[4] = (unsigned int  )100;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[4] = (         int  )sizeof(struct contract_t);
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[4] = (         void  *)&a_ind->contract_type_ind;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[4] = (         int  )sizeof(struct contract_ind);
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[4] = (unsigned int  )0;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[4] = (unsigned short )0;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[4] = (unsigned short )0;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[5] = (         void  *)a->status;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[5] = (unsigned int  )100;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[5] = (         int  )sizeof(struct contract_t);
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[5] = (         void  *)&a_ind->status_ind;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[5] = (         int  )sizeof(struct contract_ind);
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[5] = (unsigned int  )0;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[5] = (unsigned short )0;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[5] = (unsigned short )0;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 2707 "d:\\src\\customerprofiler\\db.pc"
  if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 2707 "d:\\src\\customerprofiler\\db.pc"
}

#line 2707 "d:\\src\\customerprofiler\\db.pc"
 		 

		rows_this_time = sqlca.sqlerrd[2] - rows_before; 
		rows_before = sqlca.sqlerrd[2]; 
//		printf(" this=%d before=%d \n", rows_this_time, rows_before);
		printf(" cam_contract=%d \n", rows_before);

		for(i=0; i<rows_this_time; i++)
		{

			//handling null fetches

			a[i].contract_id = (a_ind[i].contract_id_ind < 0) ? 0 : a[i].contract_id;
			a[i].subscriber_node_id = (a_ind[i].subscriber_node_id_ind < 0) ? 0 : a[i].subscriber_node_id;

			strcpy(a[i].is_payment_responsible,
				  ((a_ind[i].is_payment_responsible_ind < 0) ? "UNDEF":a[i].is_payment_responsible));
			a[i].credit_limit = (a_ind[i].credit_limit_ind < 0) ? 0 : a[i].credit_limit;
			strcpy(a[i].contract_type,
				  ((a_ind[i].contract_type_ind < 0) ? "UNDEF":a[i].contract_type));
			strcpy(a[i].status,
				  ((a_ind[i].status_ind < 0) ? "UNDEF":a[i].status));

			cc.init();

			cc.contract_id				= a[i].contract_id;							
			cc.subscriber_node_id		= a[i].subscriber_node_id;						
			cc.is_payment_responsible	= a[i].is_payment_responsible;	
			cc.credit_limit				= a[i].credit_limit;							
			cc.contract_type			= a[i].contract_type;							
			cc.status					= a[i].status;									

			cam_contract_map.insert(CONTRACT_DEF::value_type(a[i].contract_id, cc));
		}
	} 

	/* EXEC SQL AT customer_care CLOSE c_contract; */ 
#line 2743 "d:\\src\\customerprofiler\\db.pc"

{
#line 2743 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 2743 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 2743 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 44;
#line 2743 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 2743 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 2743 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 2743 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )2411;
#line 2743 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 2743 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 2743 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 2743 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 2743 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 2743 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 2743 "d:\\src\\customerprofiler\\db.pc"
}

#line 2743 "d:\\src\\customerprofiler\\db.pc"
 
	delete a;
	printf("%d  cam_contract data read.\n\n",rows_before);
}

/*
CREATE TABLE BILL_PERIOD_TRANSACTION_MASTER ( 
  NODE_ID              NUMBER (10)   NOT NULL, 
  NODE_TYPE            VARCHAR2 (1)  NOT NULL, 
  BILL_NUMBER          VARCHAR2 (20)  NOT NULL, 
  START_DATE           DATE, 
  END_DATE             DATE, 
  CLOSED_DATE          DATE, 
  BROUGHT_FWD          NUMBER (14,2), 
  BILL_AMOUNT          NUMBER (14,2), 
  PERIOD_PAYMENTS      NUMBER (14,2), 
  CARRIED_FWD          NUMBER (14,2), 
  DUE_DATE             DATE, 
  PERIOD_OVERPAYMENTS  NUMBER (14,2), 
  */

/*
void churn::db_read_bill_period_transaction_master()
{


	EXEC SQL BEGIN DECLARE SECTION;

	struct bill_transactions_t
	{
		int		node_id;					// number(10)	NN
		char	bill_number[BUF_LEN];		// varchar2(20)	NN
		//float	carried_fwd;				// number(14,2)
		char	start_date[BUF_LEN];		// date
		char	end_date[BUF_LEN];			// date
		char	due_date[BUF_LEN];			// date
	} *a;

	struct bill_transactions_ind
	{ 
		short	node_id_ind;
  		short	bill_number_ind;				
		//short	carried_fwd_ind;
		short	start_date_ind;
		short	end_date_ind;
		short	due_date_ind;
	}a_ind[FETCH_SIZE];

	int rows_to_fetch, rows_before, rows_this_time;
	
	EXEC SQL END DECLARE SECTION;

	int i;
	rows_to_fetch = FETCH_SIZE;		// number of rows in each "batch"  
	rows_before = 0;				   // previous value of sqlerrd[2]   
	rows_this_time = FETCH_SIZE; 

	if((a = new bill_transactions_t[rows_to_fetch])==NULL)
	{
		cout<<" cant allocate memeory for bill_period_transaction_master fetch"<<endl;
		exit(0);
	}

 
	EXEC SQL 
	AT customer_care 
	DECLARE  c_transaction_master CURSOR FOR 
	SELECT	NODE_ID,	
			BILL_NUMBER,
			START_DATE,
			END_DATE,
			DUE_DATE
	FROM	BILL_PERIOD_TRANSACTION_MASTER;
	//WHERE	TRAN_TYPE = 'BILL';

	EXEC SQL AT customer_care  OPEN c_transaction_master; 
	EXEC SQL WHENEVER NOT FOUND CONTINUE; 

	//transaction_master tm;
	//transaction_key tk;
	//TRANSACTION_MASTER_DEF::iterator i_tm;
	//reng_date_time rdt;
	
	while (rows_this_time == rows_to_fetch) 
	{ 
		EXEC SQL AT customer_care FOR :rows_to_fetch FETCH c_transaction_master INTO :a INDICATOR :a_ind; 		 

		rows_this_time = sqlca.sqlerrd[2] - rows_before; 
		rows_before = sqlca.sqlerrd[2]; 
//		printf(" this=%d before=%d \n", rows_this_time, rows_before);
		printf(" bill_period_transaction_master =%d \n", rows_before);

		for(i=0; i<rows_this_time; i++)
		{

			//handling null fetches
			//a[i].carried_fwd = (a_ind[i].carried_fwd_ind < 0) ? 0 : a[i].carried_fwd;
			strcpy(a[i].start_date,
				  ((a_ind[i].start_date_ind < 0) ? "19490101000000":a[i].start_date));
			strcpy(a[i].end_date,
				  ((a_ind[i].end_date_ind < 0) ? "20500101000000":a[i].end_date));
			strcpy(a[i].due_date,
				  ((a_ind[i].due_date_ind < 0) ? "20500101000000":a[i].due_date));


			transaction_master *tm = new transaction_master;
			tm->init();
			

			tm->node_id		= a[i].node_id;	
			//tm.bill_number	= a[i].bill_number;
			//tm.carried_fwd	= a[i].carried_fwd;

			a[i].start_date[14] = '\0';
			tm->start_date_rdt.set_date_time(a[i].start_date); 
			a[i].end_date[14] = '\0';
			tm->end_date_rdt.set_date_time(a[i].end_date); 
			a[i].due_date[14] = '\0';
			tm->due_date_rdt.set_date_time(a[i].due_date);

			//tm.start_date	= a[i].start_date;
			//tm.end_date		= a[i].end_date;
			//tm.due_date		= a[i].due_date;
			
			//tk.init();
			//tk.node_id		= a[i].node_id;	
			//tk.end_date_rdt.set_date_time(a[i].end_date);  
		
								
			bill_period_transaction_master_map.insert(TRANSACTION_MASTER_DEF::value_type(a[i].bill_number, tm));

			//bill_period_transaction_master_k_map.insert(TRANSACTION_MASTER_K_DEF::value_type(tk, tm));
			
		}
	}
	
	EXEC SQL AT customer_care CLOSE c_transaction_master; 
	delete a;
	printf("%d  bill_period_transaction_master data read.\n\n",rows_before);
}
*/


void churn::db_read_bill_period_transaction_master()
{


	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 2890 "d:\\src\\customerprofiler\\db.pc"


	struct bill_transactions_t
	{
		int		node_id;					// number(10)	NN
		char	bill_number[BUF_LEN];		// varchar2(20)	NN
		char	start_date[BUF_LEN];		// date
		char	end_date[BUF_LEN];			// date
		char	due_date[BUF_LEN];			// date
	} *a;

	struct bill_transactions_ind
	{ 
		short	node_id_ind;
  		short	bill_number_ind;				
		short	start_date_ind;
		short	end_date_ind;
		short	due_date_ind;
	}a_ind[FETCH_SIZE];

	int rows_to_fetch, rows_before, rows_this_time;
	
	/* EXEC SQL END DECLARE SECTION; */ 
#line 2912 "d:\\src\\customerprofiler\\db.pc"


	int i;
	rows_to_fetch = FETCH_SIZE;		// number of rows in each "batch"  
	rows_before = 0;				   // previous value of sqlerrd[2]   
	rows_this_time = FETCH_SIZE; 

	if((a = new bill_transactions_t[rows_to_fetch])==NULL)
	{
		cout<<" cant allocate memeory for bill_period_transaction_master fetch"<<endl;
		exit(0);
	}

 
	/* EXEC SQL 
	AT customer_care 
	DECLARE  c_transaction_master CURSOR FOR 
	SELECT	NODE_ID,	
			BILL_NUMBER,
			START_DATE,
			END_DATE,
			DUE_DATE
	FROM	BILL_PERIOD_TRANSACTION_MASTER; */ 
#line 2934 "d:\\src\\customerprofiler\\db.pc"


	/* EXEC SQL AT customer_care  OPEN c_transaction_master; */ 
#line 2936 "d:\\src\\customerprofiler\\db.pc"

{
#line 2936 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 2936 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 2936 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 44;
#line 2936 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 2936 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 2936 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.stmt = sq0036;
#line 2936 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 2936 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )2439;
#line 2936 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.selerr = (unsigned short)1;
#line 2936 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 2936 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 2936 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 2936 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 2936 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqcmod = (unsigned int )0;
#line 2936 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 2936 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 2936 "d:\\src\\customerprofiler\\db.pc"
}

#line 2936 "d:\\src\\customerprofiler\\db.pc"
 
	/* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 
#line 2937 "d:\\src\\customerprofiler\\db.pc"
 

	
	while (rows_this_time == rows_to_fetch) 
	{ 
		/* EXEC SQL AT customer_care FOR :rows_to_fetch FETCH c_transaction_master INTO :a INDICATOR :a_ind; */ 
#line 2942 "d:\\src\\customerprofiler\\db.pc"

{
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  struct sqlexd sqlstm;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlvsn = 12;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.arrsiz = 44;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqladtp = &sqladt;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqltdsp = &sqltds;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.iters = (unsigned int  )rows_to_fetch;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.offset = (unsigned int  )2467;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.selerr = (unsigned short)1;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.cud = sqlcud0;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlety = (unsigned short)256;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqfoff = (           int )0;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqfmod = (unsigned int )2;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[0] = (         void  *)&a->node_id;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[0] = (         int  )sizeof(struct bill_transactions_t);
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[0] = (         void  *)&a_ind->node_id_ind;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[0] = (         int  )sizeof(struct bill_transactions_ind);
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[0] = (unsigned int  )0;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[1] = (         void  *)a->bill_number;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[1] = (unsigned int  )100;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[1] = (         int  )sizeof(struct bill_transactions_t);
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[1] = (         void  *)&a_ind->bill_number_ind;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[1] = (         int  )sizeof(struct bill_transactions_ind);
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[1] = (unsigned int  )0;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[1] = (unsigned short )0;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[1] = (unsigned short )0;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[2] = (         void  *)a->start_date;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[2] = (unsigned int  )100;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[2] = (         int  )sizeof(struct bill_transactions_t);
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[2] = (         void  *)&a_ind->start_date_ind;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[2] = (         int  )sizeof(struct bill_transactions_ind);
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[2] = (unsigned int  )0;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[2] = (unsigned short )0;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[2] = (unsigned short )0;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[3] = (         void  *)a->end_date;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[3] = (unsigned int  )100;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[3] = (         int  )sizeof(struct bill_transactions_t);
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[3] = (         void  *)&a_ind->end_date_ind;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[3] = (         int  )sizeof(struct bill_transactions_ind);
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[3] = (unsigned int  )0;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[3] = (unsigned short )0;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[3] = (unsigned short )0;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[4] = (         void  *)a->due_date;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[4] = (unsigned int  )100;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[4] = (         int  )sizeof(struct bill_transactions_t);
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[4] = (         void  *)&a_ind->due_date_ind;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[4] = (         int  )sizeof(struct bill_transactions_ind);
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[4] = (unsigned int  )0;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[4] = (unsigned short )0;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[4] = (unsigned short )0;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 2942 "d:\\src\\customerprofiler\\db.pc"
  if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 2942 "d:\\src\\customerprofiler\\db.pc"
}

#line 2942 "d:\\src\\customerprofiler\\db.pc"
 		 

		rows_this_time = sqlca.sqlerrd[2] - rows_before; 
		rows_before = sqlca.sqlerrd[2]; 
//		printf(" this=%d before=%d \n", rows_this_time, rows_before);
		printf(" bill_period_transaction_master =%d \n", rows_before);

		for(i=0; i<rows_this_time; i++)
		{

			//handling null fetches

			/*
			strcpy(a[i].start_date,
				  ((a_ind[i].start_date_ind < 0) ? "19490101000000":a[i].start_date));
			strcpy(a[i].end_date,
				  ((a_ind[i].end_date_ind < 0) ? "20500101000000":a[i].end_date));
			strcpy(a[i].due_date,
				  ((a_ind[i].due_date_ind < 0) ? "20500101000000":a[i].due_date));
			*/

			if ( (a_ind[i].start_date_ind < 0) || (a_ind[i].end_date_ind < 0) || (a_ind[i].due_date_ind < 0) )
			{
				//cout << "ERROR :start_date, end_date or due_date null in bill_period_transaction_master for " << endl;
				//cout << "Node Id = " << a[i].node_id << endl;
				//cout << "bill_number = " << a[i].bill_number << endl;

				// fprintf(log_to_file,"ERROR : start_date, end_date or due_date null in bill_period_transaction_master for Node Id %d, bill number %d|\n",a[i].node_id, a[i].bill_number);
			}
			else
			{
				transaction_master *tm = new transaction_master;
				tm->init();
			
				tm->node_id		= a[i].node_id;	


				a[i].start_date[14] = '\0';
				tm->start_date_rdt.set_date_time(a[i].start_date); 
				a[i].end_date[14] = '\0';
				tm->end_date_rdt.set_date_time(a[i].end_date); 
				a[i].due_date[14] = '\0';
				tm->due_date_rdt.set_date_time(a[i].due_date);

								
				bill_period_transaction_master_map.insert(TRANSACTION_MASTER_DEF::value_type(a[i].bill_number, tm));
			}
		}
	}
	
	/* EXEC SQL AT customer_care CLOSE c_transaction_master; */ 
#line 2992 "d:\\src\\customerprofiler\\db.pc"

{
#line 2992 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 2992 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 2992 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 44;
#line 2992 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 2992 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 2992 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 2992 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )2515;
#line 2992 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 2992 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 2992 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 2992 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 2992 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 2992 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 2992 "d:\\src\\customerprofiler\\db.pc"
}

#line 2992 "d:\\src\\customerprofiler\\db.pc"
 
	delete a;
	printf("%d  bill_period_transaction_master data read.\n\n",rows_before);
}


/*
CREATE TABLE CX_PAYMENT_DELAY_RISK ( 
  DELAY_DAYS_FROM     NUMBER (5)    NOT NULL, 
  DELAY_DAYS_TO       NUMBER (5)    NOT NULL, 
  PAYMENT_DELAY_RISK  NUMBER (5,4)  NOT NULL))

CREATE TABLE CX_PAYMENT_GAP_RISK ( 
  PROB_FROM         NUMBER (3,2)  NOT NULL, 
  PROB_TO           NUMBER (13,2) NOT NULL, 
  PAYMENT_GAP_RISK  NUMBER (5,4)  NOT NULL))


CREATE TABLE CX_NETWORK_STAY_POINTS ( 
  STAY_YEARS_FROM  NUMBER (3)    NOT NULL, 
  STAY_YEARS_TO    NUMBER (13)   NOT NULL, 
  POINTS           NUMBER (5,2)  NOT NULL))


CREATE TABLE CX_CREDIT_RATINGS ( 
  CREDIT_RATING_ID  NUMBER (5)    NOT NULL, 
  DESCRIPTION       VARCHAR2 (20), 
  PROB_FROM         NUMBER (3,2)  NOT NULL, 
  PROB_TO           NUMBER (13,2) NOT NULL)

cx_profiled_customers

account_no numner NN - PK
cx_type_id	number
score		NUMBER(14,4)



CREATE TABLE CX_PROFILED_DETAILS (
         ACCOUNT_NO            NUMBER(10)               NOT NULL,
         CX_TYPE_ID           NUMBER(10),
         SCORE                NUMBER(14,4),
         TOTAL_SCORE          NUMBER(14,4),
         NO_OF_BILLS          NUMBER(10),
         NETWORK_STAY_DAYS    NUMBER(14,4),
         NT_WORK_STAY       NUMBER(14,4),
         NETWORK_STAY_POINTS    NUMBER(14,4),
         BILL_NO_1            VARCHAR2(20),
         BILL_NO_2            VARCHAR2(20),
         BILL_NO_3            VARCHAR2(20),
         BILL_NO_4            VARCHAR2(20),
         BILL_NO_5            VARCHAR2(20),
         BILL_NO_6            VARCHAR2(20),
         DELAY_1              NUMBER(14,4),
         DELAY_2              NUMBER(14,4),
         DELAY_3              NUMBER(14,4),
         DELAY_4              NUMBER(14,4),
         DELAY_5              NUMBER(14,4),
         DELAY_6              NUMBER(14,4),
         GAP_1             NUMBER(14,4),
         GAP_2             NUMBER(14,4),
         GAP_3             NUMBER(14,4),
         GAP_4             NUMBER(14,4),
         GAP_5             NUMBER(14,4),
         GAP_6             NUMBER(14,4),
         TOT_PAY_1               NUMBER(14,4),
         TOT_PAY_2               NUMBER(14,4),
         TOT_PAY_3               NUMBER(14,4),
         TOT_PAY_4               NUMBER(14,4),
         TOT_PAY_5               NUMBER(14,4),
         TOT_PAY_6               NUMBER(14,4),
         TOT_OUT_1               NUMBER(14,4),
         TOT_OUT_2               NUMBER(14,4),
         TOT_OUT_3               NUMBER(14,4),
         TOT_OUT_4               NUMBER(14,4),
         TOT_OUT_5               NUMBER(14,4),
         TOT_OUT_6               NUMBER(14,4),
         RATING_1             NUMBER(14,4),
         RATING_2             NUMBER(14,4),
         RATING_3             NUMBER(14,4),
         RATING_4             NUMBER(14,4),
         RATING_5             NUMBER(14,4),
         RATING_6             NUMBER(14,4))


*/

void churn::db_read_cx_payment_delay_risk()
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 3081 "d:\\src\\customerprofiler\\db.pc"


	struct delay_t
	{ 
		int		delay_days_from;			// number(5) - NN
		int		delay_days_to;				// number(5) - NN
		float	payment_delay_risk;			// number(5,4)	- NN
	} *a;

	struct delay_ind
	{ 
		short	delay_days_from_ind;							
		short	delay_days_to_ind;						
		short	payment_delay_risk_ind;		
	}a_ind[FETCH_SIZE];

	int rows_to_fetch, rows_before, rows_this_time;

/* EXEC SQL END DECLARE SECTION; */ 
#line 3099 "d:\\src\\customerprofiler\\db.pc"


	int i;
 
	rows_to_fetch = FETCH_SIZE;		// number of rows in each "batch"  
	rows_before = 0;				// previous value of sqlerrd[2]   
	rows_this_time = FETCH_SIZE; 

	if((a = new delay_t[rows_to_fetch])==NULL)
	{
		cout<<" cant allocate memory for cx_payment_delay_risk fetch"<<endl;
		exit(0);
	}

 
	/* EXEC SQL 
	AT customer_care 
	DECLARE  c_delay CURSOR FOR 
	SELECT	DELAY_DAYS_FROM, 
			DELAY_DAYS_TO, 
			PAYMENT_DELAY_RISK 
	FROM	CX_PAYMENT_DELAY_RISK; */ 
#line 3120 "d:\\src\\customerprofiler\\db.pc"


 
	/* EXEC SQL AT customer_care  OPEN c_delay; */ 
#line 3123 "d:\\src\\customerprofiler\\db.pc"

{
#line 3123 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 3123 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 3123 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 44;
#line 3123 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 3123 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 3123 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.stmt = sq0037;
#line 3123 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 3123 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )2543;
#line 3123 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.selerr = (unsigned short)1;
#line 3123 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 3123 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 3123 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 3123 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 3123 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqcmod = (unsigned int )0;
#line 3123 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 3123 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 3123 "d:\\src\\customerprofiler\\db.pc"
}

#line 3123 "d:\\src\\customerprofiler\\db.pc"
 
	/* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 
#line 3124 "d:\\src\\customerprofiler\\db.pc"
 

	delay_key dk;
	
	while (rows_this_time == rows_to_fetch) 
	{ 
		/* EXEC SQL AT customer_care FOR :rows_to_fetch FETCH c_delay INTO :a INDICATOR :a_ind; */ 
#line 3130 "d:\\src\\customerprofiler\\db.pc"

{
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  struct sqlexd sqlstm;
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlvsn = 12;
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.arrsiz = 44;
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqladtp = &sqladt;
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqltdsp = &sqltds;
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.iters = (unsigned int  )rows_to_fetch;
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.offset = (unsigned int  )2571;
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.selerr = (unsigned short)1;
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.cud = sqlcud0;
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlety = (unsigned short)256;
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqfoff = (           int )0;
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqfmod = (unsigned int )2;
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[0] = (         void  *)&a->delay_days_from;
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[0] = (         int  )sizeof(struct delay_t);
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[0] = (         void  *)&a_ind->delay_days_from_ind;
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[0] = (         int  )sizeof(struct delay_ind);
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[0] = (unsigned int  )0;
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[1] = (         void  *)&a->delay_days_to;
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[1] = (         int  )sizeof(struct delay_t);
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[1] = (         void  *)&a_ind->delay_days_to_ind;
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[1] = (         int  )sizeof(struct delay_ind);
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[1] = (unsigned int  )0;
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[1] = (unsigned short )0;
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[1] = (unsigned short )0;
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[2] = (         void  *)&a->payment_delay_risk;
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[2] = (unsigned int  )sizeof(float);
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[2] = (         int  )sizeof(struct delay_t);
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[2] = (         void  *)&a_ind->payment_delay_risk_ind;
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[2] = (         int  )sizeof(struct delay_ind);
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[2] = (unsigned int  )0;
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[2] = (unsigned short )0;
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[2] = (unsigned short )0;
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 3130 "d:\\src\\customerprofiler\\db.pc"
  if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 3130 "d:\\src\\customerprofiler\\db.pc"
}

#line 3130 "d:\\src\\customerprofiler\\db.pc"
 		 

		rows_this_time = sqlca.sqlerrd[2] - rows_before; 
		rows_before = sqlca.sqlerrd[2]; 
//		printf(" this=%d before=%d \n", rows_this_time, rows_before);
		printf(" cx_payment_delay_risk=%d \n", rows_before);

		for(i=0; i<rows_this_time; i++)
		{

			//handling null fetches - all NN

			dk.init();

			dk.delay_days_from		= a[i].delay_days_from;		
			dk.delay_days_to		= a[i].delay_days_to;										
			
			delay_map.insert(DELAY_DEF::value_type(dk, a[i].payment_delay_risk));
		}
	} 

	/* EXEC SQL AT customer_care CLOSE c_delay; */ 
#line 3151 "d:\\src\\customerprofiler\\db.pc"

{
#line 3151 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 3151 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 3151 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 44;
#line 3151 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 3151 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 3151 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 3151 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )2611;
#line 3151 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 3151 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 3151 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 3151 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 3151 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 3151 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 3151 "d:\\src\\customerprofiler\\db.pc"
}

#line 3151 "d:\\src\\customerprofiler\\db.pc"
 
	delete a;
	printf("%d  cx_payment_delay_risk data read.\n\n",rows_before);
}


void churn::db_read_cx_payment_gap_risk()
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 3159 "d:\\src\\customerprofiler\\db.pc"


	struct gap_t
	{ 
		float	prob_from;			// number(3,2) - NN
		float	prob_to;			// number(13,2) - NN
		float	payment_gap_risk;	// number(5,4)	- NN
	} *a;

	struct gap_ind
	{ 
		short	prob_from_ind;							
		short	prob_to_ind;						
		short	payment_gap_risk_ind;		
	}a_ind[FETCH_SIZE];

	int rows_to_fetch, rows_before, rows_this_time;

/* EXEC SQL END DECLARE SECTION; */ 
#line 3177 "d:\\src\\customerprofiler\\db.pc"


	int i;
 
	rows_to_fetch = FETCH_SIZE;		// number of rows in each "batch"  
	rows_before = 0;				// previous value of sqlerrd[2]   
	rows_this_time = FETCH_SIZE; 

	if((a = new gap_t[rows_to_fetch])==NULL)
	{
		cout<<" cant allocate memory for cx_payment_gap_risk fetch"<<endl;
		exit(0);
	}

 
	/* EXEC SQL 
	AT customer_care 
	DECLARE  c_gap CURSOR FOR 
	SELECT	PROB_FROM, 
			PROB_TO, 
			PAYMENT_GAP_RISK 
	FROM	CX_PAYMENT_GAP_RISK; */ 
#line 3198 "d:\\src\\customerprofiler\\db.pc"


 
	/* EXEC SQL AT customer_care  OPEN c_gap; */ 
#line 3201 "d:\\src\\customerprofiler\\db.pc"

{
#line 3201 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 3201 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 3201 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 44;
#line 3201 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 3201 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 3201 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.stmt = sq0038;
#line 3201 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 3201 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )2639;
#line 3201 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.selerr = (unsigned short)1;
#line 3201 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 3201 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 3201 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 3201 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 3201 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqcmod = (unsigned int )0;
#line 3201 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 3201 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 3201 "d:\\src\\customerprofiler\\db.pc"
}

#line 3201 "d:\\src\\customerprofiler\\db.pc"
 
	/* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 
#line 3202 "d:\\src\\customerprofiler\\db.pc"
 

	gap_key gk;
	
	while (rows_this_time == rows_to_fetch) 
	{ 
		/* EXEC SQL AT customer_care FOR :rows_to_fetch FETCH c_gap INTO :a INDICATOR :a_ind; */ 
#line 3208 "d:\\src\\customerprofiler\\db.pc"

{
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  struct sqlexd sqlstm;
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlvsn = 12;
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.arrsiz = 44;
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqladtp = &sqladt;
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqltdsp = &sqltds;
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.iters = (unsigned int  )rows_to_fetch;
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.offset = (unsigned int  )2667;
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.selerr = (unsigned short)1;
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.cud = sqlcud0;
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlety = (unsigned short)256;
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqfoff = (           int )0;
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqfmod = (unsigned int )2;
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[0] = (         void  *)&a->prob_from;
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(float);
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[0] = (         int  )sizeof(struct gap_t);
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[0] = (         void  *)&a_ind->prob_from_ind;
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[0] = (         int  )sizeof(struct gap_ind);
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[0] = (unsigned int  )0;
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[1] = (         void  *)&a->prob_to;
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(float);
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[1] = (         int  )sizeof(struct gap_t);
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[1] = (         void  *)&a_ind->prob_to_ind;
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[1] = (         int  )sizeof(struct gap_ind);
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[1] = (unsigned int  )0;
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[1] = (unsigned short )0;
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[1] = (unsigned short )0;
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[2] = (         void  *)&a->payment_gap_risk;
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[2] = (unsigned int  )sizeof(float);
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[2] = (         int  )sizeof(struct gap_t);
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[2] = (         void  *)&a_ind->payment_gap_risk_ind;
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[2] = (         int  )sizeof(struct gap_ind);
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[2] = (unsigned int  )0;
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[2] = (unsigned short )0;
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[2] = (unsigned short )0;
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 3208 "d:\\src\\customerprofiler\\db.pc"
  if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 3208 "d:\\src\\customerprofiler\\db.pc"
}

#line 3208 "d:\\src\\customerprofiler\\db.pc"
 		 

		rows_this_time = sqlca.sqlerrd[2] - rows_before; 
		rows_before = sqlca.sqlerrd[2]; 
//		printf(" this=%d before=%d \n", rows_this_time, rows_before);
		printf(" cx_payment_gap_risk=%d \n", rows_before);

		for(i=0; i<rows_this_time; i++)
		{

			//handling null fetches - all NN

			gk.init();

			gk.prob_from	= a[i].prob_from;		
			gk.prob_to		= a[i].prob_to;										
			
			gap_map.insert(GAP_DEF::value_type(gk, a[i].payment_gap_risk));
		}
	} 

	/* EXEC SQL AT customer_care CLOSE c_gap; */ 
#line 3229 "d:\\src\\customerprofiler\\db.pc"

{
#line 3229 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 3229 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 3229 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 44;
#line 3229 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 3229 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 3229 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 3229 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )2707;
#line 3229 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 3229 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 3229 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 3229 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 3229 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 3229 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 3229 "d:\\src\\customerprofiler\\db.pc"
}

#line 3229 "d:\\src\\customerprofiler\\db.pc"
 
	delete a;
	printf("%d  cx_payment_gap_risk data read.\n\n",rows_before);
}


void churn::db_read_cx_network_stay_points()
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 3237 "d:\\src\\customerprofiler\\db.pc"


	struct stay_t
	{ 
		int		stay_years_from;			// number(3) - NN
		int		stay_years_to;				// number(13) - NN
		float	points;						// number(5,2)	- NN
	} *a;

	struct stay_ind
	{ 
		short	stay_years_from_ind;							
		short	stay_years_to_ind;						
		short	points_ind;		
	}a_ind[FETCH_SIZE];

	int rows_to_fetch, rows_before, rows_this_time;

/* EXEC SQL END DECLARE SECTION; */ 
#line 3255 "d:\\src\\customerprofiler\\db.pc"


	int i;
 
	rows_to_fetch = FETCH_SIZE;		// number of rows in each "batch"  
	rows_before = 0;				// previous value of sqlerrd[2]   
	rows_this_time = FETCH_SIZE; 

	if((a = new stay_t[rows_to_fetch])==NULL)
	{
		cout<<" cant allocate memory for cx_network_stay_points fetch"<<endl;
		exit(0);
	}

 
	/* EXEC SQL 
	AT customer_care 
	DECLARE  c_stay CURSOR FOR 
	SELECT	STAY_YEARS_FROM, 
			STAY_YEARS_TO, 
			POINTS 
	FROM	CX_NETWORK_STAY_POINTS; */ 
#line 3276 "d:\\src\\customerprofiler\\db.pc"


 
	/* EXEC SQL AT customer_care  OPEN c_stay; */ 
#line 3279 "d:\\src\\customerprofiler\\db.pc"

{
#line 3279 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 3279 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 3279 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 44;
#line 3279 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 3279 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 3279 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.stmt = sq0039;
#line 3279 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 3279 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )2735;
#line 3279 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.selerr = (unsigned short)1;
#line 3279 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 3279 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 3279 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 3279 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 3279 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqcmod = (unsigned int )0;
#line 3279 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 3279 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 3279 "d:\\src\\customerprofiler\\db.pc"
}

#line 3279 "d:\\src\\customerprofiler\\db.pc"
 
	/* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 
#line 3280 "d:\\src\\customerprofiler\\db.pc"
 

	stay_key sk;
	
	while (rows_this_time == rows_to_fetch) 
	{ 
		/* EXEC SQL AT customer_care FOR :rows_to_fetch FETCH c_stay INTO :a INDICATOR :a_ind; */ 
#line 3286 "d:\\src\\customerprofiler\\db.pc"

{
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  struct sqlexd sqlstm;
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlvsn = 12;
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.arrsiz = 44;
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqladtp = &sqladt;
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqltdsp = &sqltds;
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.iters = (unsigned int  )rows_to_fetch;
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.offset = (unsigned int  )2763;
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.selerr = (unsigned short)1;
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.cud = sqlcud0;
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlety = (unsigned short)256;
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqfoff = (           int )0;
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqfmod = (unsigned int )2;
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[0] = (         void  *)&a->stay_years_from;
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[0] = (         int  )sizeof(struct stay_t);
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[0] = (         void  *)&a_ind->stay_years_from_ind;
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[0] = (         int  )sizeof(struct stay_ind);
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[0] = (unsigned int  )0;
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[1] = (         void  *)&a->stay_years_to;
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[1] = (         int  )sizeof(struct stay_t);
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[1] = (         void  *)&a_ind->stay_years_to_ind;
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[1] = (         int  )sizeof(struct stay_ind);
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[1] = (unsigned int  )0;
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[1] = (unsigned short )0;
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[1] = (unsigned short )0;
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[2] = (         void  *)&a->points;
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[2] = (unsigned int  )sizeof(float);
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[2] = (         int  )sizeof(struct stay_t);
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[2] = (         void  *)&a_ind->points_ind;
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[2] = (         int  )sizeof(struct stay_ind);
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[2] = (unsigned int  )0;
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[2] = (unsigned short )0;
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[2] = (unsigned short )0;
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 3286 "d:\\src\\customerprofiler\\db.pc"
  if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 3286 "d:\\src\\customerprofiler\\db.pc"
}

#line 3286 "d:\\src\\customerprofiler\\db.pc"
 		 

		rows_this_time = sqlca.sqlerrd[2] - rows_before; 
		rows_before = sqlca.sqlerrd[2]; 
//		printf(" this=%d before=%d \n", rows_this_time, rows_before);
		printf(" cx_network_stay_points=%d \n", rows_before);

		for(i=0; i<rows_this_time; i++)
		{

			//handling null fetches - all NN

			sk.init();

			sk.stay_years_from		= a[i].stay_years_from;		
			sk.stay_years_to		= a[i].stay_years_to;										
			
			stay_map.insert(STAY_DEF::value_type(sk, a[i].points));
		}
	} 

	/* EXEC SQL AT customer_care CLOSE c_stay; */ 
#line 3307 "d:\\src\\customerprofiler\\db.pc"

{
#line 3307 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 3307 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 3307 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 44;
#line 3307 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 3307 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 3307 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 3307 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )2803;
#line 3307 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 3307 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 3307 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 3307 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 3307 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 3307 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 3307 "d:\\src\\customerprofiler\\db.pc"
}

#line 3307 "d:\\src\\customerprofiler\\db.pc"
 
	delete a;
	printf("%d  cx_network_stay_points data read.\n\n",rows_before);
}


void churn::db_read_cx_credit_ratings()
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 3315 "d:\\src\\customerprofiler\\db.pc"


	struct rating_t
	{ 
		float	prob_from;			// number(3,2)	- NN
		float	prob_to;			// number(13,2) - NN 
		int		credit_rating_id;	// number(5)	- NN
	} *a;

	struct rating_ind
	{ 
		short	prob_from_ind;							
		short	prob_to_ind;						
		short	credit_rating_id_ind;		
	}a_ind[FETCH_SIZE];

	int rows_to_fetch, rows_before, rows_this_time;

/* EXEC SQL END DECLARE SECTION; */ 
#line 3333 "d:\\src\\customerprofiler\\db.pc"


	int i;
 
	rows_to_fetch = FETCH_SIZE;		// number of rows in each "batch"  
	rows_before = 0;				// previous value of sqlerrd[2]   
	rows_this_time = FETCH_SIZE; 

	if((a = new rating_t[rows_to_fetch])==NULL)
	{
		cout<<" cant allocate memory for cx_credit_ratings fetch"<<endl;
		exit(0);
	}

 
	/* EXEC SQL 
	AT customer_care 
	DECLARE  c_rating CURSOR FOR 
	SELECT	PROB_FROM, 
			PROB_TO, 
			CREDIT_RATING_ID 
	FROM	CX_CREDIT_RATINGS; */ 
#line 3354 "d:\\src\\customerprofiler\\db.pc"


 
	/* EXEC SQL AT customer_care  OPEN c_rating; */ 
#line 3357 "d:\\src\\customerprofiler\\db.pc"

{
#line 3357 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 3357 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 3357 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 44;
#line 3357 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 3357 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 3357 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.stmt = sq0040;
#line 3357 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 3357 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )2831;
#line 3357 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.selerr = (unsigned short)1;
#line 3357 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 3357 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 3357 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 3357 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 3357 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqcmod = (unsigned int )0;
#line 3357 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 3357 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 3357 "d:\\src\\customerprofiler\\db.pc"
}

#line 3357 "d:\\src\\customerprofiler\\db.pc"
 
	/* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 
#line 3358 "d:\\src\\customerprofiler\\db.pc"
 

	rating_key rk;
	
	while (rows_this_time == rows_to_fetch) 
	{ 
		/* EXEC SQL AT customer_care FOR :rows_to_fetch FETCH c_rating INTO :a INDICATOR :a_ind; */ 
#line 3364 "d:\\src\\customerprofiler\\db.pc"

{
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  struct sqlexd sqlstm;
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlvsn = 12;
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.arrsiz = 44;
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqladtp = &sqladt;
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqltdsp = &sqltds;
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.iters = (unsigned int  )rows_to_fetch;
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.offset = (unsigned int  )2859;
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.selerr = (unsigned short)1;
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.cud = sqlcud0;
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlety = (unsigned short)256;
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqfoff = (           int )0;
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqfmod = (unsigned int )2;
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[0] = (         void  *)&a->prob_from;
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(float);
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[0] = (         int  )sizeof(struct rating_t);
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[0] = (         void  *)&a_ind->prob_from_ind;
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[0] = (         int  )sizeof(struct rating_ind);
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[0] = (unsigned int  )0;
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[1] = (         void  *)&a->prob_to;
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(float);
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[1] = (         int  )sizeof(struct rating_t);
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[1] = (         void  *)&a_ind->prob_to_ind;
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[1] = (         int  )sizeof(struct rating_ind);
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[1] = (unsigned int  )0;
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[1] = (unsigned short )0;
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[1] = (unsigned short )0;
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[2] = (         void  *)&a->credit_rating_id;
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[2] = (         int  )sizeof(struct rating_t);
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[2] = (         void  *)&a_ind->credit_rating_id_ind;
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[2] = (         int  )sizeof(struct rating_ind);
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[2] = (unsigned int  )0;
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[2] = (unsigned short )0;
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[2] = (unsigned short )0;
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 3364 "d:\\src\\customerprofiler\\db.pc"
  if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 3364 "d:\\src\\customerprofiler\\db.pc"
}

#line 3364 "d:\\src\\customerprofiler\\db.pc"
 		 

		rows_this_time = sqlca.sqlerrd[2] - rows_before; 
		rows_before = sqlca.sqlerrd[2]; 
//		printf(" this=%d before=%d \n", rows_this_time, rows_before);
		printf(" cx_credit_ratings=%d \n", rows_before);

		for(i=0; i<rows_this_time; i++)
		{

			//handling null fetches - all NN

			rk.init();

			rk.prob_from	= a[i].prob_from;		
			rk.prob_to		= a[i].prob_to;										
			
			rating_map.insert(RATING_DEF::value_type(rk, a[i].credit_rating_id));
		}
	} 

	/* EXEC SQL AT customer_care CLOSE c_rating; */ 
#line 3385 "d:\\src\\customerprofiler\\db.pc"

{
#line 3385 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 3385 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 3385 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 44;
#line 3385 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 3385 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 3385 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 3385 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )2899;
#line 3385 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 3385 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 3385 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 3385 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 3385 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 3385 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 3385 "d:\\src\\customerprofiler\\db.pc"
}

#line 3385 "d:\\src\\customerprofiler\\db.pc"
 
	delete a;
	printf("%d  cx_credit_ratings data read.\n\n",rows_before);
}

/* backup 01-09-2010
void churn::db_read_fb_contract_balances_new()
{
	EXEC SQL BEGIN DECLARE SECTION;

	struct bill_transactions_t
	{
		int		tran_no;					// number(16)
		int		contract_id;				// number(10)
		float	tran_amount;				// number(14,2)
		float	contract_balance;			// number(14,2)
		char	tran_date[BUF_LEN];			// date
		char	tran_type[BUF_LEN];			// varchar2(10)
		char	tran_reference[BUF_LEN];	// varchar2(20)
	} *a;

	struct bill_transactions_ind
	{ 
		short	tran_no_ind;
  		short	contract_id_ind;				
		short	tran_amount_ind;
		short	contract_balance_ind;
		short	tran_date_ind;
		short	tran_type_ind;
		short	tran_reference_ind;
	}a_ind[FETCH_SIZE];

	int rows_to_fetch, rows_before, rows_this_time;
	
	EXEC SQL END DECLARE SECTION;

	int i;
	rows_to_fetch = FETCH_SIZE;		// number of rows in each "batch"  
	rows_before = 0;				   // previous value of sqlerrd[2]   
	rows_this_time = FETCH_SIZE; 

	if((a = new bill_transactions_t[rows_to_fetch])==NULL)
	{
		cout<<" cant allocate memeory for fb_contract_balances fetch"<<endl;
		exit(0);
	}

 
	EXEC SQL 
	AT customer_care 
	DECLARE  c_fb_contract_balances_n CURSOR FOR 
	SELECT	TRAN_NO,	
			CONTRACT_ID,
			TRAN_AMOUNT,
			CONTRACT_BALANCE,
			TRAN_DATE,
			TRAN_TYPE,
			TRAN_REFERENCE
	FROM	FB_CONTRACT_BALANCES;

	EXEC SQL AT customer_care  OPEN c_fb_contract_balances_n; 
	EXEC SQL WHENEVER NOT FOUND CONTINUE; 

	fb_contract_balances		fcb;
	fb_contract_balances_new	fcbn;
	
	bill_key			bk;

	FB_CONTRACT_BALANCES_DEF::iterator i_fcb;
	
	while (rows_this_time == rows_to_fetch) 
	{ 
		EXEC SQL AT customer_care FOR :rows_to_fetch FETCH c_fb_contract_balances_n INTO :a INDICATOR :a_ind; 		 

		rows_this_time = sqlca.sqlerrd[2] - rows_before; 
		rows_before = sqlca.sqlerrd[2]; 
//		printf(" this=%d before=%d \n", rows_this_time, rows_before);
		printf(" fb_contract_balances =%d \n", rows_before);

		for(i=0; i<rows_this_time; i++)
		{

			//handling null fetches
			strcpy(a[i].tran_type,
				  ((a_ind[i].tran_type_ind < 0) ? "UNDEF":a[i].tran_type));
			strcpy(a[i].tran_reference,
				  ((a_ind[i].tran_reference_ind < 0) ? "UNDEF":a[i].tran_reference));

			fcb.init();
			fcbn.init();

			fcb.tran_amount		= a[i].tran_amount;	
			fcbn.tran_amount	= a[i].tran_amount;	
			
			fcb.tran_no			= a[i].tran_no;
			fcbn.tran_no		= a[i].tran_no;

			a[i].tran_date[14]	= '\0';
			fcb.tran_date_rdt.set_date_time(a[i].tran_date); 
			fcbn.tran_date_rdt.set_date_time(a[i].tran_date); 

			if ( strncmp(a[i].tran_type, "BILL", 4) == 0 )
			{
				TRANSACTION_MASTER_DEF::iterator i_tm = bill_period_transaction_master_map.find(a[i].tran_reference);

				if (i_tm == bill_period_transaction_master_map.end() )
				{
					//cout << "ERROR :No Bill No in bill_period_transaction_master for " << endl;
					//cout << "Node Id = " << a[i].contract_id << endl;
					//cout << "Tran Reference = " << a[i].tran_reference << endl;

					//thushara --> fprintf(log_to_file,"ERROR : Bill No in bill_period_transaction_master for Node Id %d, Tran Reference %d|\n",a[i].contract_id, a[i].tran_reference);
				}
				else
				{
					fcb.start_date_rdt	= (*i_tm).second->start_date_rdt;
					fcb.end_date_rdt	= (*i_tm).second->end_date_rdt;
					fcb.due_date_rdt	= (*i_tm).second->due_date_rdt;

					strcpy(fcb.bill_no, a[i].tran_reference);

					bk.init();
					bk.node_id		= a[i].contract_id;	
					bk.end_date_rdt	= (*i_tm).second->end_date_rdt;

					
					bill_map.insert(BILL_DEF::value_type(bk, fcb));
				}
			}
			else if ( strncmp(a[i].tran_type, "PAY", 3) == 0 )
			{
				fb_contract_balances_pay_map.insert(FB_CONTRACT_BALANCES_DEF::value_type(a[i].contract_id, fcbn));
			}

			fb_contract_balances_map.insert(FB_CONTRACT_BALANCES_DEF::value_type(a[i].contract_id, fcbn));
		}
	}
	
	EXEC SQL AT customer_care CLOSE c_fb_contract_balances_n; 
	delete a;
	printf("%d  fb_contract_balances data read.\n\n",rows_before);
}
*/


void churn::db_read_fb_contract_balances_new()
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 3532 "d:\\src\\customerprofiler\\db.pc"


	struct bill_transactions_t
	{
		int		tran_no;					// number(16)
		int		contract_id;				// number(10)
		float	tran_amount;				// number(14,2)
		float	contract_balance;			// number(14,2)
		char	tran_date[BUF_LEN];			// date
		char	tran_type[BUF_LEN];			// varchar2(10)
		char	tran_reference[BUF_LEN];	// varchar2(20)
	} *a;

	struct bill_transactions_ind
	{ 
		short	tran_no_ind;
  		short	contract_id_ind;				
		short	tran_amount_ind;
		short	contract_balance_ind;
		short	tran_date_ind;
		short	tran_type_ind;
		short	tran_reference_ind;
	}a_ind[FETCH_SIZE];

	int rows_to_fetch, rows_before, rows_this_time;
	
	/* EXEC SQL END DECLARE SECTION; */ 
#line 3558 "d:\\src\\customerprofiler\\db.pc"


	int i;
	rows_to_fetch = FETCH_SIZE;		// number of rows in each "batch"  
	rows_before = 0;				   // previous value of sqlerrd[2]   
	rows_this_time = FETCH_SIZE; 

	if((a = new bill_transactions_t[rows_to_fetch])==NULL)
	{
		cout<<" cant allocate memeory for fb_contract_balances fetch"<<endl;
		exit(0);
	}

 
	/* EXEC SQL 
	AT customer_care 
	DECLARE  c_fb_contract_balances_n CURSOR FOR 
	SELECT	TRAN_NO,	
			CONTRACT_ID,
			TRAN_AMOUNT,
			CONTRACT_BALANCE,
			TRAN_DATE,
			TRAN_TYPE,
			TRAN_REFERENCE
	FROM	FB_CONTRACT_BALANCES; */ 
#line 3582 "d:\\src\\customerprofiler\\db.pc"


	/* EXEC SQL AT customer_care  OPEN c_fb_contract_balances_n; */ 
#line 3584 "d:\\src\\customerprofiler\\db.pc"

{
#line 3584 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 3584 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 3584 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 44;
#line 3584 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 3584 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 3584 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.stmt = sq0041;
#line 3584 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 3584 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )2927;
#line 3584 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.selerr = (unsigned short)1;
#line 3584 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 3584 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 3584 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 3584 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 3584 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqcmod = (unsigned int )0;
#line 3584 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 3584 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 3584 "d:\\src\\customerprofiler\\db.pc"
}

#line 3584 "d:\\src\\customerprofiler\\db.pc"
 
	/* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 
#line 3585 "d:\\src\\customerprofiler\\db.pc"
 

	fb_contract_balances		fcb;
	fb_contract_balances_new	fcbn;
	
	bill_key			bk;

	FB_CONTRACT_BALANCES_DEF::iterator i_fcb;
	
	while (rows_this_time == rows_to_fetch) 
	{ 
		/* EXEC SQL AT customer_care FOR :rows_to_fetch FETCH c_fb_contract_balances_n INTO :a INDICATOR :a_ind; */ 
#line 3596 "d:\\src\\customerprofiler\\db.pc"

{
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  struct sqlexd sqlstm;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlvsn = 12;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.arrsiz = 44;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqladtp = &sqladt;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqltdsp = &sqltds;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.iters = (unsigned int  )rows_to_fetch;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.offset = (unsigned int  )2955;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.selerr = (unsigned short)1;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.cud = sqlcud0;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlety = (unsigned short)256;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqfoff = (           int )0;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqfmod = (unsigned int )2;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[0] = (         void  *)&a->tran_no;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[0] = (         int  )sizeof(struct bill_transactions_t);
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[0] = (         void  *)&a_ind->tran_no_ind;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[0] = (         int  )sizeof(struct bill_transactions_ind);
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[0] = (unsigned int  )0;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[1] = (         void  *)&a->contract_id;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[1] = (         int  )sizeof(struct bill_transactions_t);
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[1] = (         void  *)&a_ind->contract_id_ind;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[1] = (         int  )sizeof(struct bill_transactions_ind);
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[1] = (unsigned int  )0;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[1] = (unsigned short )0;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[1] = (unsigned short )0;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[2] = (         void  *)&a->tran_amount;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[2] = (unsigned int  )sizeof(float);
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[2] = (         int  )sizeof(struct bill_transactions_t);
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[2] = (         void  *)&a_ind->tran_amount_ind;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[2] = (         int  )sizeof(struct bill_transactions_ind);
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[2] = (unsigned int  )0;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[2] = (unsigned short )0;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[2] = (unsigned short )0;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[3] = (         void  *)&a->contract_balance;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[3] = (unsigned int  )sizeof(float);
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[3] = (         int  )sizeof(struct bill_transactions_t);
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[3] = (         void  *)&a_ind->contract_balance_ind;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[3] = (         int  )sizeof(struct bill_transactions_ind);
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[3] = (unsigned int  )0;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[3] = (unsigned short )0;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[3] = (unsigned short )0;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[4] = (         void  *)a->tran_date;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[4] = (unsigned int  )100;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[4] = (         int  )sizeof(struct bill_transactions_t);
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[4] = (         void  *)&a_ind->tran_date_ind;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[4] = (         int  )sizeof(struct bill_transactions_ind);
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[4] = (unsigned int  )0;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[4] = (unsigned short )0;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[4] = (unsigned short )0;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[5] = (         void  *)a->tran_type;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[5] = (unsigned int  )100;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[5] = (         int  )sizeof(struct bill_transactions_t);
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[5] = (         void  *)&a_ind->tran_type_ind;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[5] = (         int  )sizeof(struct bill_transactions_ind);
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[5] = (unsigned int  )0;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[5] = (unsigned short )0;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[5] = (unsigned short )0;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[6] = (         void  *)a->tran_reference;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[6] = (unsigned int  )100;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[6] = (         int  )sizeof(struct bill_transactions_t);
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[6] = (         void  *)&a_ind->tran_reference_ind;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[6] = (         int  )sizeof(struct bill_transactions_ind);
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[6] = (unsigned int  )0;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[6] = (unsigned short )0;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[6] = (unsigned short )0;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 3596 "d:\\src\\customerprofiler\\db.pc"
  if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 3596 "d:\\src\\customerprofiler\\db.pc"
}

#line 3596 "d:\\src\\customerprofiler\\db.pc"
 		 

		rows_this_time = sqlca.sqlerrd[2] - rows_before; 
		rows_before = sqlca.sqlerrd[2]; 
//		printf(" this=%d before=%d \n", rows_this_time, rows_before);
		printf(" fb_contract_balances =%d \n", rows_before);

		for(i=0; i<rows_this_time; i++)
		{

			//handling null fetches
			strcpy(a[i].tran_type,
				  ((a_ind[i].tran_type_ind < 0) ? "UNDEF":a[i].tran_type));
			strcpy(a[i].tran_reference,
				  ((a_ind[i].tran_reference_ind < 0) ? "UNDEF":a[i].tran_reference));

			fcb.init();
			fcbn.init();

			fcb.tran_amount		= a[i].tran_amount;	
			fcbn.tran_amount	= a[i].tran_amount;	
			
			fcb.tran_no			= a[i].tran_no;
			fcbn.tran_no		= a[i].tran_no;

			a[i].tran_date[14]	= '\0';
			fcb.tran_date_rdt.set_date_time(a[i].tran_date); 
			fcbn.tran_date_rdt.set_date_time(a[i].tran_date); 

			if ( strncmp(a[i].tran_type, "BILL", 4) == 0 )
			{
				TRANSACTION_MASTER_DEF::iterator i_tm = bill_period_transaction_master_map.find(a[i].tran_reference);

				if (i_tm == bill_period_transaction_master_map.end() )
				{
					//cout << "ERROR :No Bill No in bill_period_transaction_master for " << endl;
					//cout << "Node Id = " << a[i].contract_id << endl;
					//cout << "Tran Reference = " << a[i].tran_reference << endl;

					//thushara --> fprintf(log_to_file,"ERROR : Bill No in bill_period_transaction_master for Node Id %d, Tran Reference %d|\n",a[i].contract_id, a[i].tran_reference);
				}
				else
				{
					fcb.start_date_rdt	= (*i_tm).second->start_date_rdt;
					fcb.end_date_rdt	= (*i_tm).second->end_date_rdt;
					fcb.due_date_rdt	= (*i_tm).second->due_date_rdt;

					strcpy(fcb.bill_no, a[i].tran_reference);

					bk.init();
					bk.node_id		= a[i].contract_id;	
					bk.end_date_rdt	= (*i_tm).second->end_date_rdt;

					
					bill_map.insert(BILL_DEF::value_type(bk, fcb));
				}
			}
			else //if ( strncmp(a[i].tran_type, "PAY", 3) == 0 )
			{
				fb_contract_balances_pay_map.insert(FB_CONTRACT_BALANCES_DEF::value_type(a[i].contract_id, fcbn));
			}

			fb_contract_balances_map.insert(FB_CONTRACT_BALANCES_DEF::value_type(a[i].contract_id, fcbn));
		}
	}
	
	/* EXEC SQL AT customer_care CLOSE c_fb_contract_balances_n; */ 
#line 3662 "d:\\src\\customerprofiler\\db.pc"

{
#line 3662 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 3662 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 3662 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 44;
#line 3662 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 3662 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 3662 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 3662 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )3011;
#line 3662 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 3662 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 3662 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 3662 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 3662 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 3662 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 3662 "d:\\src\\customerprofiler\\db.pc"
}

#line 3662 "d:\\src\\customerprofiler\\db.pc"
 
	delete a;
	printf("%d  fb_contract_balances data read.\n\n",rows_before);
}


void churn::db_insert_churn_data_summary()
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 3670 "d:\\src\\customerprofiler\\db.pc"

	
	static struct db_churn
	{
		int		account_no;				// number	- NN	
		int		cx_type_id;				// number
		float	score;					// number(14,4)
	} *a; 
	
	int rows_to_insert;
	
	/* EXEC SQL END DECLARE SECTION; */ 
#line 3681 "d:\\src\\customerprofiler\\db.pc"

	
	rows_to_insert = bulk_insert_size;
	
	if((a = new db_churn[bulk_insert_size])==NULL)
	{
		cout<<" cant allocate memory for churn data insert"<<endl;
		exit(0);
	}

	for(int j=0; j<insert_iterations; j++)
	{

		for(int n=0; n<rows_to_insert; n++)
		{
			a[n].account_no		= 0;
			a[n].cx_type_id		= 0;
			a[n].score			= 0.0;
		}
	
		
		for(int i=0; i<rows_to_insert; i++, i_db_insert++)
		{
			

			a[i].account_no		= (*i_db_insert).second.account_no;
			a[i].cx_type_id		= (*i_db_insert).second.cx_type_id;
			a[i].score			= (*i_db_insert).second.average_score;
		} 

		/* EXEC SQL  AT customer_care  FOR :rows_to_insert  INSERT INTO CX_PROFILED_CUSTOMERS (
			account_no,
			cx_type_id,
			score
		) VALUES (:a); */ 
#line 3715 "d:\\src\\customerprofiler\\db.pc"

{
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  struct sqlexd sqlstm;
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlvsn = 12;
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.arrsiz = 44;
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqladtp = &sqladt;
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqltdsp = &sqltds;
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.stmt = "insert into CX_PROFILED_CUSTOMERS (account_no,cx_type_id,sc\
ore) values (:s1 ,:s2 ,:s3 )";
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.iters = (unsigned int  )rows_to_insert;
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.offset = (unsigned int  )3039;
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.cud = sqlcud0;
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlety = (unsigned short)256;
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[0] = (         void  *)&a->account_no;
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[0] = (         int  )sizeof(struct db_churn);
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[0] = (         void  *)0;
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[0] = (         int  )0;
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[0] = (unsigned int  )0;
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[1] = (         void  *)&a->cx_type_id;
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[1] = (         int  )sizeof(struct db_churn);
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[1] = (         void  *)0;
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[1] = (         int  )0;
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[1] = (unsigned int  )0;
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[1] = (unsigned short )0;
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[1] = (unsigned short )0;
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstv[2] = (         void  *)&a->score;
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhstl[2] = (unsigned int  )sizeof(float);
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqhsts[2] = (         int  )sizeof(struct db_churn);
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqindv[2] = (         void  *)0;
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqinds[2] = (         int  )0;
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqharm[2] = (unsigned int  )0;
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqadto[2] = (unsigned short )0;
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqtdso[2] = (unsigned short )0;
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 3711 "d:\\src\\customerprofiler\\db.pc"
  if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 3711 "d:\\src\\customerprofiler\\db.pc"
}

#line 3715 "d:\\src\\customerprofiler\\db.pc"

	
		/* EXEC SQL AT customer_care  COMMIT; */ 
#line 3717 "d:\\src\\customerprofiler\\db.pc"

{
#line 3717 "d:\\src\\customerprofiler\\db.pc"
  struct sqlexd sqlstm;
#line 3717 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlvsn = 12;
#line 3717 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.arrsiz = 44;
#line 3717 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqladtp = &sqladt;
#line 3717 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqltdsp = &sqltds;
#line 3717 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.iters = (unsigned int  )1;
#line 3717 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.offset = (unsigned int  )3079;
#line 3717 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.cud = sqlcud0;
#line 3717 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 3717 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.sqlety = (unsigned short)256;
#line 3717 "d:\\src\\customerprofiler\\db.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 3717 "d:\\src\\customerprofiler\\db.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 3717 "d:\\src\\customerprofiler\\db.pc"
  if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 3717 "d:\\src\\customerprofiler\\db.pc"
}

#line 3717 "d:\\src\\customerprofiler\\db.pc"

	}
	
	delete a;
}


void churn::db_insert_churn_data_remainder_summary()
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 3726 "d:\\src\\customerprofiler\\db.pc"

	
	static struct db_churn
	{
		int		account_no;				// number	- NN	
		int		cx_type_id;				// number
		float	score;					// number(14,4)
	} *a;  
	
	int rows_to_insert;
	
	/* EXEC SQL END DECLARE SECTION; */ 
#line 3737 "d:\\src\\customerprofiler\\db.pc"

	rows_to_insert = remainder_insert_size;
	
	if((a = new db_churn[remainder_insert_size])==NULL)
	{
		cout<<" cant allocate memory for churn data insert"<<endl;
		exit(0);
	}

	for(int n=0; n<rows_to_insert; n++)
	{
		a[n].account_no		= 0;
		a[n].cx_type_id		= 0;
		a[n].score			= 0.0;
	}


	for(int i=0; i<rows_to_insert; i++, i_db_insert++)
	{
		a[i].account_no		= (*i_db_insert).second.account_no;
		a[i].cx_type_id		= (*i_db_insert).second.cx_type_id;
		a[i].score			= (*i_db_insert).second.average_score;
		
	} 


	/* EXEC SQL  AT customer_care  FOR :rows_to_insert  INSERT INTO CX_PROFILED_CUSTOMERS (
			account_no,
			cx_type_id,
			score
	) VALUES (:a); */ 
#line 3767 "d:\\src\\customerprofiler\\db.pc"

{
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 44;
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.stmt = "insert into CX_PROFILED_CUSTOMERS (account_no,cx_type_id,sco\
re) values (:s1 ,:s2 ,:s3 )";
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )rows_to_insert;
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )3107;
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[0] = (         void  *)&a->account_no;
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[0] = (         int  )sizeof(struct db_churn);
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[0] = (         void  *)0;
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[0] = (         int  )0;
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[0] = (unsigned int  )0;
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[0] = (unsigned short )0;
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[0] = (unsigned short )0;
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[1] = (         void  *)&a->cx_type_id;
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[1] = (         int  )sizeof(struct db_churn);
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[1] = (         void  *)0;
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[1] = (         int  )0;
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[1] = (unsigned int  )0;
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[1] = (unsigned short )0;
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[1] = (unsigned short )0;
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstv[2] = (         void  *)&a->score;
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhstl[2] = (unsigned int  )sizeof(float);
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqhsts[2] = (         int  )sizeof(struct db_churn);
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqindv[2] = (         void  *)0;
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqinds[2] = (         int  )0;
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqharm[2] = (unsigned int  )0;
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqadto[2] = (unsigned short )0;
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqtdso[2] = (unsigned short )0;
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqphsv = sqlstm.sqhstv;
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqphsl = sqlstm.sqhstl;
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqphss = sqlstm.sqhsts;
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqpind = sqlstm.sqindv;
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqpins = sqlstm.sqinds;
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqparm = sqlstm.sqharm;
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqparc = sqlstm.sqharc;
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqpadto = sqlstm.sqadto;
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqptdso = sqlstm.sqtdso;
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 3763 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 3763 "d:\\src\\customerprofiler\\db.pc"
}

#line 3767 "d:\\src\\customerprofiler\\db.pc"


	/* EXEC SQL AT customer_care  COMMIT; */ 
#line 3769 "d:\\src\\customerprofiler\\db.pc"

{
#line 3769 "d:\\src\\customerprofiler\\db.pc"
 struct sqlexd sqlstm;
#line 3769 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlvsn = 12;
#line 3769 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.arrsiz = 44;
#line 3769 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 3769 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 3769 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 3769 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.offset = (unsigned int  )3147;
#line 3769 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.cud = sqlcud0;
#line 3769 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 3769 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 3769 "d:\\src\\customerprofiler\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 3769 "d:\\src\\customerprofiler\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 3769 "d:\\src\\customerprofiler\\db.pc"
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
#line 3769 "d:\\src\\customerprofiler\\db.pc"
}

#line 3769 "d:\\src\\customerprofiler\\db.pc"

	delete a;
}


/*
void churn::db_insert_cx_profiled_data(int data_count)
{
	EXEC SQL BEGIN DECLARE SECTION;

	static struct db_data
	{
		int         account_no;
		int         cx_type_id;
		float       average_score;
		float       total_score;
		int         no_of_bills;
		float       tot_pay;
		float       delay;
		float       delay_risk;
		float       gap;
		float       gap_ratio;
		float       gap_risk;
		float       network_stay_days;
		float       network_stay;
		float       network_stay_points;
		float       tot_credit_risk;
	} * a;

	int rows_to_insert;
	EXEC SQL END DECLARE SECTION;

	rows_to_insert = data_count;
	if((a = new db_data[5000])==NULL)
	{
		cout<<" cant allocate memory for cx_profiled_data insert"<<endl;
		exit(0);
	}

	for(int i=0; i<5000; i++)
	{
		a[i].account_no = profiled_data_block[i].account_no;
		a[i].cx_type_id                  = profiled_data_block[i].cx_type_id;
		a[i].average_score               = profiled_data_block[i].average_score;
		a[i].total_score                 = profiled_data_block[i].total_score;
		a[i].no_of_bills                 = profiled_data_block[i].no_of_bills;
		a[i].tot_pay                     = profiled_data_block[i].tot_pay;
		a[i].delay                       = profiled_data_block[i].delay;
        a[i].delay_risk                  = profiled_data_block[i].gap;
        a[i].gap                         = profiled_data_block[i].gap_ratio;
		a[i].gap_ratio                   = profiled_data_block[i].gap_ratio;
		a[i].gap_risk                    = profiled_data_block[i].gap_risk;
		a[i].network_stay_days           = profiled_data_block[i].network_stay_days;
		a[i].network_stay                = profiled_data_block[i].network_stay;
		a[i].network_stay_points         = profiled_data_block[i].network_stay_points;
		a[i].tot_credit_risk             = profiled_data_block[i].tot_credit_risk;
	}

	EXEC SQL  AT customer_care FOR :rows_to_insert INSERT INTO CX_PROFILED_DATA
        (
			account_no,
			cx_type_id,
			average_score,
			total_score,
			no_of_bills,
			tot_pay,
			delay,
			delay_risk,
			gap,
			gap_ratio,
			gap_risk,
			network_stay_days,
			network_stay,
			network_stay_points,
			tot_credit_risk
	) 
	VALUES (:a);

	EXEC SQL AT customer_care COMMIT;
	delete a;
}
*/


/*

CREATE TABLE FB_CONTRACT_BALANCES ( 
  TRAN_NO           NUMBER (16)   NOT NULL, 
  CONTRACT_ID       NUMBER (10)   NOT NULL, 
  CONTRACT_BALANCE  NUMBER (14,2) NOT NULL, 
  TRAN_DATE         DATE          NOT NULL, 
  TRAN_TYPE         VARCHAR2 (10), 
  TRAN_REFNO        NUMBER (16), 
  TRAN_REFERENCE    VARCHAR2 (20), 
  TRAN_AMOUNT       NUMBER (14,2) NOT NULL, 
  ENTERED_BY        VARCHAR2 (30), 
  ENTERED_DATE      DATE, 
  DESCRIPTION       VARCHAR2 (75))


CREATE TABLE BILL_PERIOD_TRANSACTION_MASTER ( 
  NODE_ID              NUMBER (10)   NOT NULL, 
  NODE_TYPE            VARCHAR2 (1)  NOT NULL, 
  BILL_NUMBER          VARCHAR2 (20)  NOT NULL, 
  START_DATE           DATE, 
  END_DATE             DATE, 
  CLOSED_DATE          DATE, 
  BROUGHT_FWD          NUMBER (14,2), 
  BILL_AMOUNT          NUMBER (14,2), 
  PERIOD_PAYMENTS      NUMBER (14,2), 
  CARRIED_FWD          NUMBER (14,2), 
  DUE_DATE             DATE, 
  PERIOD_OVERPAYMENTS  NUMBER (14,2), 

CREATE TABLE CAM_CONTRACT_PACKAGE ( 
  CONTRACT_PACKAGE_ID          NUMBER (10)   NOT NULL, 
  CONTRACT_ID                  NUMBER (10), 
  PACKAGE_ID                   VARCHAR2 (15), 
  STATUS                       VARCHAR2 (2)  DEFAULT 'NC' NOT NULL, 
  PENDING_STATUS               VARCHAR2 (2)  DEFAULT 'C', 
  IS_SUPPLEMENTARY             VARCHAR2 (1)  DEFAULT 'F', 
  IS_ORIGINAL_ASSIGNMENT       VARCHAR2 (1)  DEFAULT 'T', 
  AGENT_CODE                   VARCHAR2 (5)  NOT NULL, 
  BRANCH_CODE                  VARCHAR2 (5)  NOT NULL, 
  PHONE_MODEL                  VARCHAR2 (20), 
  PURCHASE_TYPE                VARCHAR2 (5), 
  AUTO_DISCONNECT_DATE         DATE, 
  ORIGINAL_PACKAGE_START_DATE  DATE          DEFAULT SYSDATE, 
  START_DATE                   DATE          DEFAULT sysdate NOT NULL, 
  END_DATE                     DATE, 
  CREATED_USER                 VARCHAR2 (30)  DEFAULT USER, 
  UPDATED_USER                 VARCHAR2 (30), 
  RENTAL_ACTIVATION_DATE       DATE, 
  APP_VERIFIED_USER            VARCHAR2 (20), 
  RENTAL_PAYEE                 NUMBER (10), 
  LAST_PACKAGE_CHANGE_DATE     DATE, 
  APPLICATION_RECEIVED         VARCHAR2 (1), 
  DEALER_REG_TYPE              VARCHAR2 (15), 
  IS_VERIFIED                  VARCHAR2 (1), 
  VERIFIED_DATE                DATE, 
  BILL_RUN_CODE                VARCHAR2 (10)  NOT NULL, 
  PART_KEY                     VARCHAR2 (10)  NOT NULL, 
  BP_SALES_CODE                VARCHAR2 (10), 

  */

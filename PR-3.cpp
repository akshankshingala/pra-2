/*





                                                 -: BANK MANAGMENT SYSTEM  :-
                                                 -----------------------------
                                                 -: Designed N Programed By :-
                                                 -----------------------------
                                                        AKSHANK SHINGALA

                                                 *****************************

                                                         -: Trainer :-
                                                 -----------------------------
                                                       Gaurav Kanani


                                                Press any key & enter to continue...1






                                         ----------------------------------------------------
                                         -: Press A for login as administator S for staff :-
                                         ----------------------------------------------------


a



----------------------------------------------------------------------------------------------------------------------
                                                 -: Wellcome As administator :-
----------------------------------------------------------------------------------------------------------------------



                                   Enter The Name OF administator                    : akshank
                                   Enter The Account NUmber Of administator          : 2022023
                                   Enter The Phone NUmber Of administator            : 3698523
                                   Enter The E-mail Of administator                  : shingalaakshank98@gmail.com




----------------------------------------------------------------------------------------------------------------------
   Name           :- akshank
   Account NUmber :- 2022023
   Phone NUmber   :- 3698523
   E-mail         :- shingalaakshank98@gmail.com
----------------------------------------------------------------------------------------------------------------------


                                        -: Press [1] to Deposite the money :-

                                        -: Press [2] to Transfer the money :-

                                        -: Press [3] to Withdraw the money :-

2

----------------------------------------------------------------------------------------------------------------------
   Enter Amaout Which You Wanna Transfer : 50000
   Enter Another Account NUmber (Where You Wanna Transfer MOney ) : 2002210
----------------------------------------------------------------------------------------------------------------------



                        Your Actual Amount Is : 200000

                        Congrates Your Amount Has Transfer Successfully.

                        Your Account Balance Is : 150000




*/
#include <iostream>

using namespace std;



int main (){

	cout << endl << endl << endl << endl << endl << "\t\t\t\t\t\t -: BANK MANAGMENT SYSTEM  :- " ;
	cout << endl  << "\t\t\t\t\t\t -----------------------------" ;
	cout << endl << "\t\t\t\t\t\t -: Designed N Programed By :- "  ;
	cout << endl << "\t\t\t\t\t\t -----------------------------" ;
	cout << endl << "\t\t\t\t\t\t        AKSHANK SHINGALA  "  << endl ;
	cout << endl << "\t\t\t\t\t\t *****************************" << endl ;
	cout << endl << "\t\t\t\t\t\t\t -: Trainer :- " ;
	cout << endl << "\t\t\t\t\t\t -----------------------------" ;
	cout << endl << "\t\t\t\t\t\t       Gaurav Kanani     " << endl << endl << endl ;
	
		string start;
	
	cout << "\t\t\t\t\t\tPess any key & enter to continue...";
	cin >> start;

	char log_in;
	cout << endl << endl << endl << endl << endl << endl  << "\t\t\t\t\t ---------------------------------------------------- " ;
	cout << endl << "\t\t\t\t\t -: Press A for login as administator S for staff :- "  ;
	cout <<  endl << "\t\t\t\t\t ---------------------------------------------------- " << endl << endl << endl ;
	cin  >> log_in;
	string name,e_mail,phone;
	int acco;
	int choice;

	if(log_in=='a' || log_in=='A'){

	cout << endl << endl << endl <<  "----------------------------------------------------------------------------------------------------------------------";
	cout << endl << "\t\t\t\t\t\t -: Wellcome As administator :- ";
	cout <<  endl <<  "----------------------------------------------------------------------------------------------------------------------"<<endl<<endl<<endl<<endl;\
	cout << "\t\t\t\t   Enter The Name OF administator\t\t     : ";
	cin >> name;
	cout << "\t\t\t\t   Enter The Account NUmber Of administator          : ";
	cin >> acco;
	cout << "\t\t\t\t   Enter The Phone NUmber Of administator\t     : ";
	cin >> phone;
	cout << "\t\t\t\t   Enter The E-mail Of administator\t             : ";
	cin >> e_mail;
	cout << endl << endl << endl;

	cout << endl  <<  "----------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "   Name           :- "<< name << endl;
	cout << "   Account NUmber :- " << acco << endl;
	cout << "   Phone NUmber   :- " << phone << endl;
	cout << "   E-mail         :- " << e_mail ;
	cout <<  endl <<  "----------------------------------------------------------------------------------------------------------------------"<<endl<<endl<<endl;
	cout << "\t\t\t\t\t-: Press [1] to Deposite the money :-" << endl << endl ;
	cout << "\t\t\t\t\t-: Press [2] to Transfer the money :-" << endl << endl;
	cout << "\t\t\t\t\t-: Press [3] to Withdraw the money :-" << endl << endl;
	cin >> choice;


	switch(choice){

	case 1:

int deposite,after_b;
cout << endl  <<  "----------------------------------------------------------------------------------------------------------------------" << endl;
cout << "   Enter Deposite Amaout : ";
cin >> deposite;
cout <<  "----------------------------------------------------------------------------------------------------------------------"<<endl;
cout << endl << endl << endl;
cout << "\t\t\tYour Actual Amount Is : 200000" << endl << endl;
cout << "\t\t\tCongrates Your Amount Has deposite Successfully." << endl << endl;
after_b=200000+deposite;
cout << "\t\t\tYour Account Balance Is : " << after_b << endl << endl;
break;

case 2:

int transfer,aft_t_bal,dumy_ac;
cout << endl  <<  "----------------------------------------------------------------------------------------------------------------------" << endl;
cout << "   Enter Amaout Which You Wanna Transfer : ";
cin >> transfer;
cout << "   Enter Another Account NUmber (Where You Wanna Transfer MOney ) : ";
cin >> dumy_ac;
cout <<  "----------------------------------------------------------------------------------------------------------------------"<<endl;
cout << endl << endl << endl;
if(dumy_ac==acco){
cout << "This is your account number " << dumy_ac;
}
else{
cout << "\t\t\tYour Actual Amount Is : 200000" << endl << endl;
cout << "\t\t\tCongrates Your Amount Has Transfer Successfully." << endl << endl;
aft_t_bal=200000-transfer;
cout << "\t\t\tYour Account Balance Is : " << aft_t_bal << endl << endl;
}
break;

case 3:

int withdraw,aft_d_bal;
cout << endl  <<  "----------------------------------------------------------------------------------------------------------------------" << endl;
cout << "   Enter Whithdraw Amaout : ";
cin >> withdraw;
cout <<  "----------------------------------------------------------------------------------------------------------------------"<<endl;
cout << endl << endl << endl;
cout << "\t\t\tYour Actual Amount Is : 200000" << endl << endl;
cout << "\t\t\tCongrates Your Amount Has Withdraw Successfully." << endl << endl;
aft_d_bal=200000-withdraw;
cout << "\t\t\tYour Account Balance Is : " << aft_d_bal << endl << endl;
break;

default:
cout << "Invalid choice.....";
break;
}


}
else if(log_in=='s' || log_in=='S'){

cout << endl << endl << endl <<  "----------------------------------------------------------------------------------------------------------------------";
cout << endl << "\t\t\t\t\t\t -: Wellcome As staf :- ";
cout <<  endl <<  "----------------------------------------------------------------------------------------------------------------------"<<endl<<endl<<endl<<endl;\
cout << "\t\t\t\t\tEnter The Name OF Staff\t\t     : ";
cin >> name;
cout << "\t\t\t\t\tEnter The Account NUmber Of Staff    : ";
cin >> acco;
cout << "\t\t\t\t\tEnter The Phone NUmber Of Staff\t     : ";
cin >> phone;
cout << "\t\t\t\t\tEnter The E-mail Of Satff\t     : ";
cin >> e_mail;
cout << endl << endl << endl;

cout << endl  <<  "----------------------------------------------------------------------------------------------------------------------" << endl;
cout << "   Name           :- "<< name << endl;
cout << "   Account NUmber :- " << acco << endl;
cout << "   Phone NUmber   :- " << phone << endl;
cout << "   E-mail         :- " << e_mail ;
cout <<  endl <<  "----------------------------------------------------------------------------------------------------------------------"<<endl<<endl<<endl;
cout << "\t\t\t\t\t-: Press [1] to Deposite the money :-" << endl << endl ;
cout << "\t\t\t\t\t-: Press [2] to Transfer the money :-" << endl << endl;
cout << "\t\t\t\t\t-: Press [3] to Withdraw the money :-" << endl << endl;
cin >> choice;


switch(choice){

case 1:

int deposite,after_b;
cout << endl  <<  "----------------------------------------------------------------------------------------------------------------------" << endl;
cout << "   Enter Deposite Amaout : ";
cin >> deposite;
cout <<  "----------------------------------------------------------------------------------------------------------------------"<<endl;
cout << endl << endl << endl;
cout << "\t\t\tYour Actual Amount Is : 200000" << endl << endl;
cout << "\t\t\tCongrates Your Amount Has deposite Successfully." << endl << endl;
after_b=200000+deposite;
cout << "\t\t\tYour Account Balance Is : " << after_b << endl << endl;
break;

case 2:

int transfer,aft_t_bal,dumy_ac;
cout << endl  <<  "----------------------------------------------------------------------------------------------------------------------" << endl;
cout << "   Enter Amaout Which You Wanna Transfer : ";
cin >> transfer;
cout << "   Enter Another Account NUmber (Where You Wanna Transfer MOney ) : ";
cin >> dumy_ac;
cout <<  "----------------------------------------------------------------------------------------------------------------------"<<endl;
cout << endl << endl << endl;
if(dumy_ac==acco){
cout << "This is your account number " << dumy_ac;
}
else{
cout << "\t\t\tYour Actual Amount Is : 200000" << endl << endl;
cout << "\t\t\tCongrates Your Amount Has Transfer Successfully." << endl << endl;
aft_t_bal=200000-transfer;
cout << "\t\t\tYour Account Balance Is : " << aft_t_bal << endl << endl;
}
break;

case 3:

int withdraw,after_bl;
cout << endl  <<  "----------------------------------------------------------------------------------------------------------------------" << endl;
cout << "   Enter Whithdraw Amaout : ";
cin >> withdraw;
cout <<  "----------------------------------------------------------------------------------------------------------------------"<<endl;
cout << endl << endl << endl;
cout << "\t\t\tYour Actual Amount Is : 200000" << endl << endl;
cout << "\t\t\tCongrates Your Amount Has Withdraw Successfully." << endl << endl;
after_bl=200000-withdraw;
cout << "\t\t\tYour Account Balance Is : " << after_bl << endl << endl;
break;

default:
cout << "Invalid choice....";
break;
}


}

else{

cout << "Invalid Choice";
}
return 0;
}



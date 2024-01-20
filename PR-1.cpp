/*
----------------------------------------------------------------------------------------------------------------------
                                                -: Railway Riservation Programm :-
----------------------------------------------------------------------------------------------------------------------


                        Enter your name : akshank
                        From            : surat
                        To              : ghandhinagar
                        Tiket ID : 6578123786

----------------------------------------------------------------------------------------------------------------------
                        Congratulation Your agistration was done successfully.....
----------------------------------------------------------------------------------------------------------------------


*/
#include<iostream>
using namespace std;

	class Railway{
		
		private:
			
	char name[100];
	char from[100];
	char to[100];
	int ticet_id;
	
		public:
			
	setdata(){	
	
	cout << endl  <<  "----------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "\t\t\t\t\t\t-: Railway Riservation Programm :- ";
	cout << endl  <<  "----------------------------------------------------------------------------------------------------------------------" << endl << endl << endl;
	cout << "\t\t\tEnter your name : ";
	cin >> this->name;
	cout << "\t\t\tFrom \t\t: ";
	cin >> this->from;
	cout << "\t\t\tTo \t\t: ";
	cin >> this->to;
	cout << "\t\t\tTicet ID : ";
	cin >> ticet_id;
}
	getdata(){
		
	cout << endl  <<  "----------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "\t\t\tCongratulation Your agistration was done successfully.....";
	cout << endl  <<  "----------------------------------------------------------------------------------------------------------------------" << endl << endl << endl;
}

};

	int main (){
		
	Railway r;
	r.setdata();
	r.getdata();
	
		return 0;
}


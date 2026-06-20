#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
class schoolbank{
		private:
			string number_password;
		int	balans =0;
		public:
			string name;			//class
			int number_acount;
			int age; 
		//money bank
		void deposit(){
						int new_money;
			cout<<"your Acount Is Ready Enter Money IN Acount ::"<<"\n"<<"$";
				cin>>new_money;
						if(new_money > 1000)
			{
					balans =balans + new_money;
			cout<<"Your Money in Bank Is....";		//ادخال المال ةاضافته للمال القديم
					cout<<"$"<< balans<<"\n";
			}
		else {
			cout<<"Your Money Is low"<<"\n";
					balans =balans + new_money;
			cout<<"Your Money in Bank Is....";
			cout<<"$"<< balans<<"\n";
		
			
		}
		
			
		}
		//function for PIN
		void setpassword(){ 
		string areay;
		cout<<"Enter your password::";
		cin>>areay;
	
		if(areay.length( ) > 7){
			cout<<"Error in Number Of Password is to long";
		}
		else if(areay.length( )< 7){
			cout<<"Error in Number Of Password is short";
			
		}
			else{
			
						number_password = areay;		
			}
			
			
		}
		
		
		//function for information 												 
		void display_information(){
				cout<<"Enter Your Name Acount...4name please"<<"\n";
				getline	(cin,name);
						cout<<"Enter Your AGE ::"<<"\n";
							cin>>age;
		}
						
						//function for PiN Number
					void success_information(){
					cout<<" Name..... "<<name<<"\n";
								
				srand(time(0));
		cout<<"Number Acount Is..";		
		for(int i=0;i<7;i++){
					int number_acount =rand()%7 + i;
	
							cout<<number_acount; 
				
						}
									
									}	
						
						
	};
	
int main()
{
		schoolbank user1;
cout<<"::::Welcome To The School Bank:::"<<"\n";
cout<<"\n";		cout<<"To Register Account, Enter Your Requrid Information::::"<<"\n";						
						
			user1.display_information();
				cout<<"Enter Your Password To Get Acount::"<<"\n";
						user1.setpassword();					
						
						cout<<"\n";
	                cout<<"		*******Your Acount Is Ready*******"<<"\n"<<"\n";
	
		   user1.success_information();
				cout<<"\n";
						user1.deposit();		

}
				
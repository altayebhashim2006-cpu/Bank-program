#include <iostream>
using namespace std;
int main() {
float length, width,side_length,radius, base,height;
float π=3.14 ;
char shaps;
cout << "Enter the dimensions of the shape whose area you want to measure\n"<<"\n" ;
cout << "for choose...\n△Triangle:(a)\n○circle:(b)\n□Square:(c)\n▭Rectangle:(d)\n " ;
cin >> shaps;
switch(shaps){
case 'a':
		cout<<"Enter The base and height of Triangle:\n" ;
   cin>>base>>height;
	 cout << "The Area of Triangle="<<0.5*base*height<<"\n";break; 
case 'b':
	 cout<<"Enter The Redius of Circle:\n ";
   cin>>radius; 
	 cout << "The Area of Circle="<<π* radius*radius<<"\n";break;
case 'c':
	 cout << "Enter The side length of square: \n";
   cin >> side_length;
	 cout<<"The Area of square="<<side_length*side_length<<"\n";break; 
case 'd':
	 cout<<"Enter The Width and length of Rectangle \n"; 
   cin >> width>>length;
	 cout << "The Area of Rectangle="<<width*length<<"\n";break;
 	 default:
  		 cout << "Invalid operator!\n";


}
return 0 ;
}



    
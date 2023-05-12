#include<iostream.h>
#include<string>
using namespace std;
int main()

//Bus Reservation System designed and developed by Mafabi Patrick
{
	//THE VARIABLES WE NEEED IN THE PROGRAM
string username = "";
string password ="";
string x;
bool correctPassword = false;
int pay; int book; char bus; char bbus; int y;
//boolean is by default it will say false if the input is incorrect
cout<<"Bus Reservation System, Please login\n\n";
do{
	cout<<"Enter Username. Username length must be 4 characters\t: ";
	cin>>username;
	cout<<"Enter Password. Password must have four characters\t:";
	cin>>password;
	
if(username!="BSOL" && password!="0246")
{
cout<<"Incorrect username or password\n";
cout<<"Please try again\n";
}
 else
{
cout<<"Login is successful\n";
cout<<"Press enter to continue\n";
correctPassword = true;
}
}while(!correctPassword);
system("pause");
//using logical operators to find out their booking and payment.
	cout<<"\n\t-------------------------------------------------------------------------------------------\n";
	cout<<"\t        T I C K E T    B O O K I N G    S Y S T E M   K A M P A L A   T O   M U K O N O\n";
	cout<<"\t----------------------------------------------------------------------------------------------\n"; 

cout<<"Please make a choice press number 1 for booking or press number 2 for payment\n";
cin>>b;
if(b=="1")
{
cout<<"Please enter the number of seats\n";
cin>>x;
cout<<"Please select bus type: Press number 1 for Ordinary. press number 2 for Luxury bus\n";
cin>>y;
         if((b==1) && (y==1))
         {
            cout<<"your fee for booking seats in a luxury bus will be ";
 	        cout<<x*2000;
 	        cout<<"\n";"
         }
         else
         {
        	cout<<"Your fee for booking seats in an ordinary bus will be ";
            cout<<x*1500;
            cout<<"\n";
         }
}
#include<iostream.h>
#include<string>
using namespace std;
int main()

//Bus Reservation System designed and developed by Mafabi Patrick
{
string username = "";
string password ="";
bool correctPassword = false; 
//boolean is by default it will say false if the input is incorrect
cout<<"Bus Reservation System, Please login\n\n";
do{
	cout<<"Enter Username: ";
	cin>>username;
	cout<<"Enter Password:";
	cin>>password;
	
if(username=="Bussystemoperation" && password=="0246")
{cout<<"Login is successful\n";
correctPassword = true;
}
 else
{
 cout<<"Incorrect username and password\n";
 cout<<"Please try again\n";
 }  
}while(!correctPassword);
system("pause");
int x; int y;
cout<<"press 1 for booking";
cin>>x;
cout<<"press 2 for payment";
cin>>y;
}
// File: client_3.cpp
#include "bank.h"
int main(){
Client c3("Saad Raza", "pass3", "33102", 1003, 7000.0);
cout<<"============================================================="<<endl;

c3.view_account();
cout<<"============================================================="<<endl;

c3.deposit(2000.0); 
cout<<"============================================================="<<endl;

c3.view_account();
cout<<"============================================================="<<endl;


c3.withdraw("Saad Raza", "pass3", 10000.0);//invalid ammount
cout<<"============================================================="<<endl;

c3.withdraw("Saad Raza", "pass3", 1500.0); //valid ammount
cout<<"============================================================="<<endl;

c3.view_account();
cout<<"============================================================="<<endl;


cout<<"Press 9 to change name: ";
int choice;
cin>>choice;
if (choice == 9){
    string new_name;    
    cout<<"Enter new name: ";
    cin>>new_name;
    c3.change_name("33102", new_name);
    c3.view_account();
}
return 0;
}
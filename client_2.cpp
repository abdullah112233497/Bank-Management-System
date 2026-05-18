//File: client_2.cpp
#include "bank.h"
int main(){
Client c2("Junaid", "pass2", "33101", 1002, 3000.0);

c2.view_account();
cout<<"============================================================="<<endl;
c2.deposit(2000.0); 
cout<<"============================================================="<<endl;

c2.view_account();
cout<<"============================================================="<<endl;

c2.withdraw("Junaid", "pass2", 4000.0);//invalid ammount
cout<<"============================================================="<<endl;
c2.withdraw("Junaid", "pass2", 1500.0); //valid ammount
cout<<"============================================================="<<endl;

c2.view_account();
cout<<"============================================================="<<endl;

cout<<"Press 9 to change name: ";
int choice;
cin>>choice;
if (choice == 9){
    string new_name;    
    cout<<"Enter new name: ";
    cin>>new_name;
    c2.change_name("33101", new_name);
    c2.view_account();
}
return 0;
}
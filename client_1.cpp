// File: client_1.cpp

#include "bank.h"

Client c1("Duryab", "pass1", "33100", 1001, 5000.0);
c1.view_account();
cout<<"============================================================="<<endl;
c1.deposit(2000.0); 
cout<<"============================================================="<<endl;

c1.view_account();
cout<<"============================================================="<<endl;

c1.withdraw("Duryab", "pass1", 7999.0);//invalid ammount
cout<<"============================================================="<<endl;

c1.withdraw("Duryab", "pass1", 1500.0); //valid ammount
cout<<"============================================================="<<endl;

c1.view_account();
cout<<"============================================================="<<endl;


cout<<"Press 9 to change name: ";
int choice;
cin>>choice;
if (choice == 9){
    string new_name;    
    cout<<"Enter new name: ";
    cin>>new_name;
    c1.change_name("33100", new_name);
    
    c1.view_account();
    cout<<"============================================================="<<endl;
}
return 0;
}
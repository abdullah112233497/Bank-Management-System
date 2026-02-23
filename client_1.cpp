#include "bank.h"
int main(){
    // c1.view_account();
    // c1.deposit(2000.0); 
    // c1.view_account();
    
    // c1.withdraw("Duryab", "pass1", 6000.0);//invalid ammount
    // c1.withdraw("Duryab", "pass1", 1000.0); //valid ammount
    // c1.view_account();
    Client c1("Duryab", "pass1", "33100", 1001, 5000.0);
    while ( 1)
    {
    /* code */


cout<<"Enter your choice: ";
cout<<"View account details: 1"<<endl;
cout<<"Deposit money: 2"<<endl; 
cout<<"Withdraw money: 3"<<endl;
cout<<"Change name: 4"<<endl;
cout<<"Exit: 0"<<endl;
int choice;
cin>>choice;
cin.ignore(); // Clear the newline character from the input buffer
if (choice == 1){
    c1.view_account();
}
else if (choice == 2){
    double amount;
    cout<<"Enter amount to deposit: ";
    cin>>amount;
    c1.deposit(amount);
}
else if (choice == 3){
    double amount;
   cout<<"Enter the username: ";
    string name;
        getline(cin, name); // Clear the newline character from the input buffer    
    cout<<"Enter the password: "; 
    string password;
    getline(cin, password);
cout<<"Enter amount to withdraw: ";
cin>>amount;
    c1.withdraw(name, password, amount);
}
 


if (choice == 4){
    string new_name;    
    cout<<"Enter new name: ";
    cin>>new_name;
    cout<<"Enter CNIC to verify: ";
    string cnicInput;
    cin>>cnicInput;
    c1.change_name(cnicInput, new_name);
  
}
if (choice == 0){
    cout<<"Exiting..."<<endl;
    break;}
}

return 0;
}
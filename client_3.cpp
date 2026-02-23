
#include "bank.h"
int main(){
    // c3.view_account();
    // c3.deposit(2000.0); 
    // c3.view_account();
    
    // c3.withdraw("Duryab", "pass1", 6000.0);//invalid ammount
    // c3.withdraw("Duryab", "pass1", 1000.0); //valid ammount
    // c3.view_account();
    Client c3("Saad Raza", "pass3", "33102", 1003, 7000.0);
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
    c3.view_account();
}
else if (choice == 2){
    double amount;
    cout<<"Enter amount to deposit: ";
    cin>>amount;
    c3.deposit(amount);
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
    c3.withdraw(name, password, amount);
}
 


if (choice == 4){
    string new_name;    
    cout<<"Enter new name: ";
    cin>>new_name;
    cout<<"Enter CNIC to verify: ";
    string cnicInput;
    cin>>cnicInput;
    c3.change_name(cnicInput, new_name);
  
}
if (choice == 0){
    cout<<"Exiting..."<<endl;
    break;}
}

return 0;
}
// #include "bank.h"
// int main(){
// Client c3("Saad Raza", "pass3", "33102", 1003, 7000.0);
// c3.view_account();
// c3.deposit(2000.0); 
// c3.view_account();

// c3.withdraw("Saad Raza", "pass3", 4000.0);//invalid ammount
// c3.withdraw("Saad Raza", "pass3", 1500.0); //valid ammount
// c3.view_account();

// cout<<"Press 9 to change name: ";
// int choice;
// cin>>choice;
// if (choice == 9){
//     string new_name;    
//     cout<<"Enter new name: ";
//     cin>>new_name;
//     c3.change_name("33102", new_name);
//     c3.view_account();
// }
// return 0;
// }
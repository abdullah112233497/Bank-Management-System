#include "bank.h"
int main(){
    // c2.view_account();
    // c2.deposit(2000.0); 
    // c2.view_account();
    
    // c2.withdraw("Duryab", "pass1", 6000.0);//invalid ammount
    // c2.withdraw("Duryab", "pass1", 1000.0); //valid ammount
    // c2.view_account();
    Client c2("Junaid", "pass2", "33101", 1002, 3000.0);
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
    c2.view_account();
}
else if (choice == 2){
    double amount;
    cout<<"Enter amount to deposit: ";
    cin>>amount;
    c2.deposit(amount);
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
    c2.withdraw(name, password, amount);
}
 


if (choice == 4){
    string new_name;    
    cout<<"Enter new name: ";
    cin>>new_name;
    cout<<"Enter CNIC to verify: ";
    string cnicInput;
    cin>>cnicInput;
    c2.change_name(cnicInput, new_name);
  
}
if (choice == 0){
    cout<<"Exiting..."<<endl;
    break;}
}

return 0;
}
// #include "bank.h"
// int main(){
// Client c2("Junaid", "pass2", "33101", 1002, 3000.0);
// c2.view_account();
// c2.deposit(2000.0); 
// c2.view_account();

// c2.withdraw("Junaid", "pass2", 4000.0);//invalid ammount
// c2.withdraw("Junaid", "pass2", 1500.0); //valid ammount
// c2.view_account();

// cout<<"Press 9 to change name: ";
// int choice;
// cin>>choice;
// if (choice == 9){
//     string new_name;    
//     cout<<"Enter new name: ";
//     cin>>new_name;
//     c2.change_name("33101", new_name);
//     c2.view_account();
// }
// return 0;
// }
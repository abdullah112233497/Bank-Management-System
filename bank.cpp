// File: bank.cpp 
#include "bank.h"
Client::Client(string name, string password, string cnic, int account_number,   double balance){
    this->name = name;   /*mane this point use kia hy take current object ke data memeber ma differenciate ho ja a .*/
    this->password = password;
    this->cnic = cnic;
    this->account_number = account_number;
    this->balance = balance;
}
void Client::view_account(){
    cout<<"Account Details:"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"CNIC: "<<cnic<<endl; 
    cout<<"Account Number: "<<account_number<<endl;
    cout<<"Balance: "<<balance<<endl;
}

void Client::change_name(string cnicInput, string new_name){
    if (cnicInput==cnic){
        name=new_name;
        cout<<"Name changed successfully!"<<endl;
    }else{
        cout<<"Invalid CNIC. Name change failed."<<endl;
    }
}
void Client::deposit(double amount){

    if (amount>0){
        balance+=amount;
        cout<<"Deposit successful! New balance: "<<balance<<endl;
    }else{
        cout<<"Invalid amount. Deposit failed."<<endl;
    }
   
}
void Client::withdraw(string  name, string  password, double amount){

    if (this->name==name && this ->password==password){
        if (amount>0 &&amount<= balance){
balance-=amount;
cout<<"Withdrawal successful! New balance: "<<balance<<endl;
        }
        else{
            cout<<"Invalid amount or insufficient balance. Withdrawal failed."<<endl;
            return ;
        }
       
        
    }
    else{
        cout<<"Invalid name or password. Withdrawal failed."<<endl;
    }

}
string Client::getDetails(){

    return "Name: "+name+ "\nCNIC: "+cnic+"\nAccount Number: "+to_string(account_number)+"\nBalance: "+to_string(balance);

}


Manager::Manager(string username, string password){
    this -> username=username;
this->password=password;
}
bool Manager::login(string usernameInput, string passwordInput){
    if (usernameInput==username && passwordInput==password){
        return true;
    }
    else{
        return false;
    }
}
void Manager::view_all_clients_details(Client c1,Client c2, Client c3){
    cout<<"============================================================="<<endl;
    cout<<"Client 1 Details:\n"<<c1.getDetails()<<endl;
    cout<<"============================================================="<<endl;
    cout<<"Client 2 Details:\n"<<c2.getDetails()<<endl;
    cout<<"============================================================="<<endl;
    cout<<"Client 3 Details:\n"<<c3.getDetails()<<endl;
cout<<"============================================================="<<endl;

}
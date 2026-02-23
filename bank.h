#ifndef BANK_H
#define BANK_H
#include<iostream>
#include<string> 
using namespace std;
class Client{
private:
    string name;
    string password;
    string cnic;
    int account_number;
    double balance;
public:
    Client(string name, string password, string cnic, int account_number,   double balance);
    void view_account();
    void change_name(string cnicInput, string new_name);
    void deposit(double amount);
    void withdraw(string  name, string  password, double amount);
    string getDetails();
};

class Manager{
private:
    string username;
    string password;
public:
Manager(string username, string password);
bool login(string usernameInput, string passwordInput);
void view_all_clients_details(Client c1, Client c2, Client c3);
};


#endif // BANK_H

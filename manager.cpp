// File: manager.cpp
#include "bank.h"
#include<conio.h>

//Password ko hide krne ke liya function (as *) banaya hai:
string inputPassword(){
    string password="";
    char ch;
    while((ch = _getch()) != '\r'){ // (ASCII 13) Read characters until Enter is pressed
        if(ch == '\b'){ // Handle backspace  (ASCII 8)
            if(!password.empty()){
                password.pop_back();
                cout << "\b \b"; // Erase the last character from the console
            }
        } else {
            password += ch; // Append the character to the password string
            cout << '*'; // Print an asterisk for each character entered
        }
    }
    return password;   // ⭐ M
}
int main(){
    cout<<"Enter the manager's username: ";
    string username; 
     getline(cin, username); // Clear the newline character from the input buffer
    cout<<"Enter the manager's password: ";
    
    string password = inputPassword(); // Read the password without echoing it
    cout << endl; // Move to the next line after password input
Manager m("Muhammad Abdullah", "1234") ;//
Client c1("Duryab", "pass1", "33100", 1001, 5000.0); //three objects of the client class
Client c2("Junaid", "pass2", "33101", 1002, 3000.0);
Client c3("Saad Raza", "pass3", "33102", 1003, 7000.0);
if (m.login(username, password)){

    cout<<"Manager Login successful!"<<endl;

}
    else{
        cout<<"Manager Login failed!"<<endl;
        return 0;
    }
    cout<<"To check the details of all clients, press 1: ";
    int choice;
    cin>>choice;
    if (choice == 1){


    m.view_all_clients_details(c1,c2,c3);}
    else{
        cout<<"Invalid choice. Exiting."<<endl;
    }
  return 0;
}
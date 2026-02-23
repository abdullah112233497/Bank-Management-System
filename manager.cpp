#include "bank.h"

int main(){
    cout<<"Enter the manager's username: ";
    string username; 
     getline(cin, username); // Clear the newline character from the input buffer
    cout<<"Enter the manager's password: ";

    string password;
   getline(cin, password);
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
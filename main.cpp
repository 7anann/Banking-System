#include <iostream>
#include "BankApplication.h"
#include "Client.h"
#include "BankAccount.h"
#include "SavingsBankAccount.h"


using namespace std;

int main()
{
    int choice;
    BankApplication bn1;

 cout<<"Welcome to FCI Banking Application \n";
 cout<<"1.Create a New Account \n";
 cout<<"2. List Clients and Accounts \n";
 cout<<"3. Withdraw Money \n";
 cout<<"4. Deposit Money \n";
 cout<<endl;
 cout<<"Please Enter choice: \n";
 cin>>choice;
 if(choice == 1)
 {
     bn1.CreateAccount();

 }
 if(choice == 2)
 {
     bn1.listClients();
 }
 if(choice == 3)
 {
     bn1.withdraw();
 }
 if(choice == 4)
 {
     bn1.Dep();
 }
 else if(choice>4)
 {
     cout<<"Invalid Choice"<<endl;
}
}

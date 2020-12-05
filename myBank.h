#ifndef UNTITLED1_MYBANK_H
#define UNTITLED1_MYBANK_H
#define ACCOUNTS 50
#define USE 2 
double bankAccounts[ACCOUNTS][USE];
#endif 


int openAccount (double bankAccounts [][USE]) ;
int printBalance (double bankAccounts [][USE] , int account_number ) ;
int deposit (double bankAccounts [][USE] , int account_number ) ;
int withdrawal (double bankAccounts [][USE] , int account_number ) ;
int closeAccount (double bankAccounts [][USE] , int account_number ) ;
int interest (double bankAccounts [][USE] , int interestRate ) ;
int printAll (double bankAccounts [][USE]) ;
int Exit () ;

int checkIfOpen(double bankAccounts [][USE] , int account_number);


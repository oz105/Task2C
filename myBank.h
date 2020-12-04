#ifndef UNTITLED1_MYBANK_H
#define UNTITLED1_MYBANK_H
#define ACCOUNTS 50
#define USE 2 
double bankAccounts[ACCOUNTS][USE];
//double bankAccounts[ACCOUNTS][USE];
#endif //UNTITLED1_MYBANK_H

//int openAccount (double bankAccounts [ACCOUNTS][2]) ;
//int printBalance (double bankAccounts [ACCOUNTS][2] , int account_number ) ;
//int deposit (double bankAccounts [ACCOUNTS][2] , int account_number ) ;
//int withdrawal (double bankAccounts [ACCOUNTS][2] , int account_number ) ;
//int closeAccount (double bankAccounts [ACCOUNTS][2] , int account_number ) ;
//int interest (double bankAccounts [ACCOUNTS][2] , double interestRate ) ;
//int printAll (double bankAccounts [ACCOUNTS][2]) ;
//int Exit () ;

//int checkIfOpen(double bankAccounts [ACCOUNTS][2] , int account_number);

int openAccount (double bankAccounts [][USE]) ;
int printBalance (double bankAccounts [][USE] , int account_number ) ;
int deposit (double bankAccounts [][USE] , int account_number ) ;
int withdrawal (double bankAccounts [][USE] , int account_number ) ;
int closeAccount (double bankAccounts [][USE] , int account_number ) ;
int interest (double bankAccounts [][USE] , double interestRate ) ;
int printAll (double bankAccounts [][USE]) ;
int Exit () ;

int checkIfOpen(double bankAccounts [][USE] , int account_number);


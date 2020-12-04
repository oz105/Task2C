#include <stdio.h>
#include "myBank.h"
#define USE 2 

extern double bankAccounts[][USE];
int main() {
    char the_chosen_input = 'A';
    int count_accounts = 0;
    int account_number = 0;
    int interest_rate = 0;
    int stillRunning = 1;
    
    for (int i = 0; i < 50 ; ++i) {
        bankAccounts[i][0] = 0.0 ;
        bankAccounts[i][1] = 0.0 ;
    }


    while (stillRunning){
    	printf("\n");
        printf("Please choose a transaction type:\n"
               " O-Open Account\n"
               " B-Balance Inquiry\n"
               " D-Deposit\n"
               " W-Withdrawal\n"
               " C-Close Account\n"
               " I-Interest\n"
               " P-Print\n"
               " E-Exit\n");
               
        scanf(" %c", &the_chosen_input);

        if (the_chosen_input == 79) {
            if (count_accounts < 50) {
                openAccount(bankAccounts);
                count_accounts++;
            }
            else{ printf("Sorry but we are full there is no place for new account\n");}

        } else if (the_chosen_input == 66) {
            printf("Please enter account number: ");
            if((scanf("%d", &account_number))==1){
            	if (checkIfOpen(bankAccounts , account_number)) {
                printBalance(bankAccounts , account_number) ;
            	}
            } else {printf("Failed to read the account number\n"); }

        } else if (the_chosen_input == 68) {
            printf("Please enter account number: ");
            if((scanf("%d", &account_number))==1){
           	 if (checkIfOpen(bankAccounts , account_number)) {
                	deposit(bankAccounts , account_number);
            	}
            }else {printf("Failed to read the account number\n"); }

        } else if (the_chosen_input == 87) {
            printf("Please enter account number: ");
            if((scanf("%d", &account_number))==1){
            	if (checkIfOpen(bankAccounts , account_number)) {
                    withdrawal(bankAccounts , account_number);
            	}     
            }else {printf("Failed to read the account number\n"); }

        } else if (the_chosen_input == 67) {
            printf("Please enter account number: ");
            if((scanf("%d", &account_number))==1){
            	if(account_number < 901 || account_number > 950 ) {
    			printf("Invalid account number\n");
    		}	
            	else if(bankAccounts[account_number-901][0] == 0){
    			{printf("This account is already closed\n");}
    		}
            	else {
                	closeAccount(bankAccounts , account_number);
                	count_accounts--;
            	}
            }else {printf("Failed to read the account number\n"); }
            
        } else if (the_chosen_input == 73) {
            printf("Please enter interest rate: ");
            if((scanf("%d", &interest_rate))==1){
            	interest(bankAccounts , interest_rate);            
            }else {printf("Failed to read the interest rate\n"); }
            
        } else if (the_chosen_input == 80) {
            printAll(bankAccounts);
        } else if (the_chosen_input == 69) {
            stillRunning = Exit();
        }
        if (the_chosen_input != 66 && the_chosen_input != 67 && the_chosen_input != 68 && the_chosen_input != 69 &&
            the_chosen_input != 73 && the_chosen_input != 79 && the_chosen_input != 80 && the_chosen_input != 87) {
            printf("Invalid transaction type\n");
        }
    }



    return 0;
}


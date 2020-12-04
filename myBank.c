#include "myBank.h"
#include <stdio.h>


#define ACCOUNTS 50
#define USE 2 


int openAccount (double bankAccounts [][USE] ){
    int num_of_available_account = 0 ;
    double initial_deposit = 0.0 ;
    printf("Please enter amount for deposit: ");
    if((scanf("%lf", &initial_deposit))==1){
    	if(initial_deposit <= 0.0 ) { 
    	printf("Invalid Amount\n");
    	return 0 ;
    	}
    }
    else{
    	printf("Failed to read the amount\n") ;
    	return 0 ;
    }
    for (int i = 0; i < 50 ; i++) {
        if(bankAccounts[i][0] == 0.0 ){
            num_of_available_account = i + 901 ;
            bankAccounts[i][0] = 1.0 ;
            bankAccounts[i][1] = initial_deposit ;
            i = 50 ;
        }
    }
    printf("New account number is: %d \n", num_of_available_account);
    return 0 ;
}

int printBalance (double bankAccounts [][USE] , int account_number ){
    double balance = bankAccounts[account_number - 901][1] ;
    printf("The balance of account number %d is: %0.2lf\n" , account_number , balance);
    return 0 ;
}

int deposit (double bankAccounts [][USE] , int account_number ){
    double amount_deposit = 0.0 ;
    printf("Please enter the amount to deposit: ");
    if((scanf("%lf", &amount_deposit))==0){
    	printf("Failed to read the amount\n");
    	return 0 ; 
    }
    if(amount_deposit <= 0.0 ) { 
    	printf("Cannot deposit a negative amount\n") ;
    	return 0 ;
    }
    bankAccounts[account_number-901][1] += amount_deposit ;
    printf("The new balance is: %0.2lf\n",bankAccounts[account_number-901][1]) ;
    return 0 ;
}

int withdrawal (double bankAccounts [][USE] , int account_number ){
    double amount_withdrawal = 0.0 ;
    printf("Please enter the amount to withdraw: ");
    if(scanf("%lf", &amount_withdrawal)==0){
    	printf("Failed to read the amount\n");
    	return 0 ; 
    }
    if(amount_withdrawal <= 0.0 ) { 
    	printf("Cannot withdraw a negative amount\n\n");
    	return 0 ;
    }
    if(amount_withdrawal > bankAccounts[account_number-901][1]){
        printf("Cannot withdraw more than the balance\n");
    }else {
        bankAccounts[account_number-901][1] -= amount_withdrawal ;
        printf("The new balance is: %0.2lf\n",bankAccounts[account_number-901][1]) ;
    }
    return 0 ;
}
int closeAccount (double bankAccounts [][USE] , int account_number ){
    bankAccounts[account_number-901][0] = 0 ;
    printf("Closed account number %d\n" , account_number) ;
    return 0 ;
}
int interest (double bankAccounts [][USE] , double interestRate ) {
	double add = 0.0 ;
	if(interestRate <= 0.0 || interestRate > 100.0 ) { 
    		printf("Invalid interest rate\n");
    		return 0 ; 
	}
	for(int i = 0 ; i<50 ; i++) {
		if(bankAccounts[i][0] == 1.0){
			add = (bankAccounts[i][1]*interestRate)/100 ; 
			bankAccounts[i][1] += add ; 
		}
	}

    return 0 ;
}

int printAll (double bankAccounts [][USE]) {
    for (int i = 0; i < 50 ; i++) {
        if(bankAccounts[i][0] == 1.0 ) {
         printBalance(bankAccounts , i+901) ;
        }
    }
    return 0 ;
}
int Exit (){

    return 0 ;

}

int checkIfOpen(double bankAccounts [][USE] , int account_number){
    if(account_number < 901 || account_number > 950 ) {
    	printf("Invalid account number\n");
    	return 0 ;
    }
    if(account_number - 901 < 0 || account_number - 901 > 49){ 
    	printf("++Failed to read the account number\n");
    	return 0 ; 
    }
    if(bankAccounts[account_number-901][0] == 1){
        return 1 ;
    }else {printf("This account is closed\n");}
    
       return 0 ;
}



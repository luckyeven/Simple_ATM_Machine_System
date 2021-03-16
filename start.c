#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

int main(void){
	int tmppassword,password = 123, attempt = 0;
	float balance = 1000.00;
	char option,option2,withdrawMoney;
	
	while(1){
		do{
			system("cls");
			printf("*************************************\n");
			printf("*        Welcom to use ATM          *\n");
			printf("*  To use further operations please *\n");
			printf("*          1.Enter PIN              *\n");
			printf("*               OR                  *\n");
			printf("*          2.Return                 *\n");
			printf("*************************************\n");
			option = getch();
		}while(option!='1'&& option!='2' &&option!= '3');
		
		switch(option)
		{
		case '1' :
			do{
				attempt++;
				system("cls");
				printf(" Enter your PIN then press Enter \n");
				scanf("%d", &tmppassword);
				
				if(tmppassword!= password && attempt < 3){
					system("cls");
					printf("**************************************************\n");
					printf("*                   Wrong PIN                    *\n");
					printf("*      Press any key Try again OR Press Q quit   *\n");
					printf("**************************************************\n");
					option2 = getch();
					switch(option2)
					{

						case'Q':
							exit(0);
					}

				}

				if(tmppassword == password){
					attempt = 0;
					system("cls");
					printf("*************************************\n");
					printf("*        Welcom to use ATM          *\n");
					printf("*  Your balance is %4.2f               \n",balance);
					printf("*          1.Withdraw               *\n");
					printf("*          2.Return                 *\n");
					printf("*************************************\n");
					getch();
					break;
				}
			
				if(attempt >=3){
					system("cls");
					printf("Too many attempts, Press any Key to quit.");
					getch();
					exit(0);
				}
			}while(attempt < 3 && tmppassword != password);
							
		case '2' :
			system("cls");
			printf("*************************************\n");
			printf("*      Thank you for using ATM      *\n");
			printf("*    Press any key to continue...   *\n");
			printf("*************************************\n");
			getch();
		}
	}
}
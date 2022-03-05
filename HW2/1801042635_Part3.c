#include <stdio.h>

int main()
{
	int x,currency;                              // currency and amount variables
	printf("***** Welcome to ABC Exchange Office *****\n");
	
	printf("Enter your amount:\n");  // I want the amount in the account from the user.
	scanf("%d",&x);
	
	printf("Please select your currency\n");     //
	printf("1.Turkish Lira\n");                  //
	printf("2.Euro\n");                          // CURRENCY MENU	
	printf("3.Dollar\n\n");                      //
	
	scanf("%d",&currency);    //I want the currency from the user.
	
	switch(currency)
	{
		case 1:   // if the currency is  Turkish money.
		{	
			printf("You have %f Turkish lira\n",(double)x);
			printf("Choose which currency you want to convert\n");    // I ask which currency you want to convert. 
			
			int currency_value;
			scanf("%d",&currency_value);   // I get the amount of money from the user.
			
			switch(currency_value)
			{
				case 1:
				{
					printf("You have %f Turkish lira\n",(double)x);	  //if the user wants to convert Turkish money to Turkish money.
					break;
				}
				case 2:
				{
					double a=(double)x/6.69;                          //if the user wants to convert Turkish money to Euro.
					printf("you have %f Euro",a);	
					break;
				}
				case 3:
				{
					double a=(double)x/6.14;                         //if the user wants to convert Turkish money to Dollar.
					printf("you have %f Dollar",a);	
					break;
				}
				default :
				{
					printf("Your selection is invalid.");                 //if user chooses invalid option from menu.
					break;	
				} 
			}
			break;
		}
		case 2:   // if the currency is  Turkish Euro.
		{	
			printf("You have %f Euro\n",(double)x);    
			printf("Choose which currency you want to convert\n");      // I ask which currency you want to convert.
			
			int currency_value;
			scanf("%d",&currency_value);     // I get the amount of money from the user.
			
			switch(currency_value)
			{
				case 1:
				{
					double a=(double)x*6.69;                         //if the user wants to convert Euro to Turkish money.
					printf("you have %f Turkish Lira",a);	
					break;
				}
				case 2:
				{
					printf("You have %f Euro\n",(double)x);	         //if the user wants to convert Euro to Euro.
					break;
				}
				case 3:
				{
					double a=(double)x*(6.69/6.14);                  //if the user wants to convert Euro to Dollar.
					printf("you have %f Dollar",a);
					break;
				}
				default :
				{
					printf("Your selection is invalid.");             //if user chooses invalid option from menu.
					break;	
				} 
			}
			break;
		}
		
		case 3:             // if the currency is  Dollar.       
		{	
			printf("You have %f Dollar\n",(double)x);
			printf("Choose which currency you want to convert\n");        // I ask which currency you want to convert.
			
			int currency_value;
			scanf("%d",&currency_value);     // I get the amount of money from the user.
			
			switch(currency_value)
			{
				case 1:                               //if the user wants to convert Dollar to Turkish money.
				{
					double a=(double)x*6.14;
					printf("you have %f Turkish Lira",a);	
					break;
				}
				case 2:                               //if the user wants to convert Dollar to Euro.
				{
					double a=(double)x*(6.14/6.69);
					printf("you have %f Euro",a);	
					break;
				}
				case 3:                              //if the user wants to convert Dollar to Dollar.
				{
					printf("You have %f Dollar\n",(double)x);
					break;
				}
				default :
				{
					printf("Your selection is invalid.");       //if user chooses invalid option from menu.
					break;	
				} 
			}
			break;
		}
	}
	
	return 0;
}

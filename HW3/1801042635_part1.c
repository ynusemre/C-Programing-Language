#include <stdio.h>

int sum (int n, int flag)               //If the user enters 0, addition is made.
{
	printf("Please enter '0' to work on even numbers,'1' to work on odd numbers \n");
	scanf("%d",&flag);
	int sum=0;
	
	//    user chooses whether to add even numbers or odd numbers
	
	switch(flag)
	{
		case 0:    //  If the user chooses 0, even numbers up to that number are added up.(including that number if it is even)
			{
				for(int i=1;i<=n;i++)
				{ 	
					if(i % 2 == 0)
					{
						if(i==n) 
						{
							sum=sum+i;	
							printf("%d  ",i);
						}
						else if(i==(n-1))
						{
							sum=sum+i;	
							printf("%d  ",i);
						}
						else 
						{
							sum=sum+i;	
							printf("%d + ",i);
						}
					}	
				}
				printf("=%d",sum);
				break;
			}
				
		case 1:          //if the user chooses 1 the odd numbers up to that number are added up.(including that number if it is odd )
			{
				for(int i=1;i<=n;i++)
				{
					if(i % 2 == 1)
					{
						if(i==n) 
						{
							sum=sum+i;	
							printf("%d  ",i);
						}
						else if(i==(n-1))
						{
							sum=sum+i;	
							printf("%d  ",i);
						}
						else 
						{
							sum=sum+i;	
							printf("%d + ",i);
						}
					}
				}
				printf("=%d",sum);
				break;
			}
			default :                      //if the user does not enter 0 or 1
				{
					printf("Invalid value for odd/even selection.");
					break;
				}
	}
}

int mult (int n, int flag)
{
	printf("Please enter '0' to work on even numbers,'1' to work on odd numbers \n");
	scanf("%d",&flag);
	int multi=1;
	
	//user chooses whether to multiply even or odd numbers

	switch(flag)
	{
		
		case 0:           //if the user chooses 0 the even numbers up to that number are multiplied.(including that number if it is even)
			{
				for(int i=1;i<=n;i++)
				{ 	
					if(i % 2 == 0)
					{
						if(i==n) 
						{
							multi=multi*i;	
							printf("%d  ",i);
						}
						else if(i==(n-1))
						{
							multi=multi*i;	
							printf("%d  ",i);
						}
						else 
						{
							multi=multi*i;	
							printf("%d * ",i);
						}
					}	
				}
				printf("=%d",multi);
				break;
			}
				
		case 1:               //if the user chooses 1 the even numbers up to that number are multiplied.(including that number if it is odd)
			{
				
				for(int i=1;i<=n;i++)
				{
					
					if(i % 2 == 1)
					{
						if(i==n) 
						{
							multi=multi*i;	
							printf("%d  ",i);
						}
						else if(i==(n-1))
						{
							multi=multi*i;	
							printf("%d  ",i);
						}
						else 
						{
							multi=multi*i;	
							printf("%d * ",i);
						}
					}
				}
				printf("=%d",multi);
				break;
			}
			default :                             ////if the user does not enter 0 or 1
				{
					printf("Invalid value for odd/even selection.");
					break;
				}
	}
}
int main()
{
	
	int x,flag,flag1;
	printf("Enter an integer:");
	scanf("%d",&x);
	
	printf("Please enter '0' for sum,'1' for multiplication \n");
	scanf("%d",&flag);
	
	//'switch case' where the user will choose addition or multiplication to the number entered.
	
	switch(flag)
	{
		case 0:
			{									
				sum (x,flag);
				break;
			}
		case 1:
			{
				mult (x,flag);
				break;
			}
		default:						//if the user does not enter 0 or 1
			{
				printf("Please enter '0' to work on even numbers,'1' to work on odd numbers \n");
				scanf("%d",&flag1);
				printf("unsported operation");
				break;	
			}
	}
	return 0;
}
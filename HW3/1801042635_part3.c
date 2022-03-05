#include <stdio.h>

int number_length(int a,int b)  //Function that controls the length of the two numbers entered.
{
	int temp1,temp2;
	int count1 =1;
	int count2 =1;
	
	while(a>0)
		{
			temp1=a % 10;       //I get 10 to mode to get the last digit of the entered number.
			a /=10;             //I divide the  entered number by 10 and get rid of the last digit.
			count1++;           // I increase "count1" by 1 as much as every digit I get rid of.
		} 
		while(b>0)
		{
			temp2=b % 10;       //I get 10 to mode to get the last digit of the entered number.
			b /=10;             //I divide the  entered number by 10 and get rid of the last digit.
			count2++;           // I increase "count1" by 1 as much as every digit I get rid of.
		}
		
		if(count1==count2)      // If the entered value of the two numbers entered is the same, I will return 1.
		{
			return 1;	
		}	
		else                     //if it's not the same, I'll return 0.
		{
			return 0;
		}
}
int control(int a,int b)      // A function that checks whether the entered numbers are "binary" or not.
{
	int temp1,temp2;
	int result,result2;
	 
	//The loops start from the rightmost digit of the entered numbers to check if the remainder of the division of 10 is 0 or 1.
	 
	while(a>0)
	{	
		result=1;          // I determined a control variable.
		temp1=a % 10;
		a /=10;
			
		if(temp1%10==0 || temp1%10==1 )      //If the first entered number is "binary",  the control variable becomes 1.
		{
			result=1;
		}
		else                       // if not, it becomes 0.if the entered number is not binary, it exits directly from the loop.
		{                           //the control variable becomes 0.
			result=0;
			break;
		}
			
	}
		while(b>0)
		{	 
			result2=1;           // I determined a control variable.
			temp2=b % 10;
			b /=10;
			
			if(temp2%10==0 || temp2%10==1)    //If the second entered number is "binary", the control variable becomes 1.
			{
				result2=1;
			}
			else                  // if not, it becomes 0.if the entered number is not binary, it exits directly from the loop.
			{                     //the control variable becomes 0.
				result2=0;
				break;
			}
		}
		if(result==1 && result2==1)     // If both of the control variables are 1, I will return 1.
		{
			return 1;	
		}	
		else                           //if not, I will return 0.
		{
			return 0;
		}
}
int number_length2(int a)            //I wrote a function that returns the number of digits of any number.
{
	int temp1=0,count1=0;
	
	while(a>0)
		{
			temp1=a % 10;
			a /=10;
			count1++;
		}
		return count1;
}
int andop (int a, int b) 
{	
	//This function controls the numbers from left to right and performs "and" operation.
	//To check the digits of the number from left to right, I take the power of  number by 10  which is a minus the number of digits, 
	//and divide it by that number. 
	//The power  of 10 decreases by 1 continuously 1. Until it is less than 0
	//the number of digits is constantly reduce by one.
	//and prints the steps one by one.
	
	int temp2=0,temp3=0,temp4=0,temp5=0;
	int count1 =0;
	
	int x=number_length2(a);   // I assigned the number of digits of the entered number  in a variable.
		
	while (x>0)     // until the number of digits is 0.
	{	
		int i=0,result=1;
		
		while (i<(x-1))   // I open a loop up to 1 minus the number of digits.(power loop)
		{
		result=result*10;  // Starting at 1 minus the number of digits takes power of 10
		i++;
		}
		
		temp2=a/result;   //I divide the entered number by the power of the ten  that is mines one  of the entered number's digit.
		temp4=temp2%10;   // then I get 10 to the mode and I get that digit and this continues from left to right.
		
		temp3=b/result;   //I divide the entered number by the power of the ten  that is mines one  of the entered number's digit.
		temp5=temp3%10;   // then I get 10 to the mode and I get that digit and this continues from left to right.
		
		//AND operations.
		
		if(temp4==1 && temp5==1){   //If the digits are checked 1 and 1 in 1 are written.
			int k=1;
			printf("%d",k);
		}	
		else if(temp4==0 && temp5==0){  //If the digits are checked 0 and 1 in 0 are written.
			int y=0;
			printf("%d",y);
		}
		else if(temp4==1 && temp5==0){   //If the digits are checked 1 and 0 in 1 are written.
			int z=0;
			printf("%d",z);
		}
		else if(temp4==0 && temp5==1){   //If the digits are checked 0 and 1 in 1 are written.
			int t=0;
			printf("%d",t);
		} 
		
		x--;   //the number of digits is constantly reduce by one.
	}
}

int main()
{
	int flag=0;   //I determined a control variable.
	int x,y;
	
	while(flag!=1){  //I made a loop to ask the user for numbers until the desired condition was met.(until the control variable becomes 1)
	
	printf("First integer :"); //I want the first number from the user.
	scanf("%d",&x);
	
	printf("second integer :");  //I want the second number from the user.
	scanf("%d",&y);
	
	int z=number_length(x,y); // I assigned the value returned from the function that finds the number length to a variable.
	int t=control(x,y);       //I assigned the value returned from the function that checks if the number is binary to a variable.
	
	if(z==1)  // if the number_length function return 1.
	{		
		if(t == 0)  //if the control function return 0.
		{
			printf("Integers should be binary,please enter 2 new integers.\n");
		}
		else   //if the control function return 1.
		{
			printf("%d AND %d = ",x,y); 
			andop (x,y);
			flag=1;   //The control variable becomes 1 because the desired condition is fulfilled.
		}
	}
	else   // if the number_length function return 0.
	{
		printf("Integers should have the same lenght,please enter 2 new integers.\n");
	}
}
	return 0;

}
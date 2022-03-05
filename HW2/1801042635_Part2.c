#include <stdio.h>
#include <math.h>
 
int number_length(int number)            //The function that finds the number of digits of the entered number.
 {
 	int z=floor(log10(number));           //performs log10 operation to the entered number and performs floor operation to the resulting result.
	
 	float y=z+1;						  //We add 1 to the last result and find the number of digits.
 	
 	printf("Your number has %.0f digits \n",y);
	
	return y;
}

int find_digit(int number, int index)    //Function showing which number is in which digit.
 {
 	int z=floor(log10(number));        //performs log10 operation to the entered number and performs floor operation to the resulting result.
	int t;
 	float y=z+1;                       //We add 1 to the last result and find the number of digits.
 	
	t=index%(int)y;                    //Remaining from the division of the index by the number of digits.
 	
 	if(100*y<index)                    //if the index is greater than the digit of the big number.
	{
		printf("invalid operation");
		return 0;
	}
 	else if(y == 1)                     //if the entered number is one digits.
 	{
 		printf("%d.th digit of the big number sequence :%d",index,number);	//index is the entered number.
	}
 	else if( y == 2)                    ////if the entered number is two digits
 	{
 		
 		if( index % 2 == 0)             // if the index is even number, ones digits is out.
		{
		printf("%d.th digit of the big number sequence :%d",index,number%10);	//I get the mode of the entered number.
		}
		else if( index % 2 == 1)         //if the index is odd number, tens digits is out.
		{
		printf("%d.th digit of the big number sequence :%d",index,number/10);	//I divide the entered number by 10.
		}
		
	}
 	
	else if (y == 3)                  //if the entered number is three digits.
 	{
 		if(t == 1)       			  //  If the division result is 1.
		printf("%d.th digit of the big number sequence :%d",index,number/100);	// we try to find the entered number's 100s digits.
		 
		else if(t == 2)               //If the division result is 2.
		printf("%d.th digit of the big number sequence :%d",index,(number/10)%10);    // we try to find the entered number's 10s digits.
		
		else if(t == 0)                 //If the division result is 0. 
		printf("%d.th digit of the big number sequence :%d",index,number%10);         //we try to find the entered number's 1s digits.
	}
 	else if(y == 4)                    //if the entered number is four digits.
 	{
 		if(t == 1)                    //  If the division result is 1.
		printf("%d.th digit of the big number sequence :%d",index,number/1000);	 // we try to find the entered number's 1.000s digits.
		 
		else if(t == 2)               //  If the division result is 2.
		printf("%d.th digit of the big number sequence :%d",index,(number/100)%10);     // we try to find the entered number's 100s digits.
		
		else if(t == 3)               //  If the division result is 3.
		printf("%d.th digit of the big number sequence :%d",index,(number/10)%10);	// we try to find the entered number's 10s digits.
		
		else if(t == 0)                 //  If the division result is 0.
		printf("%d.th digit of the big number sequence :%d",index,number%10);     // we try to find the entered number's 1s digits.
	}
 	else if(y == 5)              //if the entered number is five digits.
 	{
 		if(t == 1)                 //  If the division result is 1.
		printf("%d.th digit of the big number sequence :%d",index,number/10000);	 // we try to find the entered number's 10.000s digits.
		 
		else if(t == 2)             //  If the division result is 2.
		printf("%d.th digit of the big number sequence :%d",index,(number/1000)%10);   // we try to find the entered number's 1.000s digits.
		
		else if(t == 3)             //  If the division result is 3.
		printf("%d.th digit of the big number sequence :%d",index,(number/100)%10);	   // we try to find the entered number's 100s digits.
		
		else if(t == 4)                //  If the division result is 4.
		printf("%d.th digit of the big number sequence :%d",index,(number/10)%10);    // we try to find the entered number's 10s digits.
		
		else if(t == 0)              //  If the division result is 0.
		printf("%d.th digit of the big number sequence :%d",index,number%10);        // we try to find the entered number's 1s digits.
	}
 	else if(y == 6)                      //if the entered number is six digits.
 	{
 		if(t == 1)                       //  If the division result is 1.
		printf("%d.th digit of the big number sequence :%d",index,number/100000);	// we try to find the entered number's 100.000s digits
		 
		else if(t == 2)                   //  If the division result is 2.
		printf("%d.th digit of the big number sequence :%d",index,(number/10000)%10);     // we try to find the entered number's 10.000s digits
		
		else if(t == 3)                  //  If the division result is 3.
		printf("%d.th digit of the big number sequence :%d",index,(number/1000)%10);	// we try to find the entered number's 1.000s digits
		
		else if(t == 4)                  //  If the division result is 4.
		printf("%d.th digit of the big number sequence :%d",index,(number/100)%10);    // we try to find the entered number's 100s digits
		
		else if(t == 5)                 //  If the division result is 5.
		printf("%d.th digit of the big number sequence :%d",index,(number/10)%10);    // we try to find the entered number's 10s digits
		
		else if(t == 0)               //  If the division result is 0.
		printf("%d.th digit of the big number sequence :%d",index,number%10);          // we try to find the entered number's 1s digits
	}
}
int main()
{
	
	int x,t;
	printf("Enter a number(maximum 6 digits)\n");
	scanf("%d",&x);                                  //I want a number from the user.

	number_length(x);	//I call the function that finds the number of digits.
	
	printf("when your number is written 100 times next to each other,which digit of this number would you like to see? :\n");
	scanf("%d",&t);          //I want the user to check which digits.
	
	find_digit(x,t);        //I call the function which shows which number is in which digit.
	
	return 0;
}

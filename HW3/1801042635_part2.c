#include <stdio.h>
#include <math.h>

int isprime (int a)  // A function that checks whether the numbers up to the number entered by the user are prime,
{                    // or if not, which number is divided by prime.
	int i=0,j=0;
	for(i=2;i<a;i++)  //I started a 'loop' up to the number entered by the user.
	{
		int M=1;      //I determined a variable as M=1.
		for(j=2;j<=sqrt(i);j++)  // I take the square root of the numbers up to the number entered by the user.
		{                        // and I open a new loop.the loop goes to the square rooted number.
			
			if(i % j == 0 )      //I check that the numbers up to the number entered by the user can be divided into variable j in the 2nd loop.
			{
				M=0;             //If it is divisible, the M variable is 0.
				break;
			}
		}
		if(M==1)       //If variable M remains 1, the controlled variable i is the prime number.
		{
			printf("%d is a prime number\n",i);
		}
		else       // If variable M changes to 0, the controlled variable i can be divided into variable j in the 2nd loop.
		{
			printf("%d is not a prime number, it is dividible by %d \n",i,j);
		}
	}
	
}
int main()
{
	int x;
	printf("Please enter an integer:");        //I want a number from the user.
	scanf("%d",&x);
	
	isprime (x);                    //I assigned the number entered by the user to the function.
	
	return 0;
}
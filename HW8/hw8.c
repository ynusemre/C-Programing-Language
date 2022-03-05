#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void generate_hofstadters_sequence (int *arr, int n){
	if(n==-1){
		return;
	}
	generate_hofstadters_sequence(arr,--n);
	if(n<=1){
		arr[n]=1;
	}
	if(n>1){
		arr[n]=arr[n-arr[n-1]]+arr[n-arr[n-2]];
	}
}
int find_max (int arr[], int index, int max_value){
	if(arr[index]==0){
		return max_value;
	}
	if(max_value<arr[index]){
		max_value=arr[index];
	}
		find_max (arr,index+1, max_value);
}
int sum_array (int arr[]){
	if(*arr==0){
		return 0;		
	}	 
	return arr[0]+sum_array (arr+1);
}
void mean_value(int arr[], double *mean ,int index){
	/*the auxiliary function I use to find the average of the sequence.
	Adds the array until a minus of any index is  equal to zero in the array.
	and when any index equals zero, I divide that index by the sum.
	*/
	if(arr[index-1]!=0){
		(*mean)+=arr[index];
		
		if(arr[index]==0){
			(*mean)=(*mean)/index;
		}	
	mean_value(arr,mean,index+1);
	}
}
double std_array (int arr[], double *mean, int n, int index){
	//the function where I find the standard deviation.
	if(arr[index]!=0){
		n+=pow(arr[index]-*mean,2);
		
		if(arr[index+1]==0){
			*mean=sqrt(n/index);
			return *mean;
		}
	std_array (arr,mean,n,index+1);
	}
}
void fill_zero_arr(int arr[],int index){
	/*When the user wants to fill the array over and over again,
	I fill the entire array with zero so that it can operate on the last one.
	*/
	if(index==500){
		return;
	}
	arr[index]=0;
	fill_zero_arr(arr,index+1);
}
void print_sequence(int arr[],int index){
	//I print the sequence on the screen so that the user can apply other options better.
	if(index==0){
		return;
	}
	print_sequence(arr,--index);
	printf("%d ",arr[index]);

}
void menu_part1(){    //that function for the menu in the first part.
	int flag=0,option=0;
	int arr[500]={0};
	int max_value=0;
	int sum_number=0;
	double std=0.0;
	double mean=0.0;
	int n=0;
	int	counter=0;
		while(flag!=1){
			printf("\nPlease make your choice:\n\n");
			printf(" -------------------\n");
			printf("1)Fill Array\n");
			printf("2)Find Biggest Number\n");
			printf("3)Calculate Sum\n");
			printf("4)Calculate Standart Deviation\n");
			printf("5)Exit\n");
			
			printf("\nPlease select an option:");
			scanf("%d",&option);
			
		if(option==1){
			fill_zero_arr(arr,0);     	 
										   
			printf("Please enter a number:\n");
			scanf("%d",&n);
			generate_hofstadters_sequence (arr,n);
			
			print_sequence(arr,n);		
		}
		else if(option==2){
			int max_number=find_max (arr,0,max_value);
			printf("Max number of the sequence:%d\n",max_number);
		}
		else if(option==3){
			sum_number=sum_array(arr);
			printf("Sum of the sequence:%d\n",sum_number);
		}
		else if(option==4){
			mean_value(arr,&mean ,0);     							//return by reference(call by reference)
			
			std=std_array (arr,&mean,0,0);							//return by default
			printf("Standart Deviation of the sequence:%lf\n",std);
		}
		else if(option==5){
			flag=1;
		}
	}
}
char* remove_duplicates (char* str){
	/*If any letter is equal to the next letter, I shift the string starting from where it is located.
		and I call it from that address of that letter again.
		I do this until the end of the string.
	*/
	if(*str=='\0'){
		return 0;
	}
	if(*str!='\0'){
		if(*str == *(str+1)){
			int i=0;
			while(str[i] != '\0'){
				str[i]=str[i+1];
				i++;	
			}
			remove_duplicates(str);
		}
	}
		remove_duplicates(str+1);
	return str;
}
void menu(){
	int operation=0;
	int flag=0;
	char str[500];
	while(flag!=1){
		printf("\nWelcome to Homework 8, please chose one of the parts to continue\n\n");
		printf("-------------------------\n\n");
		printf("1) Execute Part 1\n");
		printf("2) Execute Part 2\n");
		printf("3) Execute Part 3\n");
		printf("4) Exit\n");
		scanf("%d",&operation);
		if(operation==1){
			menu_part1();
		}
		else if(operation==2){

		}
		else if(operation==3){
		printf("Please enter something:");
		scanf(" %[^\n]s",str);
		char *p=remove_duplicates (str);
		printf("%s",p);
		printf("\n");
		}
		else if(operation==4){
			printf("\nGoodbye\n");
			flag=1;
		}
		else {
			printf("TRY AGAIN.\n\n");
		}
	}
}
int main(){	
	menu();
	return 0;
}
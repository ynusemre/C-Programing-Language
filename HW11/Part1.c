#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

struct n{
	int data;
	struct n *next;
};
typedef struct n node;
///////////////////////////////////////////////////////////////////////////////////////////////////////////
int *read_array(char *filename,int *counter,int *size){
	/* Since you care about using dynamic arrays in our homework, 
	I tried to make all arrays dynamic in my homework as much as I can.*/
	/*In this function, I first read from the file and separated the comma comma with strtok function. 
	  Then I converted it to int with the atoi function.  
	The area increased by 200 as the number of received numbers increased by 200.
	I found the number of numbers by the number of commas in the file.
	I returned the dynamic arrays that I kept the numbers to the main function .*/

	FILE *fp=fopen(filename,"r");          // I open the given file to read it.
	
	if(!fp){							   // if file doesn't open....
		printf("File didn't open.");
		exit(1);
	}
	
	char *buffer_data=NULL;
	char *all_Number=NULL;
	int *numbers=NULL;

	char *ptr;

	buffer_data=(char*)calloc(1000000,sizeof(char));
	numbers=(int*)calloc(200,sizeof(int));

	*size=200*sizeof(int);

	if(buffer_data==NULL || numbers==NULL){
		printf("The place could not be reserved.");
	}

	fgets(buffer_data,1000000,fp);
	for(int i=0;i<1000000;i++){
		if(buffer_data[i]==','){
			*counter=*counter+1;
		}
	}
	fclose(fp);
	
	all_Number=strtok(buffer_data,",");
	int a=0;
	while(all_Number!=NULL){
		numbers[a]=atoi(all_Number);
		all_Number=strtok(NULL,",");
		a++;
		
		if(a % (*counter)==0){
			break;
		}
		if(a%200==0){
			numbers=(int*)realloc(numbers,(a+200)*sizeof(int));
			*size=(*size)+(200*sizeof(int));
		}
	}
	return numbers;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
node *read_linkedlist(char *filename,int *counter,int *size){
	/*I did the same as above for the linked list this time.
	bilgisayarım "linked list"in "size"ını 16 gösterdiği için kullanılan alanı +8 yaparak buldum.
	sizeof kullanmadım yani elimde olmayan sebeblerden ötürü istediğiniz alanı aşıyordu.
	I returned the linked list's struct that I kept the numbers to the main function.*/
	
	FILE *fp=fopen(filename,"r");           //I open the given file to read it.
	
	if(!fp){							    //if file doesn't open....
		printf("File didn't open.");
		exit(1);
	}
	
	char *buffer_data=NULL;
	char *all_Number=NULL;
	
	char *ptr;

	buffer_data=(char*)calloc(1000000,sizeof(char));
	node *root=(node*)malloc(sizeof(node));

	*size=8;

	if(buffer_data==NULL){
		printf("The place could not be reserved.");
	}

	fgets(buffer_data,1000000,fp);
	for(int i=0;i<1000000;i++){
		if(buffer_data[i]==','){
			*counter=(*counter)+1;
		}
	}
	fclose(fp);
	
	int counter2=0;
	node *iter;
	all_Number=strtok(buffer_data,",");
	
	while(all_Number!=NULL){
			
		if(counter2==0){
			root->data=atoi(all_Number);
			iter=root;
		}
		if(counter2!=0){
			iter->next=(node *)malloc(sizeof(node));
			iter=iter->next;
			iter->data=atoi(all_Number);
			iter->next=NULL;
			*size=(*size)+8;
		}
			
		all_Number=strtok(NULL,",");
		counter2++;
	}
	
	return root;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
float *stats_linkedlist(node *root,int counter){
	/*I perform the requested operations with linked list's struct.
	And it return the array thet hold the results to main function.*/
	node *iter;
	
	float *arr;
	arr=(float *)calloc(4,sizeof(float));

	float min=0.0,max=0.0,mean=0.0,std=0.0;
	float count=0.0;
	
	iter=root;
	min=iter->data;
	max=iter->data;

	for(int i=0;i<counter;i++){
		if(iter->data < min){
			min=iter->data;
		}
		if(iter->data > max){
			max=iter->data;
		}
		count+=iter->data;
		iter=iter->next;
	}
	
	mean=count/counter;
	count=0.0;
	iter=root;

	for(int i=0;i<counter;i++){
		count+=((iter->data-mean)*(iter->data-mean));
		iter=iter->next;
	}
	std=sqrt(count/(counter-1));

	arr[0]=min;
	arr[1]=max;
	arr[2]=mean;
	arr[3]=std;

	return arr;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
float *stats_array(int *numbers,int counter){
	/*I perform the requested operations with the dynamic array.
	And it return the array thet hold the results to main function.*/
	
	float *arr;
	arr=(float *)calloc(4,sizeof(float));
	
	float min=0.0,max=0.0,mean=0.0,std=0.0;
	float count=0.0;

	min=numbers[0];
	max=numbers[0];
	
	for(int i=0;i<counter;i++){
		if(numbers[i]<min){
			min=numbers[i];
		}
	}
	for(int i=0;i<counter;i++){
		if(numbers[i]>max){
			max=numbers[i];
		}
	}
	for(int i=0;i<counter;i++){
		count+=numbers[i];
	}
	mean=count/counter;
	count=0.0;		
	
	for(int i=0;i<counter;i++){
		count+=((numbers[i]-mean)*(numbers[i]-mean));
	}
	
	std=sqrt(count/(counter-1));	
	arr[0]=min;
	arr[1]=max;
	arr[2]=mean;
	arr[3]=std;
	
	return arr;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////

struct n2{
	int data;
	struct n2 *next;
};

typedef struct n2 node2;
///////////////////////////////////////////////////////////////////////////////////////////////////////////
struct d{
	int n1,n2;
};
typedef struct d diff;
///////////////////////////////////////////////////////////////////////////////////////////////////////////
void write_linked_list(node2 *r){
	//The function I created to print the linked list's members on the screen.
	printf("Linked list  :  ");
	while(r!=NULL){
		printf("%4d ",r->data);
		r=r->next;
	}
	printf("\n");
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
diff *comparison(int *p,node2 *root){
	/*I want the number of members of the dynamic arrray from the user first, 
	  and then I get the numbers from user as much as entered number of members.
	  I also fill these numbers into another array .
	  then,I ask the user how many elements they want to change.
	  Thus, the elements of the second created array are changed.
	  I fill the members of the linked list with second array.
	  so,I fill the linked list by assigning random values ​​to random indexes.
	  In other words, I am using the second array just to change the elements.
	  then i fill the different elements of the linked list and the dynamic array into the struct array that i dynamically created.
	  I return this struct array.*/
	
	int size=0;
	int counter=0,counter2=0;
	int index=0;

	printf("Please enter a size for Dynamic array and Linked list:\n");
	scanf("%d",&size);

	p=(int *)malloc(size*sizeof(int));	
	int *p2=(int *)malloc(size*sizeof(int));	
	
	printf("Please enter %d numbers for the Dynamic array:\n",size);
	
	for(int i=0;i<size;i++){
		scanf("%d",&p[i]);
	}
	for(int i=0;i<size;i++){
		p2[i]=p[i];
	}	
	
	srand(time(NULL));
	
	int flag=0;

	while(flag!=1){
		printf("how many index would you like to change?(Max %d size)\n",size);
		scanf("%d",&index);
		
		if(index<=size){
			flag=1;
		}
		else{
			printf("\nPlease do not exceed the size\n\n");
		}
	}
	
	printf("\n");
	int b[index];


	for(int i=0;i<index;i++){
		b[i]=rand()%size;
		counter2=0;
			for(int j=0;j<i;j++){
				if(b[i]==b[j]){
					counter2++;
					if(counter2==1){
						i=i-1;
					}
				}
			}
	}
	for(int i=0;i<index;i++){
		p2[b[i]]=rand()%100;
		if(p2[b[i]]==p[b[i]]){
			i=i-1;
		}
	}	
	
	node2 *iter;
	root=(node2*)malloc(sizeof(node2));

	for(int i=0;i<size;i++){
		if(counter==0){
			root->data=p2[i];
			iter=root;
		}
		if(counter!=0){
			iter->next=(node2 *)malloc(sizeof(node2));
			iter=iter->next;
			iter->data=p2[i];
			iter->next=NULL;
		}		
		counter++;
	}
	
	printf("Dynamic array:  ");
	for(int i=0;i<size;i++){
		printf("%4d ",p[i]);
	}
	
	printf("\n");
	write_linked_list(root);
	printf("\n\n");
	
	iter=root;
	
	int a=1;
	diff *number;
	number=(diff *)malloc(a*sizeof(diff));
	
	for(int i=0;i<size;i++){
		if(iter->data != p[i] ){
			number[a-1].n1=p[i];
			number[a-1].n2=iter->data;
			a=a+1;
			number=(diff *)realloc(number,a*sizeof(diff));
		}
	iter=iter->next;
	}	
	number[a-1].n1=-1;
	number[a-1].n2=-1;

	return number;
}

int main(){
//in the main function,I make the average of the working time of the functions in the first part.
///////////////////////////////////////////////////////////////////////////////////////////////////////////
	int counter=0;
	int size1=0,size2=0;
	float time1=0,time2=0,time3=0,time4=0;
	
	int *numbers;
	
	for(int i=0;i<4;i++){
		counter=0;
		size1=0;
		clock_t begin1 = clock();
		numbers=read_array("list.txt",&counter,&size1);
		clock_t end1 = clock();
		time1+=(float)(end1 - begin1) / CLOCKS_PER_SEC;
	}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
	float *arr;
	arr=(float *)calloc(4,sizeof(float));
	
	for(int i=0;i<4;i++){
		clock_t begin2 = clock();
		arr=stats_array(numbers,counter);
		clock_t end2 = clock();
		time2+=(float)(end2 - begin2) / CLOCKS_PER_SEC;
	}
	
	printf("**********************************************************************************\n");
	printf("----------(*read_array)----------\n");
	printf("Number of byte used:%d\n",size1);
	printf("Min     Max           Mean           STD\n");
	printf("%.2f    %.2f     %.2f      %.2f\n",arr[0],arr[1],arr[2],arr[3]);
	printf("**********************************************************************************\n");
	
	free(arr);
	printf("\n\n");
///////////////////////////////////////////////////////////////////////////////////////////////////////////
	node *root;
	for(int i=0;i<4;i++){
		counter=0;
		size2=0;
		clock_t begin3 = clock();
		root=read_linkedlist("list.txt",&counter,&size2);
		clock_t end3 = clock();
		time3+=(float)(end3 - begin3) / CLOCKS_PER_SEC;
	}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
	float *arr2;
	arr2=(float *)calloc(4,sizeof(float));
	
	for(int i=0;i<4;i++){
		clock_t begin4 = clock();
		arr2=stats_linkedlist(root,counter);
		clock_t end4 = clock();
		time4+=(float)(end4 - begin4) / CLOCKS_PER_SEC;
	}

	printf("**********************************************************************************\n");
	printf("--------(*read_linkedlist)--------\n");
	printf("Number of byte used:%d\n",size2);
	printf("Min     Max           Mean           STD\n");
	printf("%.2f    %.2f     %.2f      %.2f\n",arr2[0],arr2[1],arr2[2],arr2[3]);
	printf("**********************************************************************************\n");
	
	free(arr2);
	printf("\n\n");
///////////////////////////////////////////////////////////////////////////////////////////////////////////	
	printf("Average Time (Calculated 4 time) passed in (*read_array)          %f(s)\n",(time1/4));
	printf("Average Time (Calculated 4 time) passed in (*stats_array)         %f(s)\n",(time2/4));
	printf("Average Time (Calculated 4 time) passed in (*read_linkedlist)     %f(s)\n",(time3/4));
	printf("Average Time (Calculated 4 time) passed in (*stats_linkedlist)    %f(s)\n",(time4/4));
	printf("**********************************************************************************\n");
	printf("\n\n");
///////////////////////////////////////////////////////////////////////////////////////////////////////////	
	diff *number;
	
	int *p;
	node2 *root2;

	number=comparison(p,root2);

	printf("Numbers that are different:\n");
	for(int i=0;number[i].n1!=-1 && number[i].n2!=-1;i++){
		printf("%4d %-4d\n",number[i].n1,number[i].n2);
	}
///////////////////////////////////////////////////////////////////////////////////////////////////////////	
	
	return 0;
}
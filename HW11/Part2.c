#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

struct n2{
	int data;
	struct n2 *next;
};

typedef struct n2 node2;

struct d{
	int n1,n2;
};
typedef struct d diff;

void bastir(node2 *r){
	printf("Linked list  :  ");
	while(r!=NULL){
		printf("%3d ",r->data);
		r=r->next;
	}
	printf("\n");
}
diff *comparison(int *p,node2 *root){

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
		printf("%3d ",p[i]);
	}
	
	printf("\n");
	bastir(root);
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
	
	diff *number;
	
	int *p;
	node2 *root;

	number=comparison(p,root);

	printf("Numbers that are different:\n");
	for(int i=0;number[i].n1!=-1 && number[i].n2!=-1;i++){
		printf("%3d %-3d\n",number[i].n1,number[i].n2);
	}
	
	return 0;
}
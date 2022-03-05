#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void read_news(char buffer[500], char file_path[11], int is_Only_Title){

	FILE *fp=fopen(file_path,"r");

	char a;
	if(!fp){									//if file doesn't open....
		printf("File didn't open.");
		exit(1);
	}
	if(is_Only_Title==1){
		
		if(is_Only_Title==1){      //if is_Only_Title==1 ....
									//Only the headlines of the news are printed on the screen.
		int i=0;
		buffer[i]=fgetc(fp);	//that is getting characters from file
		while(!feof(fp)){
        	i++;                    //until the end of the file.
			buffer[i]=fgetc(fp);
		}
			for(int i=0;i<=500;i++){
				printf("%c",buffer[i]);       //Prints up to the 'new line' character.
				if(buffer[i]=='\n'){
					break;
				}
			}
		}
	}
	if(is_Only_Title==0){      //if is_Only_Title==0 ....
								//writes the news with its content.		
		int i=0;
		buffer[i]=fgetc(fp);   
		while(!feof(fp)){       //until the end of the file.
        	i++;
			buffer[i]=fgetc(fp);  //that is getting characters from file     
		}
			buffer[i]='\0';
			
			for(int i=0;i<=500;i++){
				printf("%c",buffer[i]);   //that is writing the characters until end of the file.
				if(buffer[i]=='\0'){
					break;
				}
			}
			printf("\n");
		}
	fclose(fp);
}
void append_file(char* file_path, char c){

	FILE *fp=fopen(file_path,"a");

	if(!fp){									//if file doesn't open....
		printf("File didn't open.");
		exit(1);
	}
	fprintf(fp,"%d",c);                          //writes the numbers of the readen news to the file.
	fclose(fp);

}
double f_func(int x){
	double y=((pow(x,3))-(pow(x,2))+2);    //f function.
	return y;
}
double g_func(double f(int x), int a){
	double count=0; 						//g function.
	
	count=pow(f(a),2);
	
	return count;
}
void read_magic_numbers(char buffer_magic[10],char buffer_news[500]){

	int option=0,t=0,k=0;
	double z=0,counter=0;
	int is_Only_Title=0;
	
	printf("Which news would you like to decrypt?:");
	scanf("%d",&option);

	if(option==1){                        //if the user wants to decrypt the first news.
		read_news(buffer_news,"news/1.txt",is_Only_Title);       //sending the buffer_news  array to read_news function.
		for(int i=0;i<=500;i++){	
			if(buffer_news[i]=='#'){   //if comes the # symbol in the buffer_news array...
				k=buffer_news[i+1];     //# The next element of this symbol, that is, the numbers is assigned to k.
				t=k-48;					//for recover numbers from their corresponding in the ascii table.
				z=g_func(f_func,t);     //that Sends the f function and the numbers that taken from the file to the g function.
				counter+=z;				//results are collected.
			}
		}
		printf("number of tests performed:%lf",counter);
	}
	if(option==2){     //if the user wants to decrypt the second news,the procedures applied in the first news are applied.
		read_news(buffer_news,"news/2.txt",is_Only_Title);
		for(int i=0;i<=500;i++){	
			if(buffer_news[i]=='#'){
				k=buffer_news[i+1];
				t=k-48;
				z=g_func(f_func,t);
				counter+=z;
			}
		}
		printf("number of sick people:%lf",counter);
	}
	if(option==3){   //if the user wants to decrypt the third news,the procedures applied in the first news are applied.
		read_news(buffer_news,"news/3.txt",is_Only_Title);
		for(int i=0;i<=500;i++){	
			if(buffer_news[i]=='#'){
				k=buffer_news[i+1];
				t=k-48;
				z=g_func(f_func,t);
				counter+=z;
			}
		}
		printf("number of deaths:%lf",counter);
	}
	if(option==4){      //if the user wants to decrypt the fourth news,the procedures applied in the first news are applied.
		read_news(buffer_news,"news/4.txt",is_Only_Title);
		for(int i=0;i<=500;i++){	
			if(buffer_news[i]=='#'){
				k=buffer_news[i+1];
				t=k-48;
				z=g_func(f_func,t);
				counter+=z;
				}
		}
		printf("expected number of sick people:%lf",counter);
	}
}
void menu(){
	int option2=0,flag=0,counter=0,option3=0,counter2=0,counter3=0,counter4=0;
	char buffer[500];
	char option,c,answer;
	
	int is_Only_Title=1;
	
	printf("************Daily Pres************\n\n");
	printf("Today's news are listed for you:\n");
												      ////Only the headlines of the news are printed on the screen.
	printf("Title of 1. new:");
	read_news(buffer,"news/1.txt",is_Only_Title);     
	printf("Title of 2. new:");
	read_news(buffer,"news/2.txt",is_Only_Title);
	printf("Title of 3. new:");
	read_news(buffer,"news/3.txt",is_Only_Title);
	printf("Title of 4. new:");
	read_news(buffer,"news/4.txt",is_Only_Title);
	

	while(flag !=1){
	is_Only_Title=0;
	printf("\nwhat do you want to do?\n");
	printf("a.Read a new\n");
	printf("b.List the readed news\n");
	printf("c.Get decrypted information from the news\n");

	scanf(" %c",&option);

		if(option =='a'){   //if the user wants to reading the news.
		
			printf("Which news do you want to read?:");
			scanf("%d",&option2);
		
			if(option2==1){     //if the user wants to read the first news.

			int t=0;
			char k;

			FILE *fp3=fopen("readed_news_id.txt","r");   //the file containing the news read is opened.
			
			if(!fp3){									//if file doesn't open....
				printf("File didn't open.");
				exit(1);
			}

			k=fgetc(fp3);				//I get the first character in the file.
			
			while(!feof(fp3)){			//loop that will read to the end of the file.
				t=(((int)k-48));		//characters from the file turn into numbers with using ascii.
				k=fgetc(fp3);			//The reason for subtracting 48 is 48 ascii is equal to 0.
										
					if(t ==1){            //If there is 1 in the news read, the counter is increased.
						counter++;		//Thus, when the news is wanted to be read again, the desired operation takes place.
					}
			}

				if(counter==0){						//it happens when  the user wants to read the news for the first time.
													//because the counter is equal to its initial value.
				read_news(buffer,"news/1.txt",is_Only_Title);
				c=1;
				append_file("readed_news_id.txt",c);
				}
				if(counter!=0){						//it happens when the user wants to read the news again.
													////because the counter doese not equal to its initial value.
					printf("this new is readed. Do you want to read again?Yes(1)/No(0)\n");
					scanf("%d",&option3);
					
					if(option3==1){
						read_news(buffer,"news/1.txt",is_Only_Title);
					}
					else{
						printf("Goodbye\n");
						break;
					}
				}
				counter++;
				}
			else if(option2==2){//If the user wants to read the second news, the procedures applied in the first news are applied.
				int t=0;
				char k;

				FILE *fp3=fopen("readed_news_id.txt","r");
			
				if(!fp3){									//if file doesn't open....
					printf("File didn't open.");
					exit(1);
				}
			
				k=fgetc(fp3);				
				while(!feof(fp3)){			
					t=(((int)k-48));		
					k=fgetc(fp3);			
								
						if(t ==2){
							counter2++;
						}
				}
				if(counter2==0){
				read_news(buffer,"news/2.txt",is_Only_Title);
				c=2;
				append_file("readed_news_id.txt",c);
				}
				if(counter2!=0){
					
					printf("this new is readed. Do you want to read again?Yes(1)/No(0)\n");
					scanf("%d",&option3);
					
					if(option3==1){
						read_news(buffer,"news/2.txt",is_Only_Title);
					}
					else{
						printf("Goodbye\n");
						break;
					}
				}
				
				counter2++;
			}
			else if(option2==3){//If the user wants to read the third news,the procedures applied in the first news are applied.
				
				int t=0;
				char k;

				FILE *fp3=fopen("readed_news_id.txt","r");
				
				if(!fp3){									//if file doesn't open....
					printf("File didn't open.");
					exit(1);
				}
			
				k=fgetc(fp3);				
					while(!feof(fp3)){			
						t=(((int)k-48));		
						k=fgetc(fp3);			
							
							if(t ==3){
								counter3++;
							}
					}
				
				if(counter3==0){
				read_news(buffer,"news/3.txt",is_Only_Title);
				c=3;
				append_file("readed_news_id.txt",c);
				}
				if(counter3!=0){
					
					printf("this new is readed. Do you want to read again?Yes(1)/No(0)\n");
					scanf("%d",&option3);
					
					if(option3==1){
						read_news(buffer,"news/3.txt",is_Only_Title);
					}
					else{
						printf("Goodbye\n");
						break;
					}
				}
				counter3++;
			}
			else if(option2==4){//If the user wants to read the fourth news, the procedures applied in the first news are applied.
				int t=0;
				char k;

				FILE *fp3=fopen("readed_news_id.txt","r");
			
				if(!fp3){									//if file doesn't open....
					printf("File didn't open.");
					exit(1);
				}
			
				k=fgetc(fp3);				
					while(!feof(fp3)){			
					t=(((int)k-48));		
					k=fgetc(fp3);			
					
						if(t ==4){
							counter4++;
						}
				}
				
				if(counter4==0){
				read_news(buffer,"news/4.txt",is_Only_Title);
				c=4;
				append_file("readed_news_id.txt",c);
				}
				if(counter4!=0){
					
					printf("this new is readed. Do you want to read again?Yes(1)/No(0)\n");
					scanf("%d",&option3);
					
					if(option3==1){
						read_news(buffer,"news/4.txt",is_Only_Title);
					}
					else{
						printf("Goodbye\n");
						break;
					}
				}
				
				counter4++;
			}
		}
		if(option == 'b'){//if the user wants to list the readen news .

			int t=0;
			char k;

			FILE *fp2=fopen("readed_news_id.txt","r");//the file that has the readen news is opened.
			
			if(!fp2){									//if file doesn't open....
				printf("File didn't open.");
				exit(1);
			}
			
			k=fgetc(fp2);				//I get the first character in the file.
			while(!feof(fp2)){			//loop that will read to the end of the file.
				t=(((int)k-48));		//characters from the file turn into numbers with using ascii.
				k=fgetc(fp2);				////The reason for subtracting 48 is 48 ascii is equal to 0.
								
				printf("%d. new is readed\n",t);  		//it prints  the readen news on screen.	
			}
			fclose(fp2);
		}
		if(option=='c'){           //if the user wants to decrypt the news.
			char buffer_magic[10];
			char buffer_news[500];
			read_magic_numbers(buffer_magic,buffer_news);
			printf("\n");
		}
		printf("Do you want to continue?Yes(y)/No(n):");
		scanf(" %c",&answer);
			if(answer == 'y'){
				flag=0;
			}	
			else{
				printf("Goodbye\n");
				flag=1;
			}
	}
}
int main()
{	
	menu();	
	return 0;
}
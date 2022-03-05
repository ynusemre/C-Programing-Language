#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

void menu ()		//menu that has all parts 
{
	printf("\n");                                                 
	printf("1-) Decrypt and print encryped_p1.img\n");				
	printf("2-) Decrypt and print encryped_p2.img\n");
	printf("3-) Switch on the tracking machine\n");
	printf("4-) Encrypt the message\n");
	printf("5-) Switch off\n");
}

char decrypt_numbers (int number)
{
	/*I use this function for part 1 and 2.because there are numbers in the file given in the 1st and 2nd part.
		this function turns these numbers into characters according to the given rule.*/
	switch(number)
	{
		case 0:
			{
				return ' ';
				break;
			}
		case 1:
			{
				return '-';
				break;
			}
		case 2:
			{
				return'_';
				break;
			}
		case 3:
			{
				return  '|';
				break;
			}
		case 4:
			{
				return  '/';
				break;
			}
		case 5:
			{
				return  '\\' ;
				break;
			}
		case 6:
			{
				return  'O';
				break;
			}
	}
}

void decrypt_and_print (char* file_path)
{
	int t=0;
	char k;
	FILE *fp=fopen(file_path,"r"); //file is opening in reading mode.
	
	if(!fp)
	{									//if file doesn't open....
		printf("File didn't open.");
		exit(1);
	}
	
	k=fgetc(fp);				//I get the first character in the file.
	while(!feof(fp))			//loop that will read to the end of the file.
	{
		t=(((int)k-48));		//characters from the file turn into numbers with using ascii.
								//The reason for subtracting 48 is 48 ascii is equal to 0.
 
		if(t==-38)				//if the new line character is read from the file, the new line is passed.
		{						//in the ascii,new line=10.
		printf("\n");
		k=fgetc(fp);
		}
		else			//if the newline character is not read, it will continue to be read in the file.			
		{									
		printf("%c",decrypt_numbers(t));
		k=fgetc(fp);
		}
		
	}
	fclose(fp);					//the file is closed. 
}
void deep_decrypt_and_print (char* file_path)
{
	char a,b,c;
	int count=0,z=0,x=0,y=0,t=0;
	
	FILE *fp=fopen(file_path,"r");
	
	if(!fp)
	{
		printf("File didn't open.");
		exit(1);
	}

	while(1)
	{						/*	In the second part, three characters are taken from the file in order.
		        				and these characters are converted to numbers.The given formula is applied and read as desired in the formula.
								For this, the cursor is shifted 2 units to the right in reading it.													
																						*/
		fscanf(fp,"%c",&a);	
		if(feof(fp)){
			break;
		}
		fscanf(fp,"%c",&b);	
		if(feof(fp)){
			break;
		}
		fscanf(fp,"%c",&c);
		if(feof(fp)){
			break;
		}
			x=((int)a-48);
			y=((int)b-48);
			z=((int)c-48);
		
		if(x==-38)   //If the first character in the triple reading becomes a new line character, 
					 //the new line is passed and the new character is read from the file and converted into a number.
		{
			fscanf(fp,"%c",&a);
			x=((int)a-48);
			printf("\n");
		}
		if(y==-38)     //If the second character read in triple reading is a new line character, the second and third characters become 0 as number.

		{
			y=0;
			z=0;
		}
		if(z==-38){      //If the last character read in triple reading is a new line character, that last character become zero as number.

			z=0;

		}
			count =0;
			count=(x+y+z);
			t=count%7;
			printf("%c",decrypt_numbers (t));
			fseek(fp,-2,SEEK_CUR);
			
	}		
	fclose(fp);
}
void refresh_position (int *X, int *Y, double *D, double *R)
{		
	/* The x coordinates of the map represent the horizontal axis and the y coordinates represent the vertical axis.  */
	double d,r;
	int a=1,b=1,m,n;
	
	n=*X;	//I used a pointer to keep the previous positions of the x and y coordinates.
	m=*Y;
	
	srand(time(NULL)); //For x and y coordinates,  random values between 1 and 11 is assigned.
	a=rand()%11+1;
	b=rand()%11+1;
	
	*X=b;			//The value that we assign randomly to the X pointer is assigned and this value is kept at "n" with the X pointer.
	*Y=a;		//The value that we assign randomly to the Y pointer is assigned and this value is kept at "m" with the Y pointer.	
	
	D=&d;
	R=&r;
	
	for(int i=1;i<=11;i++)
	{									//11 by 11 map.
		for(int j=1;j<=11;j++)
		{
			if(i==6 && j==6){			//the location of our camp is fixed and (6,6).
			printf("O\t");
			}
			else if(a==j && b==i){		//The enemy camp is constantly changing with random values.
			printf("E\t");
			
			}
			else{						//For the remaining locations on the map, dots are added at intervals.
			printf(".\t");
			}
		}
		printf("\n");
	}
	d=sqrt(pow(b-6,2)+pow(a-6,2)); //The distance between the enemy camp and our camp is calculated.
	r=sqrt(pow(b-n,2)+pow(a-m,2)); //Calculate the distance between the previous location of the enemy camp and the new location.
	printf("Enemies X position:%d, Y position:%d, Displacment=%.2lf , Distance to our camp:%.2lf\n",b,a,r,d);
	printf("Command waiting...:\n");
}
void track_machine () 
{
	int flag=0;
	int x=1,y=1;
	double d=0,r=0;
	
	for(int i=1;i<=11;i++)			//The first position of the enemy camp is (1,1). Loops created to show this in the first place.
	{
		for(int j=1;j<=11;j++)
		{
			if(i==6 && j==6){			//O(6,6).
			printf("O\t");
			}
			else if(i==1 && j==1){		//E(1,1).
			printf("E\t");
			}
			else{
			printf(".\t");
			}
		}
		printf("\n");
	}
	printf("\n");
						/* if the user presses R, the map reappears, 
						if pressed E, it exits this option and returns to the upper menu. 
						if the user chooses any option other than E and R, they are asked to choose one of E and R again.*/
	while(flag!=1){
		
		char option;
		printf("Please select a option(E,R)=");
		scanf(" %c",&option);
	
		if(option == 'R' ){				
			refresh_position (&x,&y,&d,&r);
		}
		else if(option == 'E'){
			
			flag=1;
		}
		else{
			printf("\ninvalid operation.Please select only E or R.\n");
		}
	}
}
char decrypt_characters (char character)
{						/*Since the file given in the fourth part are characters, 
						case and return statements have been replaced in these condition statements.
						And I added a case statement for the new line character.
	     													*/
	switch(character)
	{
		case ' ':
			{
				return 0;
				break;
			}
		case '-':
			{
				return 1;
				break;
			}
		case '_':
			{
				return 2;
				break;
			}
		case '|':
			{
				return  3;
				break;
			}
		case '/':
			{
				return  4;
				break;
			}
		case '\\':
			{
				return  5 ;
				break;
			}
		case 'O':
			{
				return  6;
				break;
			}
		case 10:           //When the character read from the file is the new line character, it returns 18 that i decided randomly.
		{
				return 18;
				break;
		}
	}
}
void encrypt_messages(char* file_name )
{
	char a,b,c;
	int count=0,z=0,x=0,y=0,r=0;
	int counter=0,counter2=0,counter3=0,counter4=0;//counter variables that I will use.
	
	FILE *fp=fopen(file_name,"r");//I open the given file to read it.

	FILE *fp2=fopen("encrypted_p4.img","w");//I open a new file to write.

	while(1)
	{	
		counter3=0;
			/* I apply these nested "if" conditions for the 0's set for each line in the formula we are asked to use in the 4th parth.*/
			//these operations are applied whenever a new line is started.
		if(counter==0)
		{	
			counter2=0;
								/* For example, 1234 written in the file, 
								0-0-1, 0-1-2, 1-2-3 , 2-3-4 file is read in this way and taken into account.*/
			if(counter2==0){
								//two zero are put in the file and one character is read.
			counter4=0;
			z=0;				// for the 0-0-1.
			y=0;
			fscanf(fp,"%c",&a);
			if(feof(fp)){
			break;
			}
			x=decrypt_characters (a);
				
			if(x==18)          //If the first character in the triple reading becomes a new line character, 
					 		   //the new line is passed.
			{	
				fprintf(fp2,"\n");
				counter4++;					//The counter4 is increased so that the x number is not processed.
			}
			if(counter4==0){				
											//if the number x is not 18, it is processed.
			count =0;
			count=(x+y+z);
			r=count%7;
			
			fprintf(fp2,"%d",r);
			
			fseek(fp,-1,SEEK_CUR);         //The cursor shifts one unit to the right and comes to indent.
			}
			counter2++;					
			}
			/* For example, 1234 written in the file, 
								0-0-1, 0-1-2, 1-2-3 , 2-3-4 file is read in this way and taken into account.*/

			if(counter2==1){			//for the 0-1-2.
			z=0;

			fscanf(fp,"%c",&a);
			if(feof(fp)){
			break;
			}
			x=decrypt_characters (a);
			
			fscanf(fp,"%c",&b);
			if(feof(fp)){
			break;
			}
			y=decrypt_characters (b);
												//If the first of the three characters taken from the file is a new line character

			if(x==18){							/*if  is x=18,so if the character a is a newline character,
												  The x, y and z numbers are taken as 0. They processed  and printed into the file three times.
												  Because While writing the file, x =18  becomes  two times , so at first 
												write the new line character, 
												and we move to the new line . 
												In the second, we print the result of the processing 3 times. */
				fprintf(fp2,"\n");
				count =0,y=0,z=0,x=0;
				count=(x+y+z);
				r=count%7;							
			
				fprintf(fp2,"%d%d%d",r,r,r);
			
				
				counter4++;
			}
			
			if(counter4==0){
			count =0;
			count=(x+y+z);
			r=count%7;
			
			fprintf(fp2,"%d",r);
			
			fseek(fp,-2,SEEK_CUR);   		//two units are shifted to the right so that the characters are taken from the file according to the formula
			}
			counter2++;
			}
			counter++;
		}
		/*    
		If the new line is not passed, three characters are taken from the file and processed as desired in the formula. 
		If the third character in the received trio is new line character, z = 18 becomes. 
		And proceed to the new line and continue writing to the file.*/
		fscanf(fp,"%c",&a);
		if(feof(fp)){
			break;
		}
		fscanf(fp,"%c",&b);	
		if(feof(fp)){
			break;
		}
		fscanf(fp,"%c",&c);
		if(feof(fp)){
			break;
		}
		
		x=decrypt_characters (a);
		y=decrypt_characters (b);
		z=decrypt_characters (c);
		
		if(z==18)
		{	
			fprintf(fp2,"\n");
			counter=0;
			
			counter3++;
		}
		
			
			if(counter3==0){
			count =0;
			count=(x+y+z);
			r=count%7;
			
			fprintf(fp2,"%d",r);
			
			fseek(fp,-2,SEEK_CUR);
			}
		
		
	}
	if(fp2){
		printf("It has been successfully written to the file.");
	}		
	fclose(fp);
	fclose(fp2);
}
int main()
{
	int flag=0;
	
	while(flag!=1)
{
	menu ();
	int option;
	
	printf("please select a option= \n");
	scanf(" %d",&option);
	
	if(option == 1)
	{
		decrypt_and_print ("encrypted_p1.img");
		printf("\n");
	}
	else if(option == 2)
	{
		deep_decrypt_and_print ("encrypted_p2.img");
	}
	else if(option == 3)
	{
		track_machine();
	}
	else if(option == 4)
	{
		encrypt_messages ("decrypted_p4.img");
	}
	else if(option == 5)
	{
		flag=1;
	}
}
	return 0;
}
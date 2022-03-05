#include <stdio.h>
#include <math.h> 

int draw_triangle(int side1,int side2, int side3)   //function that controls the draw of the triangle
 {
 	if(side1+side2>side3) 					// the triangle inequality theorem	
	{                                               	// If the sum of the two sides is larger than the other side 
		return 1;                                   	// the triangle can be drawn.
	}
	else if(side3+side2>side1)
	{
		return 1;
	}
	else if(side3+side1>side2)
	{
		return 1;
	}
	else 									
	{
		return 0;
	}
}

void type_triangle(int side1,int side2, int side3)     //The function that controls the types of the triangle.
{
	if(side1 == side2  && side1== side3 && side2==side3)    // if all sides are equal, it is equilateral triangle.
	{
	printf("It is an equilateral Triangle.");
	}
	else if (side1 != side2 && side1 != side3 && side2 != side3)  //If all the sides are different, it is scalene triangle.
	printf("It is an scalene Triangle.");
	
	else if (side1 == side2 )                          //if the two sides are equal and the other is different, it is an isosceles triangle.
	printf("It is an  isosceles  Triangle.");
	
	else if (side1 == side3 )                         //if the two sides are equal and the other is different, it is an isosceles triangle.
	printf("It is an  isosceles  Triangle.");
	
	else if (side2 == side3 )                         //if the two sides are equal and the other is different, it is an isosceles triangle.
	printf("It is an  isosceles  Triangle.");
}

int perimeter_triangle(int side1,int side2, int side3) //function that finds the perimeter of the triangle
{
	int perimeter=side1+side2+side3;                   //perimeter of triangle 
	return perimeter;
}
double area_triangle(int side1,int side2, int side3,int perimeter)   //function that finds the area of the triangle
{
	double p=(double)perimeter/2;                                //Area formula
	double Area=(sqrt(p*(p-side1)*(p-side2)*(p-side3)));         //Area formula
	return Area;
}

int main()
{
	int x,y,z;                                      //variables of the sides of the triangle
	
	printf("the length of the first side:");        //first side
	scanf("%d",&x);
	printf("the length of the second side:");       //second side
	scanf("%d",&y);
	printf("the length of the third side:");        //third side
	scanf("%d",&z);
	
	int perimeter=x+y+z;                            //perimeter of triangle 
	
	
	if(draw_triangle(x,y,z) == 1)                   //if the function returns 1
	{
	printf("According to the triangle inequality theorem,this triangle can be drawn.\n\n");
	}
	else if (draw_triangle(x,y,z) == 0)             //if the function returns 0
	{
	printf("According to the triangle inequality theorem,this triangle can not be drawn.\n\n");
	}
	
	type_triangle(x,y,z);
	
	printf("\n");
	
	printf("The perimeter of the triangle:%d \n",perimeter_triangle(x,y,z));         
	printf("The area of the triangle=%f",area_triangle(x,y,z,perimeter));
	
	return 0;
}

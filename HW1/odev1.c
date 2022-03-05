#include <stdio.h>

#include <math.h>

#include <stdlib.h>



void find_root()

{

	float a,b,c,e,g,f,h,d;//these are my variables.they are float because fractional roots.

	

	printf("Please Enter the first coefficient:");//this is coefficient of x^2

	scanf("%f",&a); 

	printf("Please Enter the second coefficient:");//this is coefficient of x

	scanf("%f",&b);

	printf("Please Enter the third coefficient:");//this is fixed number 

	scanf("%f",&c);

	

	if(a>=0)//i do this long if else for equation appearance.if user write the positive or zero number for coefficient of x^2.it will appear as +a 

	{

		if(b>=0)//if user write the positive or zero number for coefficient of x.it will appear as +b 

		{

			if(c>=0)//if user write the positive or zero number for fixed number.it will appear as +c

			{

				d=b*b-4*a*c;//calculation of discriminant

				e=-b-sqrt(d);//

				g=-b+sqrt(d);//for calculation of function roots

				f=e/(2*a);//function root

				h=g/(2*a);//function's other root

				if(d<0) //if d is less than zero, there is no root.

				{

				printf("Output >Your equation +%.0fx^2 +%.0fx +%.0f   does not have any real roots ",a,b,c);

				}

				else//if d is greater than zero, there is a root.

				{

				printf("Output >Your equation +%.0fx^2 +%.0fx +%.0f  have real roots {%.1f,%.1f}",a,b,c,f,h);//this .1f expression for the fractional roots.

				}

			}

			if(c<0)// if user write the negative number for fixed number.it will appear as -c

			{

				d=b*b-4*a*c;//calculation of discriminant

				e=-b-sqrt(d);//

				g=-b+sqrt(d);//for calculation of function roots

				f=e/(2*a);//function root

				h=g/(2*a);//function's other root

				if(d<0) //if d is less than zero, there is no root.

				{

				printf("Output >Your equation +%.0fx^2 +%.0fx %.0f   does not have any real roots ",a,b,c);

				}

				else//if d is greater than zero, there is a root.

				{

				printf("Output >Your equation +%.0fx^2 +%.0fx %.0f  have real roots {%.1f,%.1f}",a,b,c,f,h);//this .1f expression for the fractional roots.

				}

			}

		}

		if(b<0)//if user write the negative number for coefficient of x.it will appear as -b 

		{

			if(c>=0)//if user write the positive or zero number for fixed number.it will appear as +c

			{

				d=b*b-4*a*c;//calculation of discriminant

				e=-b-sqrt(d);//

				g=-b+sqrt(d);//for calculation of function roots

				f=e/(2*a);//function root

				h=g/(2*a);//function's other root

				if(d<0)//if d is less than zero, there is no root.

				{

				printf("Output >Your equation +%.0fx^2 %.0fx +%.0f   does not have any real roots ",a,b,c);

				}

				else //if d is greater than zero, there is a root.

				{

				printf("Output >Your equation +%.0fx^2 %.0fx +%.0f  have real roots {%.1f,%.1f}",a,b,c,f,h);//this .1f expression for the fractional roots.

				}

			}

			if(c<0)//if user write the negative number for fixed number.it will appear as -c

			{

				d=b*b-4*a*c;//calculation of discriminant

				e=-b-sqrt(d);//

				g=-b+sqrt(d);//for calculation of function roots

				f=e/(2*a);//function root

				h=g/(2*a);//function's other root

				if(d<0)//if d is less than zero, there is no root.

				{

				printf("Output >Your equation +%.0fx^2 %.0fx %.0f   does not have any real roots ",a,b,c);

				}

				else //if d is greater than zero, there is a root.

				{

				printf("Output >Your equation +%.0fx^2 %.0fx %.0f  have real roots {%.1f,%.1f}",a,b,c,f,h);//this .1f expression for the fractional roots.

				}

			}	

		}

	}

	else if(a<0)//if user write the negative number for coefficient of x^2.it will appear as -a

	{

		if(b>=0)//if user write the positive or zero number for coefficient of x.it will appear as +b 

		{

			if(c>=0)//if user write the positive or zero number for fixed number.it will appear as +c

			{

				d=b*b-4*a*c;//calculation of discriminant

				e=-b-sqrt(d);//

				g=-b+sqrt(d);//for calculation of function roots

				f=e/(2*a);//function root

				h=g/(2*a);//function's other root

				if(d<0)//if d is less than zero, there is no root.

				{

				printf("Output >Your equation %.0fx^2 +%.0fx +%.0f   does not have any real roots ",a,b,c);

				}

				else

				{

				printf("Output >Your equation %.0fx^2 +%.0fx +%.0f  have real roots {%.1f,%.1f}",a,b,c,f,h);//this .1f expression for the fractional roots.

				}

			}

			if(c<0)//if user write the negative number for fixed number.it will appear as -c

			{

				d=b*b-4*a*c;//calculation of discriminant

				e=-b-sqrt(d);//

				g=-b+sqrt(d);//for calculation of function roots

				f=e/(2*a);//function root

				h=g/(2*a);//function's other root

				if(d<0) //if d is less than zero, there is no root.

				{

				printf("Output >Your equation %.0fx^2 +%.0fx %.0f   does not have any real roots ",a,b,c);

				}

				else //if d is greater than zero, there is a root.

				{

				printf("Output >Your equation %.0fx^2 +%.0fx %.0f  have real roots {%.1f,%.1f}",a,b,c,f,h);//this .1f expression for the fractional roots.

				}

			}

		}

		if(b<0)//if user write the negative number for coefficient of x.it will appear as -b

		{

			if(c>=0)//if user write the positive or zero number for fixed number.it will appear as +c

			{

				d=b*b-4*a*c;//calculation of discriminant

				e=-b-sqrt(d);//

				g=-b+sqrt(d);//for calculation of function roots

				f=e/(2*a);//function root

				h=g/(2*a);//function's other root

				if(d<0) //if d is less than zero, there is no root.

				{

				printf("Output >Your equation %.0fx^2 %.0fx +%.0f   does not have any real roots ",a,b,c);

				}

				else //if d is greater than zero, there is a root.

				{

				printf("Output >Your equation %.0fx^2 %.0fx +%.0f  have real roots {%.1f,%.1f}",a,b,c,f,h);//this .1f expression for the fractional roots.

				}

			}

			if(c<0)//if user write the negative number for fixed number.it will appear as -c

			{

				d=b*b-4*a*c;//calculation of discriminant

				e=-b-sqrt(d);//

				g=-b+sqrt(d);//for calculation of function roots

				f=e/(2*a);//function root

				h=g/(2*a);//function's other root

				if(d<0) //if d is less than zero, there is no root.

				{

				printf("Output >Your equation %.0fx^2 %.0fx %.0f   does not have any real roots ",a,b,c);

				}

				else //if d is greater than zero, there is a root.

				{

				printf("Output >Your equation %.0fx^2 %.0fx %.0f  have real roots {%.1f,%.1f}",a,b,c,f,h);//this .1f expression for the fractional roots.

				}

			}

		}

	}



}

void find_newtonian_root() 

{

	float a,b,c,g,f,h,d,e,s,t,r,u,n,m;//these are my variables.

	float x,y,z,l,k;//these are my variables.

	

	printf("Please Enter the first coefficient:");//this is coefficient of x^2

	scanf("%f",&a);

	printf("Please Enter the second coefficient:");//this is coefficient of x

	scanf("%f",&b);

	printf("Please Enter the third coefficient:");//this is fixed number

	scanf("%f",&c);

	printf("Please Enter the initial:");// this is initial x value(x0).

	scanf("%f",&e);

	f=e-(((a*e*e)+(b*e)+c)/((2*a*e)+b));//this equation for the x1 value.

	g=f-(((a*f*f)+(b*f)+c)/((2*a*f)+b));//this equation for the x2 value.

	h=g-(((a*g*g)+(b*g)+c)/((2*a*g)+b));//this equation for the x3 value.

	d=h-(((a*h*h)+(b*h)+c)/((2*a*h)+b));//this equation for the x4 value.

	s=d-(((a*d*d)+(b*d)+c)/((2*a*d)+b));//this equation for the x5 value.

	t=((a*f*f)+(b*f)+c);//this equation for the f(x1) value.

	r=((a*g*g)+(b*g)+c);//this equation for the f(x2) value.

	u=((a*h*h)+(b*h)+c);//this equation for the f(x3) value.

	n=((a*d*d)+(b*d)+c);//this equation for the f(x4) value.

	m=((a*s*s)+(b*s)+c);//this equation for the f(x5) value.

	

	if(a>=0)//i do this long if else for equation appearance.if user write the positive or zero number for coefficient of x^2.it will appear as +a

	{

		if(b>=0)//if user write the positive or zero number for coefficient of x.it will appear as +b

		{ 

			if(c>=0)//if user write the positive or zero number for fixed number.it will appear as +c

			{     

				k=b*b-4*a*c;  //calculation of discriminant

				x=-b-sqrt(k); //

				y=-b+sqrt(k); //for calculation of function roots

				z=x/(2*a);    //function root

				l=y/(2*a);	  //function's other root

			printf("Output >Your equation +%.0fx^2 %.0fx %.0f   and iterations are \n ",a,b,c);

			printf(" step         x                f(x)            Diffrence\n");

			if(f-z<f-l)		//this "if" for the difference value.i find the nearst root the to x1 value.and i do this for each root(z and l are root).

			{

			printf("  x1         %.4f           %.4f            %.4f         \n",f,t,f-z);

			}

		 	if(f-z>f-l)     //this "if" for the difference value.i find the nearst root the to x1 value.and i do this for each root(z and l are root).

		 	{

		 	printf("  x1         %.4f           %.4f            %.4f         \n",f,t,f-l);

			}

		 	if(g-z<g-l)		//this "if" for the difference value.i find the nearst root the to x2 value.and i do this for each root(z and l are root).

			{

			printf("  x2         %.4f           %.5f            %.4f         \n",g,r,g-z);

			}

		    if(g-z>g-l)		//this "if" for the difference value.i find the nearst root the to x2 value.and i do this for each root(z and l are root).

			{

			printf("  x2         %.4f           %.5f            %.4f         \n",g,r,g-l);

			}

		 	if(h-z>h-l)		//this "if" for the difference value.i find the nearst root the to x3 value.and i do this for each root(z and l are root).

			{

			printf("  x3         %.4f           %.5f            %.4f         \n",h,u,h-l);

			}

			if(h-z<h-l)		//this "if" for the difference value.i find the nearst root the to x3 value.and i do this for each root(z and l are root).

			{

			printf("  x3         %.4f           %.5f            %.4f         \n",h,u,h-z);

			}

			if(d-z>d-l)		//this "if" for the difference value.i find the nearst root the to x4 value.and i do this for each root(z and l are root).

			{

			printf("  x4         %.4f           %.5f            %.4f         \n",d,n,d-l);

			}

			if(d-z<d-l)		//this "if" for the difference value.i find the nearst root the to x4 value.and i do this for each root(z and l are root).

			{

			printf("  x4         %.4f           %.5f            %.4f         \n",d,n,d-z);

			}

			if(s-z>s-l)		//this "if" for the difference value.i find the nearst root the to x5 value.and i do this for each root(z and l are root).

			{

			printf("  x5         %.4f           %.5f            %.4f         \n",s,m,s-l);

			}

			if(s-z<s-l)		//this "if" for the difference value.i find the nearst root the to x5 value.and i do this for each root(z and l are root).

			{

			printf("  x5         %.4f           %.5f            %.4f         \n",s,m,s-z);

			}

			}

			

			if(c<0)//if user write the negative number for fixed number.it will appear as -c

			{

				k=b*b-4*a*c;    //calculation of discriminant

				x=-b-sqrt(k);   //

				y=-b+sqrt(k);   //for calculation of function roots

				z=x/(2*a);      //function root

				l=y/(2*a);	    //function's other root

			printf("Output >Your equation +%.0fx^2 %.0fx %.0f   and iterations are \n ",a,b,c);

			printf(" step         x                f(x)            Diffrence\n");

			if(f-z<f-l)		//this "if" for the difference value.i find the nearst root the to x1 value.and i do this for each root(z and l are root).

			{

			printf("  x1         %.4f           %.4f            %.4f         \n",f,t,f-z);

			}

		 	if(f-z>f-l)    //this "if" for the difference value.i find the nearst root the to x1 value.and i do this for each root(z and l are root).

		 	{

		 	printf("  x1         %.4f           %.4f            %.4f         \n",f,t,f-l);

			}

		 	if(g-z<g-l)		//this "if" for the difference value.i find the nearst root the to x2 value.and i do this for each root(z and l are root).

			{

			printf("  x2         %.4f           %.5f            %.4f         \n",g,r,g-z);

			}

		    if(g-z>g-l)		//this "if" for the difference value.i find the nearst root the to x2 value.and i do this for each root(z and l are root).

			{

			printf("  x2         %.4f           %.5f            %.4f         \n",g,r,g-l);

			}

		 	if(h-z>h-l)		//this "if" for the difference value.i find the nearst root the to x3 value.and i do this for each root(z and l are root).

			{

			printf("  x3         %.4f           %.5f            %.4f         \n",h,u,h-l);

			}

			if(h-z<h-l)		//this "if" for the difference value.i find the nearst root the to x3 value.and i do this for each root(z and l are root).

			{

			printf("  x3         %.4f           %.5f            %.4f         \n",h,u,h-z);

			}

			if(d-z>d-l)		//this "if" for the difference value.i find the nearst root the to x4 value.and i do this for each root(z is a root).

			{

			printf("  x4         %.4f           %.5f            %.4f         \n",d,n,d-l);

			}

			if(d-z<d-l)		//this "if" for the difference value.i find the nearst root the to x4 value.and i do this for each root(z and l are root).

			{

			printf("  x4         %.4f           %.5f            %.4f         \n",d,n,d-z);

			}

			if(s-z>s-l)		//this "if" for the difference value.i find the nearst root the to x5 value.and i do this for each root(z is a root).

			{

			printf("  x5         %.4f           %.5f            %.4f         \n",s,m,s-l);

			}

			if(s-z<s-l)		//this "if" for the difference value.i find the nearst root the to x5 value.and i do this for each root(z and l are root).

			{

			printf("  x5         %.4f           %.5f            %.4f         \n",s,m,s-z);

			}

			}

		}

		

		if(b<0)//if user write the negative number for coefficient of x.it will appear as -b

		{

			if(c>=0)//if user write the positive or zero number for fixed number.it will appear as +c

			{

				k=b*b-4*a*c;   //calculation of discriminant

				x=-b-sqrt(k);  //

				y=-b+sqrt(k);  //for calculation of function roots

				z=x/(2*a);     //function root

				l=y/(2*a);	   //function's other root

			printf("Output >Your equation +%.0fx^2 %.0fx %.0f   and iterations are \n ",a,b,c);

			printf(" step         x                f(x)            Diffrence\n");

			if(f-z<f-l)	    //this "if" for the difference value.i find the nearst root the to x1 value.and i do this for each root(z and l are root).	

			{

			printf("  x1         %.4f           %.4f            %.4f         \n",f,t,f-z);

			}

		 	if(f-z>f-l)    //this "if" for the difference value.i find the nearst root the to x1 value.and i do this for each root(l is a root).

		 	{

		 	printf("  x1         %.4f           %.4f            %.4f         \n",f,t,f-l);

			}

		 	if(g-z<g-l)	   //this "if" for the difference value.i find the nearst root the to x2 value.and i do this for each root(z is a root).	

			{

			printf("  x2         %.4f           %.5f            %.4f         \n",g,r,g-z);

			}

		    if(g-z>g-l)		//this "if" for the difference value.i find the nearst root the to x2 value.and i do this for each root(z and l are root).

			{

			printf("  x2         %.4f           %.5f            %.4f         \n",g,r,g-l);

			}

		 	if(h-z>h-l)	   //this "if" for the difference value.i find the nearst root the to x3 value.and i do this for each root(z is a root).	

			{

			printf("  x3         %.4f           %.5f            %.4f         \n",h,u,h-l);

			}

			if(h-z<h-l)		//this "if" for the difference value.i find the nearst root the to x3 value.and i do this for each root(z and l are root).

			{

			printf("  x3         %.4f           %.5f            %.4f         \n",h,u,h-z);

			}

			if(d-z>d-l)		//this "if" for the difference value.i find the nearst root the to x4 value.and i do this for each root(z and l are root).

			{

			printf("  x4         %.4f           %.5f            %.4f         \n",d,n,d-l);

			}

			if(d-z<d-l)		//this "if" for the difference value.i find the nearst root the to x4 value.and i do this for each root(z and l are root).

			{

			printf("  x4         %.4f           %.5f            %.4f         \n",d,n,d-z);

			}

			if(s-z>s-l)		//this "if" for the difference value.i find the nearst root the to x5 value.and i do this for each root(z and l are root).

			{

			printf("  x5         %.4f           %.5f            %.4f         \n",s,m,s-l);

			}

			if(s-z<s-l)		//this "if" for the difference value.i find the nearst root the to x5 value.and i do this for each root(z and l are root).

			{

			printf("  x5         %.4f           %.5f            %.4f         \n",s,m,s-z);

			}

			}

			

			if(c<0)//if user write the negative number for fixed number.it will appear as -c

		{

				k=b*b-4*a*c;    //calculation of discriminant

				x=-b-sqrt(k);   //

				y=-b+sqrt(k);  //for calculation of function roots

				z=x/(2*a);     //function root

				l=y/(2*a);	   //function's other root

			printf("Output >Your equation +%.0fx^2 %.0fx %.0f   and iterations are \n ",a,b,c);

			printf(" step         x                f(x)            Diffrence\n");

			if(f-z<f-l)		//this "if" for the difference value.i find the nearst root the to x1 value.and i do this for each root(z and l are root).

			{

			printf("  x1         %.4f           %.4f            %.4f         \n",f,t,f-z);

			}

		 	if(f-z>f-l)      //this "if" for the difference value.i find the nearst root the to x1 value.and i do this for each root(z and l are root).

		 	{

		 	printf("  x1         %.4f           %.4f            %.4f         \n",f,t,f-l);

			}

		 	if(g-z<g-l)		//this "if" for the difference value.i find the nearst root the to x2 value.and i do this for each root(z and l are root).

			{

			printf("  x2         %.4f           %.5f            %.4f         \n",g,r,g-z);

			}

		    if(g-z>g-l)		//this "if" for the difference value.i find the nearst root the to x2 value.and i do this for each root(z and l are root).

			{

			printf("  x2         %.4f           %.5f            %.4f         \n",g,r,g-l);

			}

		 	if(h-z>h-l)		//this "if" for the difference value.i find the nearst root the to x3 value.and i do this for each root(z and l are root).

			{

			printf("  x3         %.4f           %.5f            %.4f         \n",h,u,h-l);

			}

			if(h-z<h-l)		//this "if" for the difference value.i find the nearst root the to x3 value.and i do this for each root(z and l are root).

			{

			printf("  x3         %.4f           %.5f            %.4f         \n",h,u,h-z);

			}

			if(d-z>d-l)		//this "if" for the difference value.i find the nearst root the to x4 value.and i do this for each root(z and l are root).

			{

			printf("  x4         %.4f           %.5f            %.4f         \n",d,n,d-l);

			}

			if(d-z<d-l)		//this "if" for the difference value.i find the nearst root the to x4 value.and i do this for each root(z and l are root).

			{

			printf("  x4         %.4f           %.5f            %.4f         \n",d,n,d-z);

			}

			if(s-z>s-l)		//this "if" for the difference value.i find the nearst root the to x5 value.and i do this for each root(z and l are root).

			{

			printf("  x5         %.4f           %.5f            %.4f         \n",s,m,s-l);

			}

			if(s-z<s-l)		//this "if" for the difference value.i find the nearst root the to x5 value.and i do this for each root(z and l are root).

			{

			printf("  x5         %.4f           %.5f            %.4f         \n",s,m,s-z);

			}

		 }	

		}

	}

	else if(a<0)//if user write the negative number for coefficient of x^2.it will appear as -a

	{

		if(b>=0)//if user write the positive or zero number for coefficient of x.it will appear as +b

		{

			if(c>=0)//if user write the positive or zero number for fixed number.it will appear as +c

			{

				k=b*b-4*a*c;   //calculation of discriminant

				x=-b-sqrt(k);  //

				y=-b+sqrt(k);  //for calculation of function roots

				z=x/(2*a);     //function root  

				l=y/(2*a);	   //function's other root

			printf("Output >Your equation +%.0fx^2 %.0fx %.0f   and iterations are \n ",a,b,c);

			printf(" step         x                f(x)            Diffrence\n");

			if(f-z<f-l)		//this "if" for the difference value.i find the nearst root the to x1 value.and i do this for each root(z and l are root).

			{

			printf("  x1         %.4f           %.4f            %.4f         \n",f,t,f-z);

			}

		 	if(f-z>f-l)     //this "if" for the difference value.i find the nearst root the to x1 value.and i do this for each root(z and l are root).

		 	{

		 	printf("  x1         %.4f           %.4f            %.4f         \n",f,t,f-l);

			}

		 	if(g-z<g-l)		//this "if" for the difference value.i find the nearst root the to x2 value.and i do this for each root(z and l are root).

			{

			printf("  x2         %.4f           %.5f            %.4f         \n",g,r,g-z);

			}

		    if(g-z>g-l)		//this "if" for the difference value.i find the nearst root the to x2 value.and i do this for each root(z and l are root).

			{

			printf("  x2         %.4f           %.5f            %.4f         \n",g,r,g-l);

			}

		 	if(h-z>h-l)		//this "if" for the difference value.i find the nearst root the to x3 value.and i do this for each root(z and l are root).

			{

			printf("  x3         %.4f           %.5f            %.4f         \n",h,u,h-l);

			}

			if(h-z<h-l)		//this "if" for the difference value.i find the nearst root the to x3 value.and i do this for each root(z and l are root).

			{

			printf("  x3         %.4f           %.5f            %.4f         \n",h,u,h-z);

			}

			if(d-z>d-l)		//this "if" for the difference value.i find the nearst root the to x4 value.and i do this for each root(z and l are root).

			{

			printf("  x4         %.4f           %.5f            %.4f         \n",d,n,d-l);

			}

			if(d-z<d-l)		//this "if" for the difference value.i find the nearst root the to x4 value.and i do this for each root(z and l are root).

			{

			printf("  x4         %.4f           %.5f            %.4f         \n",d,n,d-z);

			}

			if(s-z>s-l)		//this "if" for the difference value.i find the nearst root the to x5 value.and i do this for each root(z and l are root).

			{

			printf("  x5         %.4f           %.5f            %.4f         \n",s,m,s-l);

			}

			if(s-z<s-l)		//this "if" for the difference value.i find the nearst root the to x5 value.and i do this for each root(z and l are root).

			{

			printf("  x5         %.4f           %.5f            %.4f         \n",s,m,s-z);

			}

			}

			if(c<0)//if user write the negative number for fixed number.it will appear as -c

			{

				k=b*b-4*a*c;    //calculation of discriminant

				x=-b-sqrt(k);   //

				y=-b+sqrt(k);   //for calculation of function roots

				z=x/(2*a);      //function root

				l=y/(2*a);	    //function's other root

			printf("Output >Your equation +%.0fx^2 %.0fx %.0f   and iterations are \n ",a,b,c);

			printf(" step         x                f(x)            Diffrence\n");

			if(f-z<f-l)		 //this "if" for the difference value.i find the nearst root the to x1 value.and i do this for each root(z and l are root).

			{

			printf("  x1         %.4f           %.4f            %.4f         \n",f,t,f-z);

			}

		 	if(f-z>f-l)      //this "if" for the difference value.i find the nearst root the to x1 value.and i do this for each root(z and l are root).  

		 	{

		 	printf("  x1         %.4f           %.4f            %.4f         \n",f,t,f-l);

			}

		 	if(g-z<g-l)		//this "if" for the difference value.i find the nearst root the to x2 value.and i do this for each root(z and l are root).

			{

			printf("  x2         %.4f           %.5f            %.4f         \n",g,r,g-z);

			}

		    if(g-z>g-l)		//this "if" for the difference value.i find the nearst root the to x2 value.and i do this for each root(z and l are root).

			{

			printf("  x2         %.4f           %.5f            %.4f         \n",g,r,g-l);

			}

		 	if(h-z>h-l)		//this "if" for the difference value.i find the nearst root the to x3 value.and i do this for each root(z and l are root).

			{

			printf("  x3         %.4f           %.5f            %.4f         \n",h,u,h-l);

			}

			if(h-z<h-l)		//this "if" for the difference value.i find the nearst root the to x3 value.and i do this for each root(z and l are root).

			{

			printf("  x3         %.4f           %.5f            %.4f         \n",h,u,h-z);

			}

			if(d-z>d-l)		//this "if" for the difference value.i find the nearst root the to x4 value.and i do this for each root(z and l are root).

			{

			printf("  x4         %.4f           %.5f            %.4f         \n",d,n,d-l);

			}

			if(d-z<d-l)		//this "if" for the difference value.i find the nearst root the to x4 value.and i do this for each root(z and l are root).

			{

			printf("  x4         %.4f           %.5f            %.4f         \n",d,n,d-z);

			}

			if(s-z>s-l)		//this "if" for the difference value.i find the nearst root the to x5 value.and i do this for each root(z and l are root).

			{

			printf("  x5         %.4f           %.5f            %.4f         \n",s,m,s-l);

			}

			if(s-z<s-l)		//this "if" for the difference value.i find the nearst root the to x5 value.and i do this for each root(z and l are root).

			{

			printf("  x5         %.4f           %.5f            %.4f         \n",s,m,s-z);

			}	

			}

		if(b<0)//if user write the negative number for coefficient of x.it will appear as -b

		{

			if(c>=0)//if user write the positive or zero number for fixed number.it will appear as +c

			{

				k=b*b-4*a*c;    //calculation of discriminant

				x=-b-sqrt(k);   //

				y=-b+sqrt(k);   //for calculation of function roots

				z=x/(2*a);      //function root  

				l=y/(2*a);	    //function's other root

			printf("Output >Your equation +%.0fx^2 %.0fx %.0f   and iterations are \n ",a,b,c);

			printf(" step         x                f(x)            Diffrence\n");

			if(f-z<f-l)		//this "if" for the difference value.i find the nearst root the to x1 value.and i do this for each root(z and l are root).

			{

			printf("  x1         %.4f           %.4f            %.4f         \n",f,t,f-z);

			}

		 	if(f-z>f-l)     //this "if" for the difference value.i find the nearst root the to x1 value.and i do this for each root(z and l are root).

		 	{

		 	printf("  x1         %.4f           %.4f            %.4f         \n",f,t,f-l);

			}

		 	if(g-z<g-l)		//this "if" for the difference value.i find the nearst root the to x2 value.and i do this for each root(z and l are root).

			{

			printf("  x2         %.4f           %.5f            %.4f         \n",g,r,g-z);

			}

		    if(g-z>g-l)		//this "if" for the difference value.i find the nearst root the to x2 value.and i do this for each root(z and l are root).

			{

			printf("  x2         %.4f           %.5f            %.4f         \n",g,r,g-l);

			}

		 	if(h-z>h-l)		//this "if" for the difference value.i find the nearst root the to x3 value.and i do this for each root(z and l are root).

			{

			printf("  x3         %.4f           %.5f            %.4f         \n",h,u,h-l);

			}

			if(h-z<h-l)		//this "if" for the difference value.i find the nearst root the to x3 value.and i do this for each root(z and l are root).

			{

			printf("  x3         %.4f           %.5f            %.4f         \n",h,u,h-z);

			}

			if(d-z>d-l)		//this "if" for the difference value.i find the nearst root the to x4 value.and i do this for each root(z and l are root).

			{

			printf("  x4         %.4f           %.5f            %.4f         \n",d,n,d-l);

			}

			if(d-z<d-l)		//this "if" for the difference value.i find the nearst root the to x4 value.and i do this for each root(z and l are root).

			{

			printf("  x4         %.4f           %.5f            %.4f         \n",d,n,d-z);

			}

			if(s-z>s-l)		//this "if" for the difference value.i find the nearst root the to x5 value.and i do this for each root(z and l are root).

			{

			printf("  x5         %.4f           %.5f            %.4f         \n",s,m,s-l);

			}

			if(s-z<s-l)		//this "if" for the difference value.i find the nearst root the to x5 value.and i do this for each root(z and l are root).

			{

			printf("  x5         %.4f           %.5f            %.4f         \n",s,m,s-z);

			}		

			}

			if(c<0)//if user write the negative number for fixed number.it will appear as -c

			{

				k=b*b-4*a*c;    //calculation of discriminant

				x=-b-sqrt(k);   //

				y=-b+sqrt(k);   //for calculation of function roots

				z=x/(2*a);      //function root

				l=y/(2*a);	    //function's other root

			printf("Output >Your equation +%.0fx^2 %.0fx %.0f   and iterations are \n ",a,b,c);

			printf(" step         x                f(x)            Diffrence\n");

			if(f-z<f-l)		//this "if" for the difference value.i find the nearst root the to x1 value.and i do this for each root(z and l are root).

			{

			printf("  x1         %.4f           %.4f            %.4f         \n",f,t,f-z);

			}

		 	if(f-z>f-l)    //this "if" for the difference value.i find the nearst root the to x1 value.and i do this for each root(z and l are root).

		 	{

		 	printf("  x1         %.4f           %.4f            %.4f         \n",f,t,f-l);

			}

		 	if(g-z<g-l)		//this "if" for the difference value.i find the nearst root the to x2 value.and i do this for each root(z and l are root).

			{

			printf("  x2         %.4f           %.5f            %.4f         \n",g,r,g-z);

			}

		    if(g-z>g-l)		//this "if" for the difference value.i find the nearst root the to x2 value.and i do this for each root(z and l are root).

			{

			printf("  x2         %.4f           %.5f            %.4f         \n",g,r,g-l);

			}

		 	if(h-z>h-l)		//this "if" for the difference value.i find the nearst root the to x3 value.and i do this for each root(z and l are root).

			{

			printf("  x3         %.4f           %.5f            %.4f         \n",h,u,h-l);

			}

			if(h-z<h-l)		//this "if" for the difference value.i find the nearst root the to x3 value.and i do this for each root(z and l are root).

			{

			printf("  x3         %.4f           %.5f            %.4f         \n",h,u,h-z);

			}

			if(d-z>d-l)		//this "if" for the difference value.i find the nearst root the to x4 value.and i do this for each root(z and l are root).

			{

			printf("  x4         %.4f           %.5f            %.4f         \n",d,n,d-l);

			}

			if(d-z<d-l)		//this "if" for the difference value.i find the nearst root the to x4 value.and i do this for each root(z and l are root).

			{

			printf("  x4         %.4f           %.5f            %.4f         \n",d,n,d-z);

			}

			if(s-z>s-l)		//this "if" for the difference value.i find the nearst root the to x5 value.and i do this for each root(z and l are root).

			{

			printf("  x5         %.4f           %.5f            %.4f         \n",s,m,s-l);

			}

			if(s-z<s-l)		//this "if" for the difference value.i find the nearst root the to x5 value.and i do this for each root(z and l are root).

			{

			printf("  x5         %.4f           %.5f            %.4f         \n",s,m,s-z);

			}	

			}

		}

	}

}

}

int find_multiple_closest(int a, int b)

{	

	if(a>=b)//if a values bigger than b value.

	{

		int c=a/b; // c is leftover from a and b

		if(a % b == 0)  //  if a and b divide exactly

		{

			printf("Output> Closest number to %d that is multiple of %d is itself.",a,b);

			exit(1);//exits the program if the condition is true.

		}

		else if(a-(c*b)<((c+1)*b-a))  //If the difference between a and c * b is less than the difference between a and (c + 1) * b, c * b is suppressed.

		{                             //and we find the nearest number that can be divided by a to b.that number less than a.

		 	

			printf("Output> Closest number to %d that is multiple of %d is %d.",a,b,c*b);

		 	exit(1);//exits the program if the condition is true.

		}

		else if(a-(c*b)>((c+1)*b-a))  //If the difference between a and (c+1) * b is less than the difference between a and c* b, (c+1)* b is suppressed.

		{	                          //and we find the nearest number that can be divided by a to b.that number bigger than a.

			

			printf("Output> Closest number to %d that is multiple of %d is %d.",a,b,(c+1)*b);

			exit(1);//exits the program if the condition is true.

		}	

	}

	else //if b values bigger than a value.

	{

			printf("İnvalid operation");	
			exit(1);//exits the program if the condition is true.
	}

}

int main()

{	

	printf("-------PART1-------\n");

	find_root();//part 1 function

	

	printf("\n\n-------PART2-------\n");

	find_newtonian_root();//part 2 function

	

	printf("\n-------PART3-------\n");

	int num1,num2;

	printf("Enter the first integer: ");// first value in the part 3 function 

	scanf("%d",&num1);

	printf("Enter the second integer: ");// second value in the part 3 function

	scanf("%d",&num2);

	

	printf("%d",find_multiple_closest(num1,num2));//part 2-3 function

	

	

	

	return 0;

}

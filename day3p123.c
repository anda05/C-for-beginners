#include<stdio.h> <math.h>
//#include<math.h>
int main()
{
	/*int a,b,c; float s,area;
	printf("Enter 3 sides of the triangle: ");
	scanf("%d %d %d", &a, &b, &c);
	s=(float)(a+b+c)/2; area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area of the triangle is: %.2f\n", area);*/
	
	/*int a,b;
	printf("enter two numbers: ");
	scanf("%d %d", &a, &b);
	/*if (a>b){
		c=a;
	}
	else{
		c=b;
	}
	printf("max is: %d", c);*/
	
	/*if(a>b){
		printf("max is: %d\n", a);
	}
	
	else{
		printf("max is: %d", b);
	}*/
	
	//roots of quadratic equation
	float a,b,c,d,r1,r2,re,im;
	printf("Enter the values of a,b,c for the equation a*x^2 + b*x + c = 0: ");
	scanf("%f %f %f", &a, &b, &c);
	d=(b*b)-(4*a*c);
	if(a==0){
		printf("The equation is linear.\n");
		r1=-(c/b);
		printf("The root of the equation is: %.2f\n", r1);
	}
	else{
		printf("The equation is quadratic.\n");
		if(d==0){
			r1=-b/(2*a);
			printf("The roots of the equation are real and equal.\nThey are: %.2f & %.2f\n", r1, r1);
		}
		else if(d>0){
			r1=(-b+sqrt(d))/(2*a);
			r2=(-b-sqrt(d))/(2*a);
			printf("The roots of the equation are real and unequal.\nr1 = %.2f\nr2 = %.2f\n", r1, r2);
		}
		else{
			re=-b/(2*a);
			im=sqrt(-d)/(2*a);
			printf("The roots of the equation are imaginary.\nr1 = %.2f + i%.2f\nr2 = %.2f - i%.2f\n", re, im, re, im);
		}
	}
	
	return 0;
}
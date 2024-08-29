#include<stdio.h>
int main()
{
	//swapping of values using 3rd variable
	int a,b,c;
	printf("Enter 2 numbers a b: ");
	scanf("%d %d", &a, &b);
	c=a+b;b=a;a=c-b;
	printf("after swapping, a = %d, b = %d\n", a,b);
	//swapping without 3rd variable
	//int a,b;
	printf("Enter 2 numbers a b: ");
	scanf("%d %d", &a, &b);
	a+=b;b=a-b;a-=b;//a=a+b;b=a-b;a=a-b;
	printf("after swapping, a = %d, b = %d\n", a,b);
	
	int rad;float area;
	printf("enter the radius of the circle: ");
	scanf("%d", &rad);
	area=(float)(22*rad*rad)/7;
	printf("the area of the circle is : %.2f", area);
	
	//have to comment 1st program as c is defined differently in both progs
	float c,f;
	printf("enter temperature in Fahrenheit: ");
	scanf("%f", &f);
	c=((f-32)/1.80);
	printf("the temperature in Celsius is: %.2f\n", c);
	printf("enter temperature in Celsius: ");
	scanf("%f", &c);
	f=((c*1.80)+32);
	printf("the temperature in Fahrenheit is: %.2f\n", f);
	
	return 0;
}
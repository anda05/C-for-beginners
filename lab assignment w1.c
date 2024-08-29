#include<stdio.h>
void main()
{
	int a,b,c,d,e;
	
	//swapping using 3 variables
	printf("Enter first number a: ");
	scanf("%d", &a);
	printf("Enter first number b: ");
	scanf("%d", &b);
	c=a+b;
	printf("c: %d\n", c);
	b=a;
	printf("b: %d\n", b);
	a=c-a;
	printf("the value of a after swapping is: %d\n", a);
	printf("the value of b after swapping is: %d\n", b);
	
	//swapping without using 3 variables
	printf("Enter first number d: ");
	scanf("%d", &d);
	printf("Enter first number e: ");
	scanf("%d", &e);
	d=d+e;
	printf("d: %d\n", d);
	e=d-e;
	printf("e: %d\n", e);
	d=d-e;
	printf("the value of d after swapping is: %d\n", d);
	printf("the value of e after swapping is: %d", e);
	
	return 0;

}

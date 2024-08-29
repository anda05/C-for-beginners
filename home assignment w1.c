#include<stdio.h>
void main()
{
	//Rs. 1,2,5,10,50,100 available, to find smallest number of notes for an amount n entered
	int n,a,b,c,d,e,f,g,h,i,j;
	printf("Enter your amount: ");
	scanf("%d", &n);
	a=n/100;//no. of Rs.100 notes
	b=n%100;//remaining amt
	c=b/50;//no. of Rs.50 notes
	d=b%50;//remaining amt
	e=d/10;//no. of Rs.10 notes
	f=d%10;//remaining amt
	g=f/5;//no. of Rs.5 notes
	h=f%5;//remaining amt
	i=h/2;//no. of Rs.2 notes
	j=h%2;//remaining amt = no. of Rs.1 notes
	
	printf("The minimum number of notes required is: %d\n", a+c+e+g+i+j);
	return 0;
}
{
	int pay,da,hra;
	printf("To find your salary enter the following details: \nYour Basic pay: ");
	scanf("%d", &pay);
	printf("Your Dearness allowance(DA): ");
	scanf("%d", &da);
	printf("Your House rent allowance(DA): ");
	scanf("%d", &hra);
	printf("Your total salary is: %d\n", pay+da+hra);
	return 0;
}
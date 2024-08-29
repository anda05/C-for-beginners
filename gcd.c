#include<stdio.h>
int gcd(int a,int b){
	return ((b==0)? a: gcd(b,a%b));
}
void main(){
	int a,b;
	printf("Enter 2 no.s: ");
	scanf("%d %d", &a,&b);
	printf("gcd of %d & %d is: %d\n",a,b,gcd(a,b));
}
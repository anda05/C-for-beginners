#include<stdio.h>

int base(int n,int b){
	return (n==0)? n:((base(n/b,b)*10)+(n%b));
}
int decimal(int n,int b){
	return (n==0)? n: (n%10)+(decimal(n/10,b)*b);
}

void main(){
	int n;
	scanf("%d", &n);
	printf("%d", base(n,2));
}
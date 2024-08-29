#include <stdio.h>
int fibo(int n){
	return ((n<=1)? (n):(fibo(n-1)+fibo(n-2)) );
}
void main(){
	int n,i;
	printf("Enter no. of terms: ");
	scanf("%d", &n);
	for(i=0;i<n;i++)	
	printf("%d\n",fibo(i));
}
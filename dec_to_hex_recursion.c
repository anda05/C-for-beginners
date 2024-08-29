#include <stdio.h>

void hexadec(int n){
	if(n<10)
		printf("%d",n);
	
	else{
		hexadec(n/16);
		printf("%c", (n%16>9)? (char)((n%16)+55):(char)((n%16)+48));
	}
}

void main(){
	int n;
	printf("enter num: ");
	scanf("%d", &n);
	hexadec(n);
}
#include<stdio.h><math.h>
void prime(int a){
	int flag=1;
	scanf("%d",&a);
	if(a==0 || a==1)
	printf("Invalid");
	else{
		for(int i=2;i<=sqrt(a);i++){
			if(a%i==0)
			flag=0;
			break;
		}
		/*if(flag)
		printf("Prime");
		else
		printf("Not prime");*/
		printf((flag)? "Prime":"Not prime");
	}
		
}
void main(){
	int n;
	printf("enter the num: ");
	prime(n);
}
#include<stdio.h>
void octadec(int n){
	//can't keep scanf in this function as it is a recursive function, asks input multiple times
	if(n<8)
		printf("%d",n);
	else{
		octadec(n/8);
		printf("%d", (n%8));
	}
}
void main(){
	printf("enter num: ");
	scanf("%d",&n);
	int a;
	octadec(a);
}

/*void binary(int n){
	printf("enter num: ");
	scanf("%d",&n);
	if(n<2)
		printf("%d",n);
	else{
		binary(n/2);
		printf("%d", (n%2));
	}
}
void main(){
	int a;
	binary(a);
}*/
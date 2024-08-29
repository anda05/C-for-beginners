#include<stdio.h>
void main(){
	int i,j,n;
	printf("Enter number of rows: ");
	scanf("%d",&n);
	for(i=0;i<n+1;i++){
		for(j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<n+1;i++){
		for(j=0;j<n-i;j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<n+1;i++){
		for(j=0;j<i;j++){
			printf(" ");
		}
		for(j=n;j>i;j--){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<n+1;i++){
		for(j=0;j<n-i;j++){
			printf(" ");
		}
		for(j=n;j>n-i;j--){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<n+1;i++){
		for(j=0;j<n-i;j++){
			printf(" ");
		}
		for(j=i;j<2*i;j++){
			printf("%d",j);
		}
		for(j=2*(i-1);j>=i;j--){
			printf("%d",j);
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=0;i<n/2;i++){
		for(j=0;j<=i;j++){
			printf("*");
		}
		for(j=1;j<n-(2*i);j++){
			printf(" ");
		}
		for(j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	for(i=0;i<n-(n/2);i++){
		for(j=0;j<n-(n/2)-i;j++){
			printf("*");
		}
		for(j=1;j<=(2*i);j++){
			printf(" ");
		}
		for(j=0;j<n-(n/2)-i;j++){
			printf("*");
		}
		printf("\n");
	}
	
}
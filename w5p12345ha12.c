/*#include<stdio.h>
int main(){
	int n,i,j,k;
	printf("Enter no. of rows: ");
	scanf("%d", &n);
	/*for(i=0;i<=n;i++){
		for(j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	for(i=0;i<=n;i++){
		for(j=n-i;j>=0;j--){
			printf("*");
		}
		printf("\n");
	}
	for(i=0;i<=n;i++){
		for(j=0;j<=n;j++){
			if(j<=n-i-1)
			printf(" ");
			else
			printf("*");
		}
		printf("\n");
	}
	for(i=0;i<=n;i++){
		for(j=0;j<=n;j++){
			if(j>=i)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}*/
	
	//for left side numtriangle 
	/*for(i=0;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");}
		for(j=1;j<=i;j++){
			printf("%d", j+1);}
		for(j=i-1;j>=1;j--){
			printf("%d", j+1);}	
		
		printf("\n");
	}*/
#include<stdio.h>
#include<math.h>

void main(){
  int i,j,k,l,n;
  printf("Enter no. of rows: ");
	scanf("%d", &n);
  for(i=1;i<n+1;i++){
    for(j=n;j>i;j--)
         printf("  ");
    for(k=i;k<(2*i);k++)
        printf("%d ",k);
    for(l=2*(i-1);l>=i;l--)
        printf("%d ",l);
    printf("\n");
  }
}

int gcd(int a, int b) {
	return (b == 0 )? a : gcd(b, a % b);
}
void main(){
	int a,b;
	printf("Enter 2 no.s: ");
	scanf("%d %d", &a, &b);
	printf(" GCD of %d & %d is: %d\n", a, b, gcd(a, b));
}

int fact(int n){
	if(n==0)
	return 1;
	return (n)*fact(n-1);
}

void main(){
	int n,x,i; double sum=0.0;
	printf("Enter the value of N & X: ");
	scanf("%d %d", &n, &x);
	for(i=0;i<n;i++)
	sum+=(double) (pow(-1,i)*pow(x,i))/fact(i);
	printf("sum: %.4lf\n", sum);
}
void main(){
	int n,i;float sum=0.0;
	printf("Enter no. of terms: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	sum+=(float)1/i;
	printf("sum: %.2f\n", sum);
} 

	
/*	return 0;
}*/
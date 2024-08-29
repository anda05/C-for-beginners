#include <stdio.h> <math.h>

void main(){
	int n;float s=0;
	printf("Enter number of terms: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		s+=pow(-1,i)*pow(1.0/3,i);
	}
	printf("sum is: %.2f", s);
}

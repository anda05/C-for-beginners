#include <stdio.h>

double power(double b, int expo);
int main(){
	double sum=0,x;int n;
	printf("enter x and n: ");
	scanf("%lf %d", &x,&n);
	for(int i=0;i<n;i++){
		sum+=pow(x,pow(2,i));
	}
	printf("sum: %lf", sum);
	return 0;
}

double power(double b, int expo) {
    double result = 1.0;
    for(int i = 0; i < expo; i++) {
        result *= b;
    }
    return result;
}

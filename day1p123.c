/*#include<stdio.h>
void main()
{
    printf("Hello World");
}*/

/*#include<stdio.h>
int main()
{
	int x=10,y=20;
	
    printf("Sum of %d and %d is : %d", x, y, x+y);
    return 0;
}*/

#include<stdio.h>
int main()
{
	int x,y,sum; float avg;
	
	printf("enter 2 no.s: ");
	scanf("%d %d", &x, &y);
	sum = x+y; avg = (float)sum/2;
    printf("Sum of %d and %d is : %d\n", x, y, sum);
    printf("Average of %d and %d is : %.2f\n", x, y, avg);
    return 0;
}
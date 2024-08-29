#include<stdio.h>

int main()
{
    int yr,d;
    printf("enter the year: ");
    scanf("%d", &yr);
    d=yr%100==0 ? yr/100 : 1; printf((d%4==0 || yr%4==0)? "This is a leap year.\n" : "This is not a leap year.\n");//ternary
    return 0;
    /*if(yr%100==0){
        d=yr/100;
        if(d%4==0)
        printf("the year is a leap year");
        else
        printf("the year is not a leap year");
    }
    else{
        if(yr%4==0)
        printf("the year is a leap year");
        else
        printf("the year is not a leap year");
        }*/
	
	float a,b, ans; int p;
	printf("Enter number 1: ");
	scanf("%f", &a);
	printf("Enter number 2: ");
	scanf("%f", &b);
	printf("Mathematical Operations:\n1 - Add\n2 - Subtract\n3 - Multiply\n4 - Divide\nEnter your preference: ");
	scanf("%d", &p);
	/*switch(p){
		case 1:
			printf("Answer: %.2f", a+b);
			break;
			
		case 2:
			printf("Answer: %.2f", a-b);
			break;
			
		case 3:
			printf("Answer: %.2f", a*b);
			break;
			
		case 4:
			printf("Answer: %.2f", a/b);
			break;
	}*/
	
	switch(p){
		case 1:
			ans=a+b;
			break;
			
		case 2:
			ans=a-b;
			break;
			
		case 3:
			ans=a*b;
			break;
			
		case 4:
			ans=a/b;
			break;		
	}
	printf("Answer: %.2f", ans);
	    
    return 0;
    
    
}

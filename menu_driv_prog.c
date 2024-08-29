#include<stdio.h><math.h>


int fact(int n){
	//scanf("%d", &n);
	if(n==0)
	return 1;
	return (n)*fact(n-1);
}

void prime(int n){
	int flag=1;
	//scanf("%d",&n);
	if(n==0 || n==1)
	printf("Invalid\n");
	else{
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0)
			flag=0;
			break;
		}
		
		printf((flag)? "%d is Prime\n":"%d is Not prime\n",n);
	}
}


void ispalindrome(int n){
	int temp,rev=0;
	//scanf("%d",&n);
	temp=n;
	while(temp%10!=0){
		rev=(rev*10)+(temp%10);temp/=10;
	}
	printf((rev==n)? "%d is Palindrome\n":"%d is NOT Palindrome\n",n);
}


void main(){
	int n,prog; char chs;
	do{
		printf("Choose>>\n1.Factorial\n2.Check whether Prime or Not\n3.Check whether Palindrome or Not\nEnter Your Choice: ");
		scanf("%d", &prog);
		printf("Enter the number: ");//write scanf either separately in each func or one time in main func
		scanf("%d",&n);
		switch(prog){
			
			case 1:
				printf("Factorial of %d is: %d\n",n,fact(n));
				break;
			
			case 2:
				prime(n);
				break;
			
			case 3:
				ispalindrome(n);
				break;
				
			default:
				printf("Invalid Option\n");
					
		}
		printf("Press y to restart: ");
		fflush(stdin);
		scanf("%c", &chs);
		printf("\n");
	}
	while(chs=='y'||chs=='Y');
}

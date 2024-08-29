#include<stdio.h>

//int main()
/*{
	int sum=0;
	for(int i=1; i<21; i++){
		sum+=(i*i);
		//printf("%d\n", sum);//prints all the numbers obtained after each turn of loop
	}
	printf("%d\n", sum);//prints final sum
	return 0;
}*/
/*int main()
{
	int rev=0, temp, org, rem;
	printf("Enter the num: ");
	scanf("%d", &temp);
	org=temp;
	while(temp!=0){
		rem=temp%10;
		rev=(rev*10)+rem; temp=temp/10;
	}
	if(rev==org)
		printf("This number is a palindrome\n%d %d", org, rev);
	else
		printf("Not palindrome\n%d %d", org, rev);
	return 0;
	
}*/

//ternary not applicable here
/*int main(){
	int num, temp=0;
	printf("Enter the number: ");
	scanf("%d", &num);
	temp=num;
	num==0? printf("Palindrome") : ((temp=(temp*10)+(num%10), temp==num)? printf("Palindrome") : printf("Not Palindrome"));
	return 0;
	
}*/

/*void main(){
	int num;//temp is a local variable of funciton which is replaced by num
	scanf("%d", &num);//does not print any dialogue, directly asks for input
	ispalindrome(num);
	
}

int ispalindrome(int temp){
	int rev=0, org;
	org=temp;
	while (temp!=0){
		rev=(rev*10)+temp%10;
		temp/=10;
	}
	if(rev==0 || rev==org)
	printf("Palindrome");
	else
	printf("Not Palindrome");
	return temp;//without decalaring return value the function returns a random value, here it returns 0
}*/
/*int main(){
	int n, f, i, t1=0, t2=1;
	scanf("%d", &n);
	printf("%d\n", t1);
	//while loop
	while(n>1){
		f=t1+t2; t1=t2;t2=f;
		printf("%d\n", f);
		--n;
	}
	//for loop
	for(i=1; i<n; ++i){
		f=t1+t2; t1=t2;t2=f;
		/*if(f>=100000000)
		f%=1000000007;
		else
		f;*/
		/*printf("%d\n", f);
		
	}
	//two loops given but executes only one loop as at the end of that loop n is already 0
	return 0;
}*/

//prints proper fibonacci series, better than prev 2 loops, but executes slowly
int fibonacci(int n){
	if(n<=1)
	return n;
	return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	printf("%d\n", fibonacci(i));
	return 0;
}
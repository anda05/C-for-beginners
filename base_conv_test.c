#include<stdio.h>

int base(int n,int b){
	return (n==0)? n:((base(n/b,b)*10)+(n%b));
}
int decimal(int n,int b){
	return (n==0)? n: (n%10)+(decimal(n/10,b)*b);
}

void main(){
	int n,b,r,prog; char c;
	do{
		
	}
	printf("Enter the number & its base: ");
	scanf("%d %d",&n,&b);
	switch(b){
			
		case 2:
			do{
			printf("Choose>>\n1.Octal\n2.Decimal\nEnter Your Choice: ");
			scanf("%d", &prog);
			
			switch(prog){
				
				case 1:
					r=decimal(n,b);
					printf("Octal equivalent is: %d\n",base(r,8));
					break;
				
				case 2:
					printf("Decimal equivalent is: %d\n",decimal(n,b));
					break;
					
				default:
					printf("Invalid Option\n");
						
			}
			printf("Press y to restart: ");
			fflush(stdin);
			scanf("%c", &c);
			printf("\n");
			}
			while(c=='y'||c=='Y');
	
			break;
			
		case 8:
			do{
			printf("Choose>>\n1.Binary\n2.Decimal\nEnter Your Choice: ");
			scanf("%d", &prog);
			
			switch(prog){
				
				case 1:
					r=decimal(n,b);
					printf("Binary equivalent is: %d\n",base(r,2));
					break;
				
				case 2:
					printf("Decimal equivalent is: %d\n",decimal(n,b));
					break;
					
				default:
					printf("Invalid Option\n");
						
			}
			printf("Press y to restart: ");
			fflush(stdin);
			scanf("%c", &c);
			printf("\n");
			}
			while(c=='y'||c=='Y');
			break;
			
		case 10:
			do{
			printf("Choose>>\n1.Binary\n2.Octal\nEnter Your Choice: ");
			scanf("%d", &prog);
			
			switch(prog){
				
				case 1:
					printf("Binary equivalent is: %d\n",base(r,2));
					break;
				
				case 2:
					printf("Octal equivalent is: %d\n",base(r,8));
					break;
					
				default:
					printf("Invalid Option\n");
						
			}
			printf("Press y to restart: ");
			fflush(stdin);
			scanf("%c", &c);
			printf("\n");
			}
			while(c=='y'||c=='Y');
			break;
				
		default:
			printf("Base not in program\n");
					
		}
	
}
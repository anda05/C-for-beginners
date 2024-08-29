#include<stdio.h>

void main(){
	char text[1000];
	int code, i=0;
	printf("Enter a text: ");
	scanf("%999[^\n]",&text);
	printf("enter a code between 0 to 9: ");
	scanf("%d", &code);
	while(text[i]!='\0'){
		if(text[i]>='a' && text[i]<='z')
		text[i]='a'+(text[i]-'a'+code)%26;
		else if(text[i]>='A' && text[i]<='Z')
		text[i]='A'+(text[i]-'A'+code)%26;
		else if(text[i]!=' ')
		text[i]+=code;
		i++;
	}
	printf("Encoded text: %s\n",text);
	while(text[i]!='\0'){
		if(text[i]>='a' && text[i]<='z')
		text[i]='a'+(text[i]-'a'-code)%26;
		else if(text[i]>='A' && text[i]<='Z')
		text[i]='A'+(text[i]-'A'-code)%26;
		else if(text[i]!=' ')
		text[i]-=code;
		i++;
	}
	printf("Decoded text: %s\n",text);
	
}
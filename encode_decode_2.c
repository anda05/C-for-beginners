#include<stdio.h>
#include<string.h>
void encode(char text[],int code){
	for(int i=0;i<strlen(text);i++){
		if(text[i]!=' ')
		text[i]+=code;
	}
	printf("Encoded text: %s\n", text);
}
void decode(char text[],int code){
	for(int i=0;i<strlen(text);i++){
		if(text[i]!=' ')
		text[i]-=code;
	}
	printf("Decoded text: %s\n", text);
}
void main(){
	char text[1000];int code;
	printf("Enter a text: ");
	scanf("%[^\n]*c",text);
	printf("Enter the code: ");
	scanf("%d",&code);
	encode(text,code);
	decode(text,code);
}
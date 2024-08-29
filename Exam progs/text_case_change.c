#include <stdio.h>
#include <string.h>
void main(){
	char text[1000]; int i;
	printf("Enter the text: ");
	gets(text);
	while(text[i]!='\0'){
		if(text[i]>='a' && text[i]<='z'){
			text[i]= 'A' + (text[i]-'a');
		}
		i++;
	}
	puts(text);
}
		
		
		
		
		
		
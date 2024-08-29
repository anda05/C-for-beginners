#include<stdio.h>
#include<string.h>
void main(){
	char text[1000];int blanks=0,tabs=0,newlines=0;
	printf("Enter a text: ");
	fgets(text,sizeof(text),stdin);
	
	for(int i=0;text[i]!='\0';i++){
		if(text[i]==' ')
		blanks++;
		else if(text[i]=='\t')
		tabs++;
		else if(text[i]=='\n')
		newlines++;
	}
	
	printf("Blanks: %d\nTabs: %d\nNewlines: %d\n",blanks,tabs,newlines);
	printf("Text with visible blanks and tabs: ");
	for(int i=0;text[i]!='\0';i++){
		if(text[i]==' ')
		printf("\\space");
		else if(text[i]=='\t')
		printf("\\t");
		else if(text[i]=='\n')
		printf("\\n");
		else
		printf("%c",text[i]);
	}
	
}
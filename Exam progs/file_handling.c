#include<stdio.h>

int main(){
	FILE *sf,*df;
	char ch,sfn[100],dfn[100];
	printf("enter source file name: ");
	scanf("%s", sfn);
	printf("enter dest file name: ");
	scanf("%s", dfn);
	
	sf=fopen(sfn,"r");
	if(sf==NULL){
		printf("error in opening file");
		return 1;
	}
	
	df=fopen(dfn,"w");
	if(df==NULL){
		printf("error in opening file");
		fclose(sf);
		return 1;
	}
	//fprintf(f,"\nthis is a sample text.");
	//rewind(f);
	
	while((ch=fgetc(sf))!=EOF){
		fputc(ch,df);
	}
	/*while((ch=fgetc(sf))!=EOF){
		putchar(ch);
	}*/
	while((ch=fgetc(df))!=EOF){
		putchar(ch);
	}
	
	fclose(sf);
	fclose(df);
	return 0;
}
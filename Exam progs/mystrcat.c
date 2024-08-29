#include<stdio.h>
/*char mystrcat(char *str1,char *str2){
	while(*str1!='\0'){
		str1++;
	}
	while(*str2!='\0'){
		*str1=*str2;
		str2++;str1++;
	}
	*str1='\0';
}*/
void main(){
	char str1[100],str2[100];int i=0,j=0;
	printf("enter string 1: ");gets(str1);
	printf("enter string 2: ");gets(str2);
	while(str1[i]!='\0'){
		i++;
	}

	while(str2[j]!='\0'){
		str1[i]=str2[j];i++;j++;
	}
	str1[i]='\0';
	//mystrcat(str1,str2);
	printf("%s",str1);
	
}
#include<stdio.h>
mystrcpy(char *source, char *dest){
	while(*source!='\0'){
		*dest=*source;
		source++;dest++;
	}
	*dest='\0';
}

mystrcat(char *source, char *dest){
	//concat order : destsource
	while(*dest!='\0'){dest++;}
	//dest=' ';dest++;
	while(*source!='\0'){
		*dest=*source;
		source++;dest++;
	}
	*dest='\0';
}

mystrncat(char *source, char *dest, int n){
	//concat order : destsource
	while(*dest!='\0'){
		dest++;
	}
	//dest=' ';dest++;
	while(n>0 && *source!='\0'){
		*dest=*source;
		source++;dest++;n--;
	}
	*dest='\0';
}
	
int mystrcmp(char *source,char *dest){
	int result;
	while(*source && (*source == *dest)){
		++source;++dest;}
	result=(char) *source - (char) *dest;
	return result;
}

int is_delimiter(char c, char *delimiters) {
    int i = 0;
    while (delimiters[i] != '\0') {
        if (c == delimiters[i])
            return 1;
        i++;
    }
    return 0;
}

char *mystrtok(char *s, char *delimiters) {
    static char *input = NULL;
    if (s != NULL)
        input = s;

    if (input == NULL)
        return NULL;

    char *result = (char *)malloc(50);
    int i = 0;

    for (; input[i] != '\0'; i++) {
        if (!is_delimiter(input[i], delimiters))
            result[i] = input[i];
        else {
            result[i] = '\0';
            input = input + i + 1;

            // Find the position of the next non-delimiter character
            while (is_delimiter(input[0], delimiters))
                input++;

            return result;
        }
    }

    result[i] = '\0';
    input = NULL;
    return result;
}
	
main(){
	char str1[100],str2[100],delim[20];int n;
	
	printf("For mystrcpy:-\n");
	printf("Enter a text: ");
	gets(str1);
	mystrcpy(str1,str2);
	puts(str1);
	puts(str2);
	
	printf("For mystrcat:-\n");
	printf("Enter a text: ");
	gets(str1);
	printf("Enter another text: ");
	gets(str2);
	mystrcat(str1,str2);
	puts(str2);
	
	printf("For mystrncat:-\n");
	printf("Enter a text: ");
	gets(str1);
	printf("Enter another text: ");
	gets(str2);
	printf("Enter upto how many characters do you want to concatenate: ");
	scanf("%d",&n);
	mystrncat(str1,str2,n);
	puts(str2);
	
	getchar();
	printf("For mystrcmp:-\n");
	printf("Enter a text: ");
	gets(str1);
	printf("Enter another text: ");
	gets(str2);
	int i=mystrcmp(str1,str2);
	printf("%d\n",i);
	
	printf("For mystrtok:-\n");
	printf("Enter the text: ");
    gets(str1);
    printf("Enter the delimiters (separated by spaces): ");
    gets(delim);

    char *token = mystrtok(str1, delim);

    printf("%s\n", token);

    while (token != NULL) {
        free(token); // Free memory allocated by mystrtok
        token = mystrtok(NULL, delim);
        printf("%s\n", token);
    }
}
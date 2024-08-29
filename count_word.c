#include <stdio.h>

void main() {
    char text[100];
    int i, words = 0, characters = 0, state = 0;

    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);

    for (i = 0; text[i] != '\0'; i++) {
        if (text[i] != ' ' && text[i] != '\n' && text[i] != '\t') {
            characters++;
            if(state==0){
            	state = 1;
            	words++;
			}
        }
        else{
        	state=0;
		}
    }

    printf("Number of words: %d\n", words);
    printf("Number of characters: %d\n", characters);
}
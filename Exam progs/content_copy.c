#include <stdio.h>
#include <stdlib.h>

int main() {
    char sourceFileName[100], destFileName[100];
    FILE *sourceFile, *destFile;
    char ch;

    // Prompt user for source file name
    printf("Enter the source file name: ");
    scanf("%s", sourceFileName);

    // Prompt user for destination file name
    printf("Enter the destination file name: ");
    scanf("%s", destFileName);

    // Open the source file in read mode
    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("Could not open source file %s\n", sourceFileName);
        exit(EXIT_FAILURE);
    }

    // Open the destination file in write mode
    destFile = fopen(destFileName, "w");
    if (destFile == NULL) {
        printf("Could not open destination file %s\n", destFileName);
        fclose(sourceFile);
        exit(EXIT_FAILURE);
    }

    // Read from source file and write to destination file
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File copied successfully.\n");

    // Close the files
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}

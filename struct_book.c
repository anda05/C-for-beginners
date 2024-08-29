#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

// Structure to represent a book
struct Book {
    char author[100];
    char publisher[100];
    float price;
    char branch[100];
};

// Function to print the list of books supplied by a publisher
void printBooksByPublisher(struct Book books[], int numBooks, const char *publisher) {
    printf("Books supplied by %s:\n", publisher);
    for (int i = 0; i < numBooks; i++) {
        if (strcmp(books[i].publisher, publisher) == 0) {
            printf("Author: %s, Publisher: %s, Price: %.2f, Branch: %s\n", 
                   books[i].author, books[i].publisher, books[i].price, books[i].branch);
        }
    }
}

// Function to print the list of books in a particular branch to a file
void printBooksInBranchToFile(struct Book books[], int numBooks, const char *branch) {
    FILE *file = fopen("lib.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }
    fprintf(file, "Books in branch %s:\n", branch);
    for (int i = 0; i < numBooks; i++) {
        if (strcmp(books[i].branch, branch) == 0) {
            fprintf(file, "Author: %s, Publisher: %s, Price: %.2f, Branch: %s\n", 
                   books[i].author, books[i].publisher, books[i].price, books[i].branch);
        }
    }
    fclose(file);
    printf("Books in branch %s written to lib.txt successfully.\n", branch);
}

int main() {
    // Sample data of books
    struct Book books[MAX_BOOKS] = {
        {"Author1", "Publisher1", 10.50, "Branch1"},
        {"Author2", "Publisher2", 15.75, "Branch2"},
        {"Author3", "Publisher1", 20.00, "Branch3"},
        {"Author4", "Publisher2", 12.25, "Branch1"},
        // Add more books as needed
    };
    int numBooks = 4; // Update this with the actual number of books

    // Example usage of functions
    printBooksByPublisher(books, numBooks, "Publisher1");
    printBooksInBranchToFile(books, numBooks, "Branch1");

    return 0;
}

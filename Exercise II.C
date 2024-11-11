#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void writeToFile(const char *filename) {

    char sentence[101];

    printf("Enter a sentence (up to 100 characters): ");

    fgets(sentence, 100, stdin);

    FILE *fp = fopen(filename, "w");

    if (fp == NULL) {

        printf("Error opening file!\n");

        exit(1);
    }

    fprintf(fp, "%s", sentence);

    fclose(fp);
}

void readFromFile(const char *filename) {

    FILE *fp = fopen(filename, "r");

    if (fp == NULL) {

        printf("Error opening file!\n");

        exit(1);
    }

    char ch;

    while ((ch = fgetc(fp)) != EOF) {

        printf("%c", ch);
    }

    fclose(fp);
}

void appendToFile(const char *filename) {

    char sentence[101];

    printf("Enter a sentence to append: ");

    fgets(sentence, 100, stdin);

    FILE *fp = fopen(filename, "a");

    if (fp == NULL) {

        printf("Error opening file!\n");

        exit(1);
    }

    fprintf(fp, "%s", sentence);

    fclose(fp);
}

int main() {

    // Write a sentence to the file

    writeToFile("data.txt");

    // Read and display the contents of the file

    printf("\nContents of the file:\n");

    readFromFile("data.txt");

    // Append a second sentence to the file

    appendToFile("data.txt");

    // Read and display the updated contents of the file

    printf("\nContents of the file after appending:\n");

    readFromFile("data.txt");

    return 0;
}
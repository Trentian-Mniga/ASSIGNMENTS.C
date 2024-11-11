#include <stdio.h>
#include <stdlib.h>

struct Student {

    char name[50];

    int marks;
};

int main() {

    struct Student students[5];

    FILE *fp;

    // Initialize student data 
    

    // Open file in write mood

    fp = fopen("students.txt", "w");

    if (fp == NULL) {

        printf("Error opening file!\n");

        exit(1);
    }

    // Write student data to file

    fwrite(students, sizeof(struct Student), 5, fp);

    fclose(fp);

    // Open file in read mode

    fp = fopen("students.txt", "r");

    if (fp == NULL) {

        printf("Error opening file!\n");

        exit(1);
    }

    // Read student data from file

    fread(students, sizeof(struct Student), 5, fp);

    // Display student data

    for (int i = 0; i < 5; i++) {

        printf("Name: %s, Marks: %d\n", students[i].name, students[i].marks);
    }

    fclose(fp);

    return 0;
}
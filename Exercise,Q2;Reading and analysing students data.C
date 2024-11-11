#include <stdio.h>
#include <stdlib.h>

struct Student {

    char name[50];

    int marks;
};

int main() {

    int n;

    struct Student students[100]; // Adjust size 

    FILE *fp;

    printf("Enter the number of students: ");

    scanf("%d", &n);

    // Read student information

    for (int i = 0; i < n; i++) {

        printf("Enter name of student %d: ", i + 1);

        scanf("%s", students[i].name);

        printf("Enter marks of student %d: ", i + 1);

        scanf("%d", &students[i].marks);
    }

    // Open file 

    fp = fopen("students.txt", "a");

    if (fp == NULL) {

        printf("Error opening file!\n");

        exit(1);
    }

    // Write student data to file

    fwrite(students, sizeof(struct Student), n, fp);

    fclose(fp);

    return 0;
}
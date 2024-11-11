#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    struct Student students[5];
    FILE *fp;

    //  student information

    for (int i = 0; i < 5; i++) {

        printf("Enter name of student %d: ", i + 1);

        scanf("%s", students[i].name);

        printf("Enter marks of student %d: ", i + 1);

        scanf("%d", &students[i].marks);
    }

    // Open file 

    fp = fopen("students.txt", "w");

    if (fp == NULL) {

        printf("Error opening file!\n");

        exit(1);
    }

    // Write student data to file

    fwrite(students, sizeof(struct Student), 5, fp);

    fclose(fp);

    return 0;
}
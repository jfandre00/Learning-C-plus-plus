#include <stdio.h>
#include <string.h>

struct Student {
    char name[12];
    float gpa;

};

int main() {

    struct Student student1 = {"John", 3.5};
    struct Student student2 = {"Jane", 3.8};
    struct Student student3 = {"Jim", 3.2};
    struct Student student4 = {"Jill", 3.9};

    struct Student students[] = {student1, student2, student3, student4};

    for(int i = 0; i < sizeof(students) / sizeof(students[0]); i++) 
    {
        printf("Student %-12s has a GPA of %.2f\n", students[i].name, students[i].gpa);
    }

    return 0;
}
#include <stdio.h>

typedef struct Student
{
    int roll;
    char section;
} Student;

int main()
{
    Student s1;

    s1.roll = 1;
    s1.section = 'A';

    printf("Roll: %d\n", s1.roll);
    printf("Section: %c\n", s1.section);

    return 0;
}

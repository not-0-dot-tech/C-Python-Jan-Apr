#include <stdio.h>

typedef struct Student
{
    int roll;
    char section;
} Student;

int main()
{
    Student s[5]; // array of structures
    s[3].roll = 1;
    s[3].section = 'A';

    printf("Roll: %d\n", s[3].roll);
    printf("Section: %c\n", s[3].section);
    
    return 0;
}

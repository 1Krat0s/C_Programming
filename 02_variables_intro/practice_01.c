#include <stdio.h>

int main()
{
    int course_id;
    course_id = 2271;

    int student_id;
    student_id = 8888;

    int combined = student_id - course_id; 

    printf("Name: John Doe\n Course ID: %d\n Student ID: %d\n Student ID - Course ID is: %d\n", course_id, student_id, combined);

    return 0;
}
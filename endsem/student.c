/**************************************************************************
 * Q5. Create a structure of student with name, roll and marks as         *
 *     variable and insert at least 3 sets of values and display them.    *
 * Chandrashekhar Tripathi                         Roll no: ECE/20/28     *
 **************************************************************************/

#include <stdio.h>
#include <stdlib.h>
typedef char *string;       // my own data type for string

//Max number of students
#define MAX 50
#define NAME_LEN 20

// Defining student data type in struct
typedef struct
{
    string name;
    int roll;
    int marks;
}
student;

//Array of students
student students[MAX];

int main(void)
{
    int num;
    printf("How many students are there?\t");
    scanf("%i", &num);
    if (num > MAX)
    {
        printf("Max number of students is %i\n", MAX);
        return 1;
    }

    // filling in the details of students
    for (int i = 0; i < num; i++)
    {
        printf("Name: ");
        students[i].name = malloc(NAME_LEN);
        scanf("%s", students[i].name);
        getchar();

        printf("Roll: ");
        scanf("%i", &students[i].roll);
        getchar();

        printf("Marks: ");
        scanf("%i", &students[i].marks);
        getchar();
    }

    //Printing the details
    printf("Roll\tName\tMarks\n");
    for (int i = 0; i < num; i++)
        printf("%i\t%s\t%i\n",students[i].roll, students[i].name, students[i].marks);

    // Freeing up dynamically allocated memory for name
    for (int i = 0; i < num; i++)
        free(students[i].name);
    return 0;
}
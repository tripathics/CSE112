/*************************************************************************
 * Q8. Create a union of employee with name and salary as variable       *
 *     and insert at least 2 sets of values and display them.            *
 * Chandrashekhar Tripathi                           Roll no: ECE/20/28  *
 *************************************************************************/

#include <stdio.h>
#include <string.h>

// defining the employee data type
union Employee
{
    char Name[50];
    float Salary;
};

int main(void)
{
    union Employee emp1;
    union Employee emp2;

    printf("\nDetails of the First Employee \n");

    strcpy(emp1.Name, "Alice");
    printf(" Employee Name = %s \n", emp1.Name);
    emp1.Salary = 32000.70;
    printf(" Employee Salary = %.2f \n\n", emp1.Salary);

    
    printf("Details of the Second Employee \n" );
    strcpy(emp2.Name, "Bob");
    printf(" Employee Name = %s \n", emp2.Name );

    emp2.Salary = 35000.20;
    printf(" Employee Salary = %.2f \n\n", emp2.Salary);


    printf("Details of the Third Employee \n" );

    strcpy(emp2.Name, "Charlie");
    printf(" Employee Name = %s \n", emp2.Name );

    emp2.Salary = 37000.40;
    printf(" Employee Salary = %.2f \n\n", emp2.Salary);
    return 0;
}
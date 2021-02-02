/******************************************************
 *  Calculator using switch                           *
 *                                                    *
 * ****************************************************/

#include <stdio.h>

int main()
{
    char operator;
    double n1, n2;
    printf("Enter the two numbers: ");
    scanf("%lf %lf", &n1, &n2);
    printf("Enter the operator (+, -, *, /) ");
    scanf("%c", &operator);
    switch (operator)
    {
        case '+':
            printf("%lf + %lf = %lf", n1, n2, n1+n2);
            break;
        case '-':
            printf("%lf - %lf = %lf", n1, n2, n1-n2);
            break;
        case 'x':
            printf("%lf x %lf = %lf", n1, n2, n1*n2);
            break;
        case '/':
            printf("%lf / %lf = %lf", n1, n2, n1/n2);
            break;
        default:
            printf("Enter a proper operator. ");
    }
    return 0;
}
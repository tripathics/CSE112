//program to find out maximum of two numbers
#include<stdio.h>

int max(int num1, int num2);
int main()
{
    int a=100, b=200, ret;
    ret = max(a,b);
}
int max(int num1, int num2)
{
    if (num1<num2)
        printf("%d is the maximum of the numbers.\n",num2);
    else
        printf("%d is the maximum of the numbers.\n",num1);
}
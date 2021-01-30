//program illustrates call by value inside a funciton

#include<stdio.h>
void change();
int main()
{
    int x = 100;
    printf("before calling the funciton, x = %d\n", x);
    change(x); //passing value in function
    printf("After function call x = %d\n", x);
    return 0;
}

void change(int num)
{
    printf("before adding value inside funciton num = %d\n", num);
    num = num + 100;
    printf("after adding value of num = %d\n", num);
}
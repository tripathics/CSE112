#include<stdio.h>
int main()
{
    int *ptr;
    int val = 1;
    ptr = &val;
    int deref = *ptr;
    printf("%d\n", deref);
}
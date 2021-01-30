/*  C program doesn't execute the statementin function until the function is called
Syntax of functionprototype: return-type  function_name(arg-type name-1,...,arg-type name-n);
*/
#include <stdio.h>
char fun();                         //function prototype

int main()
{
    char c = fun();                 //calling funciton
    printf("Character is = %c",c);
}
char fun()                          //called function
{
    return 'a';
}
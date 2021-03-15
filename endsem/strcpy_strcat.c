/******************************************************************************
 * Q1. Write a c program to use strcat() and strcpy() string functions.       *
 * Chandrashekhar Tripathi                             Roll no: ECE/20/28     *
 ******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef char *string;               // my own data type for string

#define MAX 1000

int main(void)
{
    string src = malloc(MAX);

    //Getting string from user
    printf("Enter a string:\n");
    fgets(src, MAX - 1, stdin);

    //Declaring dest
    string dest = malloc(strlen(src) + 1);

    //Copying string from src to dest
    if (src != NULL)
    {
        if (dest != NULL)
        {
            strcpy(dest, src);

            //Printing the source string and copied string
            printf("Source string in src:\n%s\n", src);
            printf("Copied string in dest:\n%s\n", dest);
        }
    }

    string concat = malloc(strlen(dest) + strlen(src) + 1);
    if (concat != NULL)
    {
        // Copying src string to concat
        strcpy(concat, src);
    }
    
    
    // Concatenating concat and dest and hence appending to concat
    strcat(concat, dest);

    // Printing the concatenated string
    printf("Concatenated string:\n%s", concat); 

    // Freeing up dynamic memory
    free(src);
    free(dest);
    free(concat);
    return 0;
}
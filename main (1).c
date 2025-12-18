/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char *str = "Hello World";
    int i;

    printf("Original String: %s\n", str);
    printf("After XOR with 0: ");

    for (i = 0; str[i] != '\0'; i++)
    {
        char result = str[i] ^ 0;  
        printf("%c", result);
    }

    return 0;
}

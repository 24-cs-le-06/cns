#include <stdio.h>

int main()
{
    char *str = "Hello World";
    int i;
    printf("Original String : %s\n", str);
    printf("After AND with 127: ");
    for (i = 0; str[i] != '\0'; i++)
    {
        char result = str[i] & 127;
        printf("%c", result);
    }
    printf("\n");
    printf("After XOR with 127: ");
    for (i = 0; str[i] != '\0'; i++)
    {
        char result = str[i] ^ 127;
        printf("%c", result);
    }
    return 0;
}
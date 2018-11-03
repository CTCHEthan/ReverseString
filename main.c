#include <stdio.h>
#include <stdlib.h>

#define MAX_CHAR 50

int main()
{
    printf("Please enter some text below:\n");

    char str[MAX_CHAR];
    gets(str);

    int i, len;

    len = strlen(str);

    for (i = len - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }




    return 0;
}

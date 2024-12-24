#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string1[] = "Ali";
    char string2[] = "Ahmad";

    strlwr(string1);
    strupr(string1);
    strcat(string1, string2);
    strncat(string1, string2, 1);
    strcpy(string1, string2);
    strncpy(string1, string2, 2);

    strset(string1, '?');
    strbset(string1, '1', 1);
    strrev(string1);

    int result = strlen(string1);
    int result = strcmp(string1, string2);
    int result = strncmp(string1, string2, 1);
    int result = strcmpi(string1, string1);
    int result = strnicmp(string1, string1, 1);


    printf("%s", string1);
    return 0;
}

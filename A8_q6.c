#include <stdio.h>
void concatenateStrings(char *str1, char *str2)
{
    while (*str1)
    {
        str1++;
    }

    while (*str2)
    {
        *str1 = *str2;
        str1++;
        str2++;
    }

    *str1 = '\0';
}

void main()
{
    char str1[100], str2[100];
    int len1, len2;
    printf("Enter length of the first string: ");
    scanf("%d", &len1);
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter length of the second string: ");
    scanf("%d", &len2);
    printf("Enter the second string: ");
    scanf("%s", str2);
    concatenateStrings(str1, str2);
    printf("Concatenated string: %s\n", str1);
}
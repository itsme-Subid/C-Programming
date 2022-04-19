#include <stdio.h>
#include <string.h>

int palindrome(char str[])
{
    int l, n;
    l = strlen(str);

    for (int i = 0; i < l / 2; i++)
    {
        if (str[i] != str[l - 1 - i])
        {
            n = 0;
        }
        else
        {
            n = 1;
        }
        n += n;
    }
    return n;
}
void main()
{
    int l, i;
    char str[40];
    printf("\t  ***Welcome to Palindrome String Checker***\n\n\a");
    printf("Enter some strings to check whether its a Palindrome string or not\n");
    gets(str);
    if (palindrome(str))
    {
        printf("This string is a Palindrome string\n");
    }
    else
    {
        printf("This string is not a Palindrome string\n");
    }
}
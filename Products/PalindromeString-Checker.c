#include <stdio.h>
#include <string.h>

int palindrome(char str[])
{
    int l;
    l = strlen(str);

    for (int i = 0; i < l / 2; i++)
    {
        if (str[i] != str[l - 1 - i])
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}
void main()
{
    int l, i;
    char str[40];
    printf("\t  ***Welcome to Palindrome String Checker***\n\n\a");
    while (1)
    {

        printf("Enter some strings to check whether its a Palindrome string or not\n");
        gets(str);
        if (str[0] == 0)
        {
            goto exit;
        }
        else
        {
            switch (palindrome(str))
            {
            case 1:
                printf("This string is a Palindrome string\n");
                break;
            case 0:
                printf("This string is not a Palindrome string\n");
                break;

            default:
                break;
            }
            printf("\t***Thank You***\n\n");
        }

    exit:
    }
}
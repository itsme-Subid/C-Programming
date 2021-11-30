#include <stdio.h>
#include <string.h>
#include <conio.h>

void htmlFormater(char *str);

int main()
{
    char str[1000];
    printf("Enter HTML code\n");
    gets(str);
    htmlFormater(str);
    printf("%s", str);
    getch();
    return 0;
}

void htmlFormater(char *str)
{
    int k = 0, l = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '<')
        {
            k = 1;
            continue;
        }
        else if (str[i] == '>')
        {
            k = 0;
            continue;
        }
        if (k == 0)
        {
            str[l] = str[i];
            l++;
        }
    }
    str[l] = '\0';
    while (str[0] == ' ')
    {
        for (int j = 0; j < strlen(str); j++)
        {
            str[j] = str[j + 1];
        }
    }
    while (str[strlen(str) - 1] == ' ')
    {
        str[strlen(str) - 1] = '\0';
    }
}
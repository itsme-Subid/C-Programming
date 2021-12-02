#include <stdio.h>
#include <conio.h>
void main()
{
    //simple calculator
    int n, n1, n2;
    char c;
    printf("Welcome to simple Calculator\n");
    scanf("%d %c %d", &n, &c, &n1);
    if (n == 0 && c == '/' && n1 == 0)
    {
        printf("Undefined");
    }
    else if (c == '/' && n1 == 0)
    {
        printf("Cannot divide by zero");
    }
    else
    {
        switch (c)
        {
        case '+':
            n2 = n + n1;
            printf("%d", n2);
            break;
        case '-':
            n2 = n - n1;
            printf("%d", n2);
            break;
        case '*':
            n2 = n * n1;
            printf("%d", n2);
            break;
        case '/':
            n2 = n / n1;
            printf("%d", n2);
            break;

        default:
            printf("Something went wrong");
            break;
        }
    }
    getch();
}
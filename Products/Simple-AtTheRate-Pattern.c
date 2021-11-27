#include <stdio.h>
#include <conio.h>
void printpattern(int a)
{
    for (int i = 0; i <= a; i++)
    {
        printf("\t");
        for (int j = 0; j <= i - 1; j++)
        {
            printf(" @");
        }
        printf("\n");
    }
}
void printReversedpattern(int a)
{
    for (int i = 0; i <= a; i++)
    {
        printf("\t");
        for (int j = 0; j <= a - i - 1; j++)
        {
            printf(" @");
        }
        printf("\n");
    }
}

void main()
{
    int a;
    while (1)
    {
        printf("Enter how much star pattern you want (press 0 to exit) \a\n");
        scanf("%d", &a);
        if (a == 0)
        {
            printf("\t\tYou pressed 0!\n Which is assigned to exit this program.\n\t     Thank you vist again.\a\n");
            goto exit;
        }

        printReversedpattern(a);
        printpattern(a);
    }
exit:
    getch();
}
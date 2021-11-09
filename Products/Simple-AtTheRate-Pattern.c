#include <stdio.h>

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

        for (int i = 0; i <= a; i++)
        {
            printf("\t");
            for (int j = 1; j <= i; j++)
            {
                printf(" @");
            }
            printf("\n");
        }
    }
exit:
}
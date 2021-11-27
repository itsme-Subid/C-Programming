#include <stdio.h>
#include <conio.h>
void main()
{
    int n = 0, i = 0, m = 0, t = 0;
    printf("Enter a number\n");
    scanf("%d", &n);
    t = n;
    if (n > 0)
    {

        while (n > 0)
        {
            n--;
            i++;
            m = m + 7;
            if (i > 50)
            {
                break;
            }
            if (m > t)
            {
                break;
            }
            printf("%d\n", m);
        }
    }
    else
    {
        printf("Something Went Wrong\n");
    }

    getch();
}
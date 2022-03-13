#include <stdio.h>
#include <math.h>
#include <conio.h>

void main()
{
    int n;

    printf("\n\nNote: if you have one dimensional or two dimensional vector\nThen write the other component as 0\nFor example 4j -> 0i+4j+0k\n");
    printf("Enter the number of vectors needed\n");
    scanf("%d", &n);

    char a[n * 6];
    int p = 65, j = 0, z = 3;

    for (int i = 0; i < n; i++, z *= 2)
    {
        printf("Enter the vector %c\n", p);
        p++;
        for (; j < n * z; j++)
        {
            if (j % 2 == 0)
            {
                scanf("%d", &a[j]);
            }
            else if (j % 2 != 0)
            {
                scanf("%c", &a[j]);
            }
        }
    }

    p = 65;
    j = 0;
    z = 3;

    for (int i = 0; i < n; i++, z *= 2)
    {
        printf("\nThe vector %c : ", p);
        p++;
        for (; j < n * z; j++)
        {
            if (j % 2 == 0)
            {
                printf("(%d)", a[j]);
            }
            else if (j % 2 != 0)
            {
                printf("%c", a[j]);
                if (j != ((n * z) - 1))
                {
                    printf("+");
                }
            }
        }
        printf("\n");
    }

    double mag;

    for (int i = 0; i < n * 6; i += 2)
    {
        mag += (a[i] * a[i]);
    }

    mag = sqrt(mag);

    printf("\nThe magnitude of the Vectors is %.2lf\n", mag);
}
#include <stdio.h>
void main()
{
    printf("\t *******************   Welcome to find odd or even number in a particular range   *******************\n\n\n");
    while (1)
    {

        int a, b, n;

        printf("Enter 0 for even number and 1 for odd number\n");
        scanf("lorem ipsum dummy words which is needed otherwise this program is not working\n %d\n", &n);
        if ((n % 2) == 0)
        {
            printf("You entered 0 for even numbers\n\n");
            printf("Enter the number from where you want even number\n");
            scanf(" %d\n", &a);
        }
        else
        {
            printf("You entered 1 for odd number\n\n");
            printf("Enter the number from where you want odd number\n");
            scanf(" %d\n", &a);
        }
        printf("Enter the number upto where you want the numbers \n");
        scanf(" %d\n", &b);
        if ((n % 2) == 0)
        {
            for (int i = a; i <= b; i++)
            {
                printf("\t \t \t %d \n\n", i++);
            }
        }
        else
        {
            for (int i = a; i <= b; i = i + 2)
            {
                printf("\t \t \t %d \n", i);
            }
        }
    }
}
#include <stdio.h>
#include <math.h>

void main()
{
    printf("\t\t-:Welcome to Armstrong number detector:-\n\n");
    while (1)
    {
        int n = 0, n1 = 0, n2 = 0, power = 0, digits = 0, sum = 0;
        printf("Enter the number of your choice\nTo check this number neither Armstrong or not\n\a");
        scanf("%d", &n);
        n1 = n2 = n;

        while (n > 0)
        {
            n = n / 10;
            power++;
        }

        while (n1 > 0)
        {
            digits = n1 % 10;

            sum += pow(digits, power);

            n1 /= 10;
        }

        printf("\a");
        if (sum == n2)
        {
            printf("\n\nAs the sum of the power %d of individual digit(s) is %d.\n\tWhich is equal the entered number %d.\n\t    So, this is a Amstrong number. \n\n\t\t  ***Thank you***", power, sum, n2);
        }
        else
        {
            printf("\n\nAs the sum of the power %d of individual digit(s) is %d.\n     Which is not equal the entered number %d.\n\tSo, this is not a Amstrong number. \n\n\t\t ***Thank you***", power, sum, n2);
        }
        printf("\n\n");
    }
}
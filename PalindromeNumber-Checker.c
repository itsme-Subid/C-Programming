#include <stdio.h>

int palindrome(int num)
{
    int reverse = 0, num2 = 0;
    num2 = num;

    while (num != 0)
    {
        reverse = reverse * 10 + num % 10;
        num = num / 10;
    }

    if (num2 == reverse)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void main()
{
    int num;
    printf("\t  ***Welcome to Palindrome Number Checker***\n\n\n\a");
    printf("Enter a number to check whether its a Palindrome Number or not\n\t\t\t(0 to exit)\n");
    scanf("%d", &num);
    if (num == 0)
    {
        goto exit;
    }
    else
    {
        printf("\t   ");
        if (palindrome(num))
        {

            printf("This number %d is a Palindrome number.\n", num);
        }
        else
        {

            printf("This number %d is not a Palindrome number.\n", num);
        }
        printf("\t\t        ***Thank You***\n\n\a");
    }
exit:
}
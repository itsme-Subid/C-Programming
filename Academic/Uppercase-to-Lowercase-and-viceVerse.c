#include <stdio.h>
#include <conio.h>
void main()
{
    // a char from lowercase to uppercase
    char A, B, a, b;
    printf("Enter a uppercase character and a lowercase character\n");
    scanf("%c %c", &A, &a);
    b = a - 32;
    B = A + 32;
    printf("%c %c\n", B, b);
    getch();
}
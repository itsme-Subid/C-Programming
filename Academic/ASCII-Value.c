#include <stdio.h>
#include <conio.h>
void main()
{
    clrscr();
    int ASCII = 0;
    printf("Enter a Character\n");
    ASCII = getche();
    printf("\nASCII value of \" %c \" = %d", ASCII, ASCII);
    getch();
}
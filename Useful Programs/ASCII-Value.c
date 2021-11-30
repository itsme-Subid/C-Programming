#include <stdio.h>
#include <conio.h>
void main()
{
    int ASCII = 0;
    clrscr();
    printf("Enter a Character\n");
    ASCII = getche();
    printf("\nASCII value of \" %c \" = %d", ASCII, ASCII);
    getch();
}
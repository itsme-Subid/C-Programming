#include <stdio.h>
#include <conio.h>
void main()
{
    //area and perimeter of a rectangle
    int l, w, a, p;
    printf("Enter length of your rectangle and width of your rectangle\n");
    scanf("%d %d", &l, &w);
    a = l * w;
    p = ((l + w) * 2);
    printf("Area = %d and Perimeter = %d\n", a, p);
    getch();
}
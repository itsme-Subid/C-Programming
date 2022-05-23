#include <stdio.h>
#include <conio.h>
void main(){
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value for a[%d]\n",i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The value of a[%d] is %d\n",i,a[i]);
    }
    
    getch();
}
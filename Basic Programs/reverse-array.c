#include <stdio.h>
#include <conio.h>
void main(){
    int i;
    printf("Enter how many values you need in an array\n");
    scanf("%d", &i);
    int a[i];
    for (int j = 0; j < i; j++)
    {
        printf("Enter the value for a[%d]\n",j);
        scanf("%d", &a[j]);
    }
    int b=0;
    for (int j = i-1; j >=0; j--,b++)
    {
        printf("Now the value of a[%d] is %d\n",b,a[j]);
    }
    
    getch();
}
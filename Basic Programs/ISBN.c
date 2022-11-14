#include <stdio.h>
#include <conio.h>

void main()
{
    // write a program that breaks down the ISBN number entered by the user
    int isbn, group, publisher, item, check_digit;
    printf("Enter ISBN: ");
    scanf("%d", &isbn);
    group = isbn / 100000000;   
    publisher = (isbn / 1000000) % 1000; 
    item = (isbn / 1000) % 1000;    
    check_digit = isbn % 10;   
    printf("Group: %d Publisher: %d Item: %d Check Digit: %d", group, publisher, item, check_digit);
    getch();
}
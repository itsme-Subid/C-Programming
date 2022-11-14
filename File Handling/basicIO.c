#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
    FILE *fp;
    char ch;
    system("cls");
    fp = fopen("test.txt", "w+");
    printf("Enter text. Press # to stop writing text into file : ");
    while ((ch = getchar()) != '#')
    {
        fputc(ch, fp);
    }
    fclose(fp);
    printf("File created successfully.\n");
    printf("Reading file now...\n");
    fp = fopen("test.txt", "r");
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    getch();
}
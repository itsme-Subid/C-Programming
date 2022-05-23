#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>

int randomNumbers();

void main()
{
    int n = 0, u = 0, c = 0;
    char name[30];
    printf("***Welcome to Stone,Paper,Scissor Game***\n\nRules of the game:-\n1. If both the players chose same then it will be a Tie and no score will be incremented to anyone.\n2. If you Wins then your score will be incremented and vice verse.\nNow lets Enjoy the game\nEnter your name:\n");
    gets(name);
    printf("\nYour name is %s\nAnd you are assigned as Player 1\nAnd Computer as Player 2", name);
    while (1)
    {
        printf("\n\nEnter 1 for Stone,\nEnter 2 for Paper,\nEnter 3 for Scissor, and\nOther Numbers to exit.\n");
        scanf("%d", &n);
        if (n - 1 == 0 && randomNumbers(3) == 0)
        {
            printf("%s chose Stone\nComputer also chose Stone\nTie\n", name);
        }
        else if (n - 1 == 1 && randomNumbers(3) == 1)
        {
            printf("%s chose Paper\nComputer also chose Paper\nTie\n", name);
        }
        else if (n - 1 == 2 && randomNumbers(3) == 2)
        {
            printf("%s chose Scissor\nComputer also chose Scissor\nTie\n", name);
        }
        else if (n - 1 == 0 && randomNumbers(3) == 1)
        {
            printf("%s chose Stone\nComputer chose Paper\n%s Lose\n", name, name);
            c++;
            printf("Score:-\n%s's Score is %d\nComputer's Score is %d", name, u, c);
        }
        else if (n - 1 == 0 && randomNumbers(3) == 2)
        {
            printf("%s chose Stone\nComputer chose Scissor\n%s Wins\n", name, name);
            u++;
            printf("Score:-\n%s's Score is %d\nComputer's Score is %d", name, u, c);
        }
        else if (n - 1 == 1 && randomNumbers(3) == 0)
        {
            printf("%s chose Paper\nComputer chose Stone\n%s Wins\n", name, name);
            u++;
            printf("Score:-\n%s's Score is %d\nComputer's Score is %d", name, u, c);
        }
        else if (n - 1 == 1 && randomNumbers(3) == 2)
        {
            printf("%s chose Paper\nComputer chose Scissor\n%s Lose\n", name, name);
            c++;
            printf("Score:-\n%s's Score is %d\nComputer's Score is %d", name, u, c);
        }
        else if (n - 1 == 2 && randomNumbers(3) == 0)
        {
            printf("%s chose Scissor\nComputer chose Stone\n%s Lose\n", name, name);
            c++;
            printf("Score:-\n%s's Score is %d\nComputer's Score is %d", name, u, c);
        }
        else if (n - 1 == 2 && randomNumbers(3) == 1)
        {
            printf("%s chose Scissor\nComputer chose Paper\n%s Wins\n", name, name);
            u++;
            printf("Score:-\n%s's Score is %d\nComputer's Score is %d", name, u, c);
        }
        else
        {
            goto exit;
        }
        printf("\n");
    }
exit:
    getch();
}

int randomNumbers(int n)
{
    srand(time(NULL));
    return rand() % n;
}
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void main()
{
    struct node *top = NULL, *temp, *ptr;
    int choice, item;
    while (1)
    {
        printf("1. Push 2. Pop 3. Exit \n");
        printf("Enter your choice :  \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            temp = (struct node *)malloc(sizeof(struct node));
            printf("Enter the data :  \n");
            scanf("%d", &temp->data);
            temp->next = top;
            top = temp;
            break;
        case 2:
            if (top == NULL)
                printf("Stack is empty \n");
            else
            {
                ptr = top;
                top = top->next;
                printf("Deleted element is %d\n", ptr->data);
                free(ptr);
            }
            break;
        case 3:
            exit(0);
        default:
            printf("Invalid choice \n");
        }
    }
}
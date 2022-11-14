#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void main()
{
    struct node *head, *p;
    head = (struct node *)malloc(sizeof(struct node));
    p = head;
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    n--;
    while (n-- > 0)
    {
        p->next = (struct node *)malloc(sizeof(struct node));
        p = p->next;
    }
    p->next = NULL;
    p = head;
    n = 1;
    
    // input value for linked list
    while (p != NULL)
    {
        printf("Enter the data for Node %d: ", n);
        scanf("%d", &p->data);
        p = p->next;
        n++;
    }
    p = head;
    n--;

    // bubble sort
    int temp;
    for (int j = 0; j < n - 1; j++)
    {
        p = head;
        for (int k = 0; k < n - j - 1; k++)
        {
            if (p->data > p->next->data)
            {
                temp = p->data;
                p->data = p->next->data;
                p->next->data = temp;
            }
            p = p->next;
        }
    }

    // print the sorted linked list
    p = head;
    printf("The sorted linked list is: ");
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}
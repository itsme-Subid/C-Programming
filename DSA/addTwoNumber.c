#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *addTwoNumbers(struct node *first, struct node *second)
{
    struct node *result = NULL, *temp = NULL;
    int carry = 0;
    while (first != NULL || second != NULL)
    {
        int sum = 0;
        if (first != NULL)
        {
            sum += first->data;
            first = first->next;
        }
        if (second != NULL)
        {
            sum += second->data;
            second = second->next;
        }
        sum += carry;
        carry = sum / 10;
        sum = sum % 10;
        if (result == NULL)
        {
            result = (struct node *)malloc(sizeof(struct node));
            result->data = sum;
            temp = result;
        }
        else
        {
            temp->next = (struct node *)malloc(sizeof(struct node));
            temp = temp->next;
            temp->data = sum;
        }
    }
    if (carry > 0)
    {
        temp->next = (struct node *)malloc(sizeof(struct node));
        temp = temp->next;
        temp->data = carry;
    }
    temp->next = NULL;
    return result;
}

void main()
{
    struct node *head, *p;
    head = (struct node *)malloc(sizeof(struct node));
    p = head;
    int i;
    printf("Enter the number of digit: ");
    scanf("%d", &i);
    i--;
    while (i-- > 0)
    {
        p->next = (struct node *)malloc(sizeof(struct node));
        p = p->next;
    }
    p->next = NULL;
    p = head;

    i = 1;

    // input value for first linked list
    while (p != NULL)
    {
        printf("Enter the data for Node %d: ", i);
        scanf("%d", &p->data);
        p = p->next;
        i++;
    }

    struct node *head1, *q;
    head1 = (struct node *)malloc(sizeof(struct node));
    q = head1;
    printf("Enter the number of digit: ");
    scanf("%d", &i);
    i--;
    while (i-- > 0)
    {
        q->next = (struct node *)malloc(sizeof(struct node));
        q = q->next;
    }
    q->next = NULL;
    q = head1;

    i = 1;

    // input value for second linked list
    while (q != NULL)
    {
        printf("Enter the data for Node %d: ", i);
        scanf("%d", &q->data);
        q = q->next;
        i++;
    }
    p = addTwoNumbers(head, head1);
    i = 1;

    // print result
    while (p != NULL)
    {
        printf("The data of %d Node is %d\n", i, p->data);
        p = p->next;
        i++;
    }
    printf("the program has ended\n");
}

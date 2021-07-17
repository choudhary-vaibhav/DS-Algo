#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

int main()
{
    node *head=NULL;

    node *n=(struct node*)malloc(sizeof(node));

    if(n!=NULL)
    {
        n->data=5;
        n->next=NULL;
    }

    head=n;

    printf("First Node:%d",head->data);

    free(head);

    return 0;
}
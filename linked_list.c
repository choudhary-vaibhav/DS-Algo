#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

void Print_list(node *n);

//Given a reference (pointer to pointer) for the head of the list
void Insert_At_Beg(node **n, int data_input);

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

    //printf("First Node:%d",head->data);
    Print_list(head);

    int num;
    printf("\nEnter the element:");
    scanf("%d",&num);

    Insert_At_Beg(&head,num);

    

    Print_list(head);

    free(head);

    return 0;
}

void Print_list(node *n)
{
    printf("\nPrinting List\n");
    while(n!=NULL)
    {
        printf("%d\t",n->data);
        n=n->next;
    }

}

void Insert_At_Beg(node **n, int data_input)
{
    node *temp=(struct node*)malloc(sizeof(node));
    temp->next=NULL;
    

    if(temp!=NULL)
    {
        temp->data=data_input;

        if(n==NULL)
        {
            *n=temp; 
        }else
        {
            temp->next=*n;
            *n=temp;

        }
    }

}
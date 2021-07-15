#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int num;
    struct node *next;
}
node;

void Insert_at_beg();
void Insert_at_end();
void Delete_at_beg();
void Delete_at_end();

node *list=NULL;

int main()
{
    //node *list=NULL;

   // node *tmp=(struct node*)malloc(sizeof(node));

   // if( tmp!= NULL)
    {
      //  tmp->num=1;
      //  tmp->next=NULL;
    }

   // list=tmp;

   // printf("Size of a node:%d\n",sizeof(node));

  Insert_at_beg();
  Insert_at_beg();
    
    printf("\nValue in first node:%d\n",list->next->num);

    free(list);

    return 0;

}

void Insert_at_beg()
{
    //node *list=NULL;

    node *temp=(struct node*)malloc(sizeof(node));
    temp->next=NULL;


    printf("Enter the element:");
    scanf("%d",&temp->num);    
    
    if(list==NULL)
    {
        list=temp;
    }else
    {
        temp->next=list;
        list=temp;
    }
        

    
}



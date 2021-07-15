#include<stdio.h>
#include<conio.h>

void Selection(int A[], int size);

int main()
{
    int A[]={3,6,2,9,5,1,7};

    printf("Array before sorting:");
    for(int i=0;i<7;i++)
        printf("%d, ",A[i]);

    Selection(A,7);

    printf("\nArray after sorting:");
    for(int i=0;i<7;i++)
        printf("%d, ",A[i]);

    getch();
    return 0;
}

void Selection(int A[], int size)
{
    int temp;

    for(int i=0; i<size; i++)
    {
        temp=A[i];

        for(int j=i+1; j<(size); j++)
        {
            if(A[j]<temp)
            {
                temp=temp+A[j];
                A[j]=temp-A[j];
                temp=temp-A[j];
            }

        }
        A[i]=temp;
    }

}
#include<stdio.h>
#include<conio.h>

void Bubble(int A[], int size);

int main()
{
    int A[]={3,6,2,9,5,1,7};

    printf("Array before sorting:");
    for(int i=0;i<7;i++)
        printf("%d, ",A[i]);

    Bubble(A,7);

    printf("\nArray after sorting:");
    for(int i=0;i<7;i++)
        printf("%d, ",A[i]);

    getch();
    return 0;
}

void Bubble(int A[], int size)
{
    for(int i=0; i<size; i++)
    {
        int flag=0;
        for(int j=0; j<(size-1); j++)
        {
            if(A[j]>A[j+1])
            {
                A[j]=A[j]+A[j+1];
                A[j+1]=A[j]-A[j+1];
                A[j]=A[j]-A[j+1];
                flag=1;
            }
        }

        if(flag==0)
            break;
    }
}
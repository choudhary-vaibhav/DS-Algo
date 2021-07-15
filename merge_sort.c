#include<stdio.h>
#include<conio.h>

void MergeSort(int A[],int left, int right);
void Merge(int A[],int left, int mid, int right);

int main()
{
    int A[]={3,6,2,9,5,1,7};

    printf("Array before sorting:");
    for(int i=0;i<7;i++)
        printf("%d, ",A[i]);

    MergeSort(A,0,6);

    printf("\nArray after sorting:");
    for(int i=0;i<7;i++)
        printf("%d, ",A[i]);

    getch();
    return 0;
}

void MergeSort(int A[],int left, int right)
{

    if(left<right)
    {
        int mid = left + (right-left)/2;

        MergeSort(A,left,mid);

        MergeSort(A, mid+1, right);

        Merge(A, left, mid, right);
    }
}

void Merge(int A[],int left, int mid, int right)
{
    int n1=mid-left+1;
    int n2=right-mid;

    int L[n1],R[n2];

    for(int i=0; i<n1; i++)
        L[i]=A[left+i];

    for(int i=0; i<n2; i++)
        R[i]=A[mid+1+i];

    int i=0;
    int j=0;
    int k=left;

    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            A[k]=L[i];
            i++;
        }else
        {
            A[k]=R[j];
            j++;
        }
        k++;
    }

    
    while (i<n1)
    {
        A[k]=L[i];
        i++;
        k++;
    }

    while (j<n2)
    {
        A[k]=R[j];
        j++;
        k++;
    }
    
    
}
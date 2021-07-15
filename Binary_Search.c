#include<stdio.h>
#include<conio.h>

int Binary(int A[],int start,int end,int num);

int main()
{
    int A[5],num;

    printf("Enter an array(size 5)\n");

    for(int i=0;i<5;i++)
        scanf("%d",&A[i]);

    printf("Number, you wanna search:");
    scanf("%d",&num);

    int Pos=Binary(A,0,4,num)+1;

    if(Pos==0)
    printf("Number Not Found!");
    else
    printf("Number Found at Position %d!",Pos);

    getch();
    return 0;
}

int Binary(int A[],int start,int end,int num)
{
    if(start<=end)
    {
        int mid=start+(end-start)/2;

        if(A[mid]==num)
            return mid;

        if(A[mid]>num)
            return Binary(A,start,mid-1,num);

            return Binary(A,mid+1,end,num);
    }

    return -1;

}



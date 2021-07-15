#include<stdio.h>
#include<conio.h>

int main()
{
    int A[5],num;

    printf("Enter an array(size 5)\n");

    for(int i=0;i<5;i++)
        scanf("%d",&A[i]);

    printf("Number, you wanna search:");
    scanf("%d",&num);

    for(int i=0;i<5;i++)
    {
        if(num==A[i])
        {
            printf("Found at position %d!",i+1);
            getch();
            return 0;
        }
            
    }

    printf("Not Found!");
    getch();
    return 1;
}
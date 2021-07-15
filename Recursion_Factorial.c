#include<stdio.h>
#include<conio.h>

int Factorial(int num);

int main()
{
    int num,factorial;

    printf("Enter a no:");
    scanf("%d",&num);

    factorial=Factorial(num);

    printf("\nFactorial:%d",factorial);

    getch();
    return 0;
}

int Factorial(int num)
{
    if (num==0 || num==1)
        return 1;
    else
        return (num*Factorial(num-1));
    
}
#include<stdio.h>
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(x%5==0)
    {
        printf("number is divisible by 5");
    }
    else
    {
        printf("number is not divisible by 5");
    }
    printf("\n");
    return 0;
}
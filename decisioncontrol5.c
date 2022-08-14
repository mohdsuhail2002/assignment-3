#include<stdio.h>
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if((x>99) && (x<1000))
    {
        printf("three digit number");
    }
    else
    {
        printf("x is not three digit number");
    }
    printf("\n");
    return 0;
}
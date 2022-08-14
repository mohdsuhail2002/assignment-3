#include<stdio.h>
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(x%3==0||x%7==0)
    {
        printf("number is either divisible 3 or 7");
    }
    else
    {
        printf("number not divisible by 3 or 7");
    }
    printf("\n");
    return 0;
}
#include<stdio.h>
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("number is even");
    }
    else 
    {
        printf("odd number");
    }
    printf("\n");
    return 0;
    
    }

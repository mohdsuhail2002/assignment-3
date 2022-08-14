#include<stdio.h>
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(x>=0)
    {
        printf("postive number");
    } 
    else
    {
        printf("non-positive number");
    }
    printf("\n");
    return 0;
}
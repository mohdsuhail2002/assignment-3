#include<stdio.h>
int main()
{
    int x,y;
    printf("enter two number");
    scanf("%d %d",&x,&y);
    if(x>y)
    {
        printf("%d is greater number",x);
    }
    else if(x<y)
    {
        printf("%d is greter number",y);
    }
    else
    {
        printf("%d is equal to %d",x);
    }
    printf("\n");
    return 0;
    
}
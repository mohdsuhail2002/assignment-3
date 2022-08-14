#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the different sides a traingle");
    scanf("%d %d %d",&a,&b,&c);
    if(a==0||b==0||c==0)
    {
        printf("invalid entry");
    }
     else if(a+b>c||a+c>b||b+c>a)
    {
        printf("its a triangle with sides %d %d %d",a,b,c);
    }
    else
    {
        printf("not a triangle");
    }
    printf("\n");
    return 0;
}
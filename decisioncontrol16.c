#include<stdio.h>
int main()
{
    int x;
    printf("enter a character");
    scanf("%d",&x);
    if(x>=65&&x<=90)
    {
        printf("upper case letter");
    }
    else if(x>=97&&x<=122)
    {
        printf("lower case letter");
    }
    else if (x>=0&&x<=9)
    {
        printf("digit value");
    } else
    {
        printf("special character or other integer value");
    }
    printf("\n");
    return 0;
}
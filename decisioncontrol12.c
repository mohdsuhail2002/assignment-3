#include<stdio.h>
int main()
{
    char x;
    printf("enter a alphabet");
    scanf("%c",&x);
    if(x>=65&&x<=90)
    {
        printf("upper case letter");
    }
    else if(x>=97&&x<=122)
    {
        printf("lower case letter");
    }
    else 
    {
        ("integer value");
    } printf("\n");
    return 0;
}
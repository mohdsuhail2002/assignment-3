#include<stdio.h>
int main()
{
    int a,b,c,s;
    printf("enter three numbers");
    scanf("%d %d %d",&a,&b,&c);
    s=a>b?a>c?a:c:b>c?b:c;
    return 0;
}
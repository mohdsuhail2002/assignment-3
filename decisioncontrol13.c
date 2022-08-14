#include<stdio.h>
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(x%2==0&&x%3==0){
        printf("number is divisible by 2 and 3");
    }
    else{
        printf("number not divisible by 2 and 3 ");
    }
    printf("\n");
    return 0;
}
#include<stdio.h>
int main()
{
    float cost,sell,pp,lp;
    printf("enter the cost and selling price of the product");
    scanf("%f %f",&cost,&sell);
    if(sell>cost)
    {pp=(sell/cost)*100;
    printf("profit percentage is %f",pp);
    }
    else if(sell==cost)
    {
        printf("no profit no loss");
    }
    else
    {
        lp=(sell/cost)*100;
        printf("loss percentage is %f",lp);
    }
    return 0;
    
}
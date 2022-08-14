#include<stdio.h>
int main()
{
    float a,b,c,d,e,x,per;
    printf("enter the marks of each subject");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    if(a>=33&&a<=100)
    {
        printf("passed in subject 1");
    }
    else if(a>100||a<0)
    {
        printf("invalid entry");
    } else
    {
        printf("failed in subject 1");
    } 
    printf("\n");
    if(b>=33&&b<=100)
    {
        printf("passed in subject 2");
    }
    else if(b>100||b<0)
    {
        printf("invalid entry");
    }else
    {
        printf("failed in subject 2");
    }
    printf("\n");
    if(c>=33&&c<=100)
    {
        printf("passed in subject 3");
    }
    else if(c>100||c<0)
    {
        printf("invalid entry");
    }else
    {
        printf("failed in subject 3");
    } 
    printf("\n");
    if(d>=33&&d<=100)
    {
        printf("passed in subject 4");
    }
    else if(d>100||d<0)
    {
        printf("invalid entrt");
    }else
    {
        printf("failed in subject 4");
    } 
    printf("\n");
    if(e>=33&&e<=100)
    {
        printf("passed in subject 5");
    }
    else if(e>100||e<0)
    {
        printf("invalid entry");
    }
    else
    {
        printf("failed in subject 5");
    }
    printf("\n");
    x=a+b+c+d+e;
    per=(x/500)*100;
    if((a>=33&&a<=100)&&(b>=33&&b<=100)&&(c>=33&&c<=100)&&(d>=33&&d<=100)&&(e>=33&&e<=100))
    {
        printf(" overall passed");
    }
    else
    {
        printf("failed");
    }
    printf("\n");
    return 0;
    
}

#include<stdio.h>
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    if(n%5==0)
    {
        if(n%3==0)
        {
            printf("multiple of 15");
        }
        else
        {
            printf("multiple of 5 only");
        }
    }
    else if(n%3==0)
    {
        printf("multiple of 3");
    }
    else{
        printf("multiple of none");
    }

    return 0;
}


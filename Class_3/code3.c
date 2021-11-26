#include<stdio.h>
int main()
{
    int n;
    printf("enter number : ");
    scanf("%d",&n);
    if(n>=0 && n<=100)
    {
        printf("in rang ");
    }
    else{
        printf("not in rang ");
    }


    return 0;
}


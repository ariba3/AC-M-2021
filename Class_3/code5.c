#include<stdio.h>
int main()
{
    char n;
    printf("enter number : ");
    scanf("%c",&n);
    if(n>=65&& n<=90 )
    {
        printf("%c ",n+32);
    }
    else{
        printf("%c ", n-32);
    }


    return 0;
}

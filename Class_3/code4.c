#include<stdio.h>
int main()
{
    char n;
    printf("enter number : ");
    scanf("%c",&n);
    if((n>=65 && n<=90 )|| (n >= 97 && n <= 122 ))
    {
        printf("in rang ");
    }
    else{
        printf("not in rang ");
    }


    return 0;
}

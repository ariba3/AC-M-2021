#include<stdio.h>
int main()
{mm
    char n;
    printf("enter number : ");
    scanf("%c",&n);
    if((n>=65 && n<=90 )|| (n >= 97 && n <= 122 ))
    {
        if((n=='a'||n=='e'|n=='i'||n=='o'||n=='u')||(n=='A'||n=='E'|n=='I'||n=='O'||n=='U'))
        {
            printf("alphabet and vowel");
        }
        else{
            printf("alphabet and consonent ");
        }
    }else if(n>=48&& n<=57)
    {
        printf("Digit");
    }
    else{
        printf("Special char");
    }


    return 0;
}


#include<stdio.h>
int main()
{
    int l,n=0,a;
    char str[100];
    scanf("%s",str);
    l=strlen(str);
    for(int i=0;i<l;i++)
    {
       n=n+str[i]; 
    }
    a=n/l;
    printf("%c",a);
    return 0;
}

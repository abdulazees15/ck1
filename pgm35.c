#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[200];
    int i,n,ss=0;
    gets(a);
    n=strlen(a);
    for(i=0;i<n;i++)
        {
    if(isdigit(a[i]))
         {
            ss++;
        }
    }
    printf("%d",ss);
}

#include<stdio.h>
#include<ctype.h>
void main()
{
    int a;
    scanf("%d",&a);
    if(!isdigit(a))
    {
        printf("yes");
    }
    else 
    {
        printf("No");
    }
}

#include<stdio.h>
#include<ctype.h>
void main()
{
    int h,a,c,e;
    scanf("%d",&h);
    a=h/60;
    e=h-(a*60);
    printf("%d %d",a,e);
}

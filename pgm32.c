#include<stdio.h>
#include<string.h>
void main()
{
char s[100];
int i,c=0;
scanf("%[^\n]s",s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]==' ')
{
c++;
}
}
printf("%d",c+1);
}

#include<stdio.h>
main()
{
char s[200];
int c=1,i;
scanf("%[^\n]s",s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]=='.')
{
c++;
}
}
printf("%d",c);
}

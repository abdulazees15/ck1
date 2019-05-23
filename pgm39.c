#include<stdio.h>
void main()
{
int a[10],i,as=0;
for(i=0;i<10;i++)
{
    scanf("%d",&a[i]);
}
as=a[0];
  for(i=0;i<10;i++)
  {
      if(as<a[i])
      {
          as=a[i];
      }
  }
  printf("%d",as);
}

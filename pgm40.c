#include <stdio.h>
 int main()
{
    int a=1,b=1,n,i,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d ",a);
        t=a+b;
        a=b;
        b=t;
    }
    return 0;
}

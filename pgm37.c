#include <stdio.h>
 void main()
{
    int n1,n2,tp;
    scanf("%d %d",&n1,&n2);
    tp=n1; 
    n1=n2;
    n2=tp;
     printf("%d %d",n1,n2);
    return 0;
}

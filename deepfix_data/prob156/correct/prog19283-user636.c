#include <stdio.h>
int main()
{   int n,m,i,j,sum1,sum2,sum;
    scanf("%d",&n);
    scanf("%d",&m);
    sum=0;
    sum2=0;
    for(j=0;j<=n-1;j++) {
    for(i=0;i<=(m-1);i++) {
        scanf("%d",&sum);
        sum1=sum+sum1; }
    sum2=sum1>sum2?sum1:sum2 ; }
    printf("%d",sum2);
    return 0; }
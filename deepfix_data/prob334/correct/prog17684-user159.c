#include <stdio.h>
#include <stdlib.h>
int main() {
   int n,k,i,j;
   scanf("%d%d",&n,&k);
   for(i=1;i<=n;i++)
    { for(j=i;j<=k-(2*n)+(2*i)+n-1;j++)
    {if(j<n)
        printf(" ");
        else printf("%d",(j-n+i)%10);}
        printf("\n");}
    return 0; }
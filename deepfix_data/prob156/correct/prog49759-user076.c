#include <stdio.h>
int main() {
   int n,m,i,j,ar[200];
    scanf("%d%d\n",&n,&m);
    for(i=1;i<=n;i=i+1)
    {    int sum=0;
        for(j=1;j<=m;j=j+1) {
                scanf("%d",&ar[j]);
                sum=sum+ar[j]; }
            ar[i]=sum;
            if(n==1)
                 printf("%d\n",ar[i]);
         printf("\n"); }
   for(i=1;i<=n;i=i+1) {
    if(ar[i]>=ar[i+1])
           printf("%d\t\n",ar[i]);
    else if(ar[i]<=ar[i+1])
           printf("%d",ar[i+1]); }
    return 0; }
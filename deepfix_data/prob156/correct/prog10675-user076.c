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
              if(i==1)
                { printf("%d\n",ar[i]);}
              else {
                   if(ar[i]<=ar[i+1])
                           printf("%d\t\n",ar[i]);
                   if(ar[i]>=ar[i+1])
                           printf("%d\t",ar[i+1]); }
         printf("\n"); }
    return 0; }
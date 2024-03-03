#include <stdio.h>
int main() {
    int i=0,n,m,j=0,k,sum=0,max;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {   sum=0;
        for(j=0;j<m;j++) {
            scanf("%d",&k);
            sum=sum+k; }
        if(max<sum) {
            max=sum; } }
       printf("%d",max);
    return 0; }
#include <stdio.h>
int main() {
    int i=0,n,m,j=0,k,sum=0,max;
    scanf("%d %d",&n,&m);
    while(i<n)
    {   sum=0;
        while(j<m) {
            scanf("%d",&k);
            sum=sum+k;
          j++; }
        if(max<sum) {
            max=sum;
        }i++; }
       printf("%d",max);
    return 0; }
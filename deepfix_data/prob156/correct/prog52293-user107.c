#include <stdio.h>
int main() {
    int n,m,f,sum,max,i,j;
    sum=0;
    max=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%d ",&f);
            sum=sum+f; }
        if(sum>max)
        max=sum; }
    printf("%d",max);
    return 0; }
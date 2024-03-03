#include <stdio.h>
int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    int i,j,k,s;
    int sum[n];
    for(i=0;i<n;i++){
        s=0;
        for(j=1;j<=m;j++){
            scanf("%d",&k);
            s+=k; }
        sum[i]=s; }
    int max=sum[0];
    for(i=1;i<n;i++){
        if(sum[i]>max)
           max=sum[i]; }
    printf("%d",max);
    return 0; }
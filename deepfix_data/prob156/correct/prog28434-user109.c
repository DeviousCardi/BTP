#include <stdio.h>
int main() {
    int n,m,sum,max=0;
    scanf("%d%d",&n,&m);
    int a[m];
    for(int j=0;j<n;j++){
        sum=0;
        for(int i=1;i<=m;i++){
            scanf("%d",&a[i-1]);
            sum=sum+a[i-1]; }
        if(sum>max) max=sum; }
    printf("%d",max);
    return 0; }
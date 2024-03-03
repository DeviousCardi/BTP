#include <stdio.h>
int main() {
    int m,n,i,j,sum[200],f[200],s;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            sum[i-1]=0;
            scanf("%d",&f[j-1]);
            sum[i]=sum[i-1]+f[j-1];
        }}
        s=sum[i];
for(i=2;i<=n;i++){
    if(s<sum[i])
    s=sum[i];}
    printf("%d",s);
    return 0; }
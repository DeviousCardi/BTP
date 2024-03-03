#include <stdio.h>
int main() {
    int m,n,i,j,sum[200],f[200],s;
    scanf("%d%d",&n,&m);
    for(i=0;i<=n;i++){
        for(j=0;j<=m;j++){
            sum[i]=0;
            scanf("%d",&sum[i]);
            scanf("%d",&f[j]);
            sum[i]=sum[i]+f[j];
        }}
        s=sum[i];
for(i=2;i<=n;i++){
    if(s<sum[i])
    s=sum[i];}
    printf("%d",s);
    return 0; }
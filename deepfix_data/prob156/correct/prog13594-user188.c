#include <stdio.h>
int main() {
    int j,i,r,t,n,m,s=0,k=0;
    scanf("%d %d",&n,&m);
    for(i=1;1<=n;i++){
        for(j=1;j<=m;j++){
            scanf("%d",&r);
            s=s+r; }
        scanf("%d",&t);
        k=k+t; }
    if(k>s)
    printf("%d",k);
    else
    printf("%d",s);
    return 0; }
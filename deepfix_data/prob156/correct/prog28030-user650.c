#include <stdio.h>
int main() {
    int i,j,x,n,m,sum=0,max=0;
    scanf("%d %d\n",&n,&m);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            scanf("%d",&x);
            sum=sum+x;}
            printf("\n");
            if(sum>max)
            max=sum;
    }printf("%d",max);
    return 0; }
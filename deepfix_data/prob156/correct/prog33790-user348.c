#include <stdio.h>
int main() {
    int m,n,i,j,sum=0,p,max=0;
    scanf("%d %d",&n,&m);
    for(j=1;j<=n;j++){
             for(i=1;i<=m;i++){
                     scanf("%d",&p);
        sum=sum+p; }
    if(max<=sum){
        max=sum; } }
printf("%d",max);
    return 0; }
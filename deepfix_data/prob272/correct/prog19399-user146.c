#include <stdio.h>
int main(){
    int t[100],i,n;
    scanf("%d%d%d",&t[0],&t[1],&n+1);
    for(i=2;i<=n+1;i++){
        t[n-1]=t[n-2]+t[n-3]-2; }
    printf("%d",t[n]);
    return 0; }
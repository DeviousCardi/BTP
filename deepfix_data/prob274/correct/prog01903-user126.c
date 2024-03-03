#include <stdio.h>
int main(){
    int n,c,i,j,count,l,m;
    scanf("%d",&n);
    int room[n+1],array[n+1];
    array[0]=-1;
    c=1;
    m=0;
    for(i=1;i<=n;i++) {
        scanf("%d",&room[i]); }
    for(i=0;i<=n;i++)
    printf("%d",room[i]);
    return 0; }
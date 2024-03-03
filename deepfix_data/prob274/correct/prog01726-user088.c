#include <stdio.h>
int main(){
    int n,arr[100],rep[1000],i,j,flag;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    rep[0]=1;
    for(i=1;i<100;i++)
    rep[i]=arr[rep[i-1]]-1;
    for(i=0;i<100;i++)
    printf("%d ",rep[i]);
    return 0; }
#include <stdio.h>
int main(){
    int n,k,i,j;
    scanf("%d%d",&n,&k);
    int a[n],count[k+1];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=k;i++)
    count[i]=0;
    for(i=0;i<n;i++){
        count[a[i]]++; }
    for(i=0;i<k+1;i++){
        for(j=0;j<count[i];j++)
        printf("%d ",i); }
    return 0; }
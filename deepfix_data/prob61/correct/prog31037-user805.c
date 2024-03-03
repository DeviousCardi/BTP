#include <stdio.h>
int main(){
    int n,k,i,j;
    scanf("%d%d",&n,&k);
    int a[n],count[k];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<k;i++)
    count[i]=0;
    for(i=0;i<n;i++){
        count[a[i]-1]++; }
    for(i=0;i<k;i++){
        for(j=0;j<count[i];j++)
        printf("%d",i+1); }
    return 0; }
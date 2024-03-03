#include <stdio.h>
int main(){
    int n,arr[100],rep[1000],count[101],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    rep[0]=1;
    for(i=1;i<1000;i++)
    rep[i]=arr[rep[i-1]-1;
    for(i=1;i<1000;i++) {
        for(j=i-1;rep[j]!=rep[i];j--); }
    printf("%d",i-j);
    return 0; }
#include <stdio.h>
int main(){
    int n,t,k ,arr[1000],i,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d ",&arr[i]);
    t=n-1;
    k=(n+1)/2 ;
     printf("%d %d",&t,&k);
    return 0; }
#include <stdio.h>
int main(){
    int n,t,k,j,count=0,arr[1000],i,x,a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d ",&arr[i]); {
    for(i=0;i<n;i++)
    {     for(int j=0;j<n;j++)
    if(arr[i]==a[j])
    count+=j; } }
    t=count;
    k=(n+1)/2 ;
     printf("%d %d",t,k);
    return 0; }
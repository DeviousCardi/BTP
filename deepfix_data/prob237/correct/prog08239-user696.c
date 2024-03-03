#include<stdio.h>
int arr[100],i,j,n,k,max,count;
int getInversions(int l,int r)
{int t;
    for(i=l,t=0;i<=r;i++){
        for(j=i+1;j<=r;j++){
            if(arr[i]>arr[j]){
                t=t+1; } } }
return (t); }
int main() {
    scanf("%d\n%d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    for(i=0,max=0;(i<=n-k)&&(i+k-1<n);i++){
        count=getInversions(i,i+k-1);printf("%d",count);
        if(max<count){
            max=count; } }
    printf("%d",max);
    return 0; }
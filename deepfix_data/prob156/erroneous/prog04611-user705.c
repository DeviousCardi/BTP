#include <stdio.h>
int main()
{ int n,m,max;
scanf("%d%d",&n,&m);
int arr[10000],sum[1000];
for(int i=0;i<n*m;i++){
    scanf("%d",&arr[i]); }
for(int i=0;i<n;i++) {
    sum[i]=0;
    for(int k=n;k>0;k--) {
    for(int j=m*(n-k);j<m*(n-k+1);j++) {
    sum[i]=sum[i]+arr[j]; } } }
max=sum[0];
for(int i=0;i<n;i++){
    if(max<sum[i]){
        max=sum[i] } }
printf("%d",max);
    return 0; }
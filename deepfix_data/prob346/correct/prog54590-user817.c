#include <stdio.h>
int main(){
    int i,j,a,n, sum[10000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d" ,&sum[i]);
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
        if(sum[i]>sum[j]) {
            a=sum[i];
            sum[i]=sum[j];
            sum[j]=a; } }
    for(i=0;i<n;i++)
    printf("%d",sum[i]); } }
#include<stdio.h>
int sum=0,a[n];
int rsum(a[n]){
    sum=sum+a[n];
    n++;
    rsum(a[n]);
    return sum; }
int main() {
    int n,i,a[n];
    scanf("%d\n",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]); }
    sum=rsum(a[n]);
    printf("%d",sum);
    return 0; }
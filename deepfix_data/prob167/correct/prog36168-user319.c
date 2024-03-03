#include<stdio.h>
int sum=0,n;
int rsum(n){
    sum=sum+n;
    n++;
    rsum(n);
    return sum; }
int main() {
    int n,i,a;
    scanf("%d\n",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a); }
    sum=rsum(n);
    printf("%d",sum);
    return 0; }
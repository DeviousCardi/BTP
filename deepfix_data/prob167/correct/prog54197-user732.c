#include<stdio.h>
int main() {
    int sum();
 printf("%d",sum);
    return 0; }
int sum() {
    int n,i,sum ;
    scanf("%d",&n);
    int a[n] ;
    sum=0 ;
    for(i=0;i<=n;i++){
        scanf("%d",&a[i]); }
    for(i=0;i<=n;i++){
        sum=sum+a[i] ; }
    return sum; }
#include<stdio.h>
int main() {
    int n,i,sum ;
    scanf("%d",&n);
    int a[n] ;
    sum=0 ;
    for(i=0;i<=n;i++){
        scanf("%d",&a[i]); }
    for(i=0;i<=n;i++){
        sum=sum+a[i] ; }
    printf("%d",sum);
    return 0; }
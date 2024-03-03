#include<stdio.h>
long long int sum(int a[],int n){
    if(n==1)return a[0];
    else return sum( a, n-1)-a[n-1]; }
int main() {
    int n;
    scanf("%d",&n);
    int i;
    long long int b;
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    b=sum(a,n);
    printf("%lld",b);
    return 0; }
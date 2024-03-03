#include<stdio.h>
int add(long a[],long n,long sum){
        sum=sum+a[n-1];
        if (n==0) return sum;
        return add(a,n-1,sum); }
int main() {
    int n,s=0,i;
    scanf("%ld",&n);
    int a[n];
    for (i=0;i<n;i++){
        scanf("%ld",&a[i]); }
    s=add(a,n,0);
    printf("%ld",s);
    return 0; }
#include<stdio.h>
long int add(long int a[],int n,long int sum){
        sum=sum+a[n-1];
        if (n==0) return sum;
        return add(a,n-1,sum); }
int main() {
    int n;
    long int s;
    int i;
    scanf("%d",&n);
    long int a[n];
    for (i=0;i<n;i++){
        scanf("%ld",&a[i]); }
    s=add(a,n,0);
    printf("%ld",s);
    return 0; }
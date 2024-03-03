#include<stdio.h>
long int n,a[100000];
long int product( long int[],long int);
long int res=1;
int main() {
    long int i;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
        scanf("%ld",&a[i]);
    res=product(a,n);
    printf("%ld",res);
    return 0; }
long int product(long int a[],long int k){
    k--;
    if(k==0)
        return a[0];
    return a[k]*product(a,k); }
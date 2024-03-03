#include<stdio.h>
long long int p=1;
long long int product(long long int b[],long long int index,long long int size) {
    if(index==size-1)
    return p;
    p=p*b[index];
    return product(b,index+1,size); }
int main() {
    long long int n;
    long long int a[10];
    scanf("%lld\n",&n);
    for(long long int i=0;i<n;i++)
    scanf("%lld ",&a[i]);
    long long int f=product(a,0,n);
    printf("%lld",f);
    return 0; }
#include<stdio.h>
int flag=-1;
long long int diff(long long int a[],int n) {
    if(n==0)
    return 0;
    return a[0]+diff(&a[1],n-1); }
int main() {
    int n,i;
    long long int a[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%ld",&a[i]);
    printf("%ld",2*a[0]-diff(a,n));
    return 0; }
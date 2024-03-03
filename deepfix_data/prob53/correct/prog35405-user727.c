#include<stdio.h>
int diff(long int a[],int n) {
    if(n==1)
    return 0;
    printf("%d\n",a[0]-diff(&a[1],n-1));
    return a[0]-diff(&a[1],n-1); }
int main() {
    int n,i;
    long int a[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%ld",&a[i]);
    printf("%d",diff(a,n));
    return 0; }
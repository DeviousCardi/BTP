#include<stdio.h>
long int sum(long int a[],int n,int i) {
    if(i==n-1) {
        return a[n-1]; }
    else {
        long int m=a[i]-a[i+1];
        a[i+1]=m;
        return sum(a,n,i+1); } }
int main() {
    long int a[10000];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
     scanf("%ld",&a[i]);
    printf("%ld",sum(a,n,0));
    return 0; }
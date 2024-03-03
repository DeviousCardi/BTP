#include<stdio.h>
int sum(long int a[],long int n,long int i) {
    if(i>=n-1) {
        scanf("%ld",&a[n-1]);
        if(i!=0)return -a[i];
        else return a[i]; }
    else {
        scanf("%d",&a[i]);
        if(i==0)
        return a[i]+sum(a,n,i+1);
        else
        return -a[i]+sum(a,n,i+1); } }
int main() {
    long int a[10000];
    long int n;
    scanf("%ld",&n);
    printf("%d",sum(a,n,0));
    return 0; }
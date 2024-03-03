#include<stdio.h>
#include<limits.h>
int sum(int a[], n, temp) {
    if(n==-1) return temp;
    temp=temp+a[n];
    return sum(a, n-1, temp); }
int main() {
    printf("%d %d\n",INT_MAX,INT_MIN)
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    printf("%d",sum(a,n-1,0));
    return 0; }
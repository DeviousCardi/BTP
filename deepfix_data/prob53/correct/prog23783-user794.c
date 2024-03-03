#include<stdio.h>
int sum(int a[],int n){
    if(n==1)return a[0];
    return sum( a, n-1)-a[n-1]; }
int main() {
    int n;
    scanf("%d",&n);
    int i,b;
    int a[n];
    for(i=0;i<n-1;i++){
        scanf("%d",&a[i]); }
    b=sum(a,n);
    return 0; }
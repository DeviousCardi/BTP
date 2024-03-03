#include<stdio.h>
int sum(int n,int ar[n]) {
    int add=0;
    if(n!=1)
    add=ar[n-1]+sum(n-1,ar);
    else
    add=ar[n-1];
    return add; }
int main() {
    int i,n;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<=n-1;i++) {
        scanf("%d",&ar[i]); }
    printf("%d",sum(n,ar));
    return 0; }
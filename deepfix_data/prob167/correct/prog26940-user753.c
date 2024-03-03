#include<stdio.h>
long int sum(int n,long int ar[n]) {
    long int add=0;
    if(n!=1)
    add=ar[n-1]+sum(n-1,ar);
    else
    add=ar[n-1];
    return add; }
int main() {
    int i,n;
    scanf("%d",&n);
    long int ar[n];
    for(i=0;i<=n-1;i++)
    scanf("%li",&ar[i]);
    printf("%li",sum(n,ar));
    return 0; }
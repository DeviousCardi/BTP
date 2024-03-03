#include<stdio.h>
int su(int ar[],int n) {
    if(n=0)
    return ar[0];
    else
    return sub(ar,n-1)-n; }
int main() {
    int n,ar[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
    printf("%d",sub(ar,n));
    return 0; }
#include<stdio.h>
int sub(int ar[],int n) {
    if(n==1)
    return ar[0];
    else
    return sub(ar,n-1)-ar[n]; }
int main() {
    int n,i,ar[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
    printf("%d",sub(ar,n));
    return 0; }
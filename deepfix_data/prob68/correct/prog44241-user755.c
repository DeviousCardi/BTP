#include<stdio.h>
long int p(int a[],int n) {
    if(n==1)
        return a[0];
    else
        return a[n-1]*p(a,n-1); }
int main() {
    int n,i;
    long int ans;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    ans=p(arr,n);
    printf("%ld",ans);
    return 0; }
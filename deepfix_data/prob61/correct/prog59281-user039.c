#include <stdio.h>
int main() {
    int n,k;
    scanf("%d%d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int count[k+1];
    for(int i=0;i<=k;i++)
    count[i]=0;
    return 0; }
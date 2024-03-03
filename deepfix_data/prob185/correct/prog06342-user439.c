#include <stdio.h>
#include<stdlib.h>
int sum(int a[],int n,int k) {
    if(k==0)
    return 1;
    if(n==0&&k!=0)
    return 0;
    if(a[n-1]>k)
    return sum(a,n-1,k);
    else {
        return sum(a,n-1,k-a[n-1])||sum(a,n-1,k); } }
int main() {
    int n,k=0;
    int* a;
    scanf("%d%d",&n,&k);
    a=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    scanf("%d",a[i]);
    if(sum(a,n,k))
    printf("YES");
    else
    printf("NO");
    return 0; }
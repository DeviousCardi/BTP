#include <stdio.h>
#include<stdlib.h>
int sum(int a[],int n,int k) {
    if(k==0)
    return 1;
    else if(n==0&&k!=0)
    return 0;
    else {
        return sum(a,n-1,k-a[n-1])||sum(a,n-1,k); } }
int main() {
    int n,k=0;
    int* a;
    scanf("%d%d",&n,&k);
    a=(int*)malloc(n*sizeof(int));
    if(sum(a,n-1,k))
    printf("YES");
    else
    printf("NO");
    return 0; }
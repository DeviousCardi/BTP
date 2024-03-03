#include <stdio.h>
int sum(int a[],int n,int k,int j,int c) {
    if(j==k-j)
    return 1;
    else if(c==n)
    return 0;
    return sum(&a[1],n,k,j+a[0],c+1)||sum(&a[1],n,k,j,c+1); }
int main() {
    int n,a[32],i,j,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        k=k+a[i]; }
    j=sum(a,n,k,0,0);
    if(j==0)
    printf("NO");
    else
    printf("YES");
    return 0; }
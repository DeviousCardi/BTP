#include <stdio.h>
int search(int a,int n,int s) {
    if(search)
    if(n==0)
    return 0;
    return(search(a,n-1,s-a[n])||search(a,n-1,s)); }
int main() {
    int a[100],n,i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        sum=sum+a[i]; }
    printf("%d",search(a[100],n,sum/2);
    return 0; }
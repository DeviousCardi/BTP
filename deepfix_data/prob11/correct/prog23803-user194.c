#include <stdio.h>
int sum(long int a[],int n,long int S) {
    int res=0;
    if(res==S)
        return 1;
    else {
        res=res+sum(a,n-1,S);
        return res; } }
int main() {
    long int S,a[30];
    int n,i,x=0;
    scanf("%d",&n);
    scanf("%ld",&S);
    for(i=0;i<n;i++) {
        scanf("%ld",&a[i]); }
    x=sum(a,n,S);
    printf("%d",x);
    return 0; }
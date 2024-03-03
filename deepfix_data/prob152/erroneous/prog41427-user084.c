#include <stdio.h>
int foo(int a[],int c,int i )
{ if(c==0)
    return 1;
    else if(c<0)
    return 0;
    else {
        return foo(a,c-a[i],i-1)||foo(a,c,i-1); } }
int main() {
    int i,n,k,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
    scanf("%d",&a[i]);
    k=k+a[i]; }
    c=foo(a,n,k/2,n-1);
    return 0; }
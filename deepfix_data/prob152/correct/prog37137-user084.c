#include <stdio.h>
int foo(int a[],int c,int i ) {
    if(c==0)
    return 1;
    else if(c<0)
    return 0;
    else {
        return foo(a,c-a[i],i-1)||foo(a,c,i-1); } }
int main() {
    int i,n,k=0,a[100],c;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
    scanf("%d",&a[i]);
    k=k+a[i]; }
    c=0;
    if(k%2==0)
    c=foo(a,k/2,n-1);
    if(c)
    printf("YES");
    else
    printf("NO");
    return 0; }
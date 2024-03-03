#include <stdio.h>
#include <stdlib.h>
int x,a[16];
int cata(int n);
int main() {
    int n,i,j,s=0,x;
    x=cata(15);
    scanf("%d",&n));
    for(i=0;i<n;i++) {
        scanf("%d",x);
        for(j=0;j<=x;j++)
        s+=a[j];
        printf("%d",s);
        s=0; }
	return 0; }
int cata(int n) {
    if(n==0)
    return a[0]=1;
    a[n]=(cata(n-1)*(4*n-2))/(n+1);
    return a[n]; }
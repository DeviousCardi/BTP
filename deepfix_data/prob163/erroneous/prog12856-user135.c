#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int a,b,i,j,k,l;
    long long int x,y,m,n,sum;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%lld",&m);
    scanf("%lld",&n);
    for(i=0;i<a;i++) {
        for(j=1;j<=9;j++) {
            x=x+j*pow(10,i); } }
    m=x
    for(k=0;k<b;k++) {
        for(l=1;l<=9;l++) {
            y=y+l*pow(10,k-1); } }
    n=y
    sum=m+n;
    printf("%lld",sum);
	return 0; }
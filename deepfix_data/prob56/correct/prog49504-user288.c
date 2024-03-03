#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int f1(int n)
{ int x=n;
    if(n==0||n==1)
    return 1;
    return(((x+n)/n)*f1(n-1)); }
int main() {
	int n=5,i,j,k,a[10000],a1[10000],a2[10000];long int max=100000000000;
	printf("%d",f1(n));
	return 0; }
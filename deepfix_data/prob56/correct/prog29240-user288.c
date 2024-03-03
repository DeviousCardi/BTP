#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int f1(int n)
{ int i;
    if(n==0||n==1)
    return 1;
    unsigned long int V=0;
    for(i=0;i<n;i++)
    V+=f1(i)*f1(n-i-1);
    return(V); }
int main() {
	int n=3,i,j,k,a[10000],a1[10000],a2[10000];long int max=100000000000; }
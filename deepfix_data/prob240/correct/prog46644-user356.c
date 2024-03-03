#include <stdio.h>
#include <stdlib.h>
long int fact( long int n) {
    int i;
     long int fact=1;
    for(i=1; i<=n; i++) {
        fact=fact*i; }
    return fact; }
int main() {
     long int n,i,k,j,x,y;
	scanf("%ld\n",&n);
	for(i=0;i<n;i++) {
	 scanf("%d\n",&k);
	 for(j=1;j<=10;j++) {
	 x=fact(2*j)/(fact(j)*fact(j)*(j+1));
	 y=fact(2*(j+1))/(fact(j+1)*fact(j+1)*(j+2)); }
	 if((k<x)&&(k>=y)) {
	     printf("%d\n",x);
	     break; } }
	return 0; }
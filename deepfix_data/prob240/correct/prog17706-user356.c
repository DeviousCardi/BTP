#include <stdio.h>
#include <stdlib.h>
int fact(int n) {
    int i;
    int fact=1;
    for(i=1; i<=n; i++) {
        fact=fact*i; }
    return fact; }
int main() {
    int n,i,k,j,x,y;
	scanf("%d\n",&n);
	for(i=0;i<n;i++) {
	 scanf("%d\n",&k);
	 for(j=1;j<=1000;j++) {
	 x=fact(2*j)/(fact(j)*fact(j)*(j+1));
	 y=fact(2*(j+1))/(fact(j+1)*fact(j+1)*(j+2)); }
	 if((k<y)&&(k>=x)) {
	     printf("%d\n",x); } }
	return 0; }
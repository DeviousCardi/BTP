#include <stdio.h>
#include <stdlib.h>
int c(int n) {
    if(n!=0)
    return (((4*n)-2)*c(n-1))/(n+1)  ;
    else
    return 1; }
int main() {
	int t,a[100],i,j,sum=0;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&a[i]); }
	printf("%d",c(3));
	return 0; }
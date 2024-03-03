#include <stdio.h>
#include <stdlib.h>
int cat(int n) {
    if (n==0)
    return 1;
    else
    return ((2*n-1)/(n+1))*cat(n-1)*n; }
int main() {
	int t,i ;
	scanf("%d\n",&t);
	int a[t];
	for(i=0;i<t;i++)
	scanf("%d\n",&a[i]);
	for(i=0;i<t;i++)
	printf("%d\n",cat(a[i]));
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int cat(int n) {
    if(n==0)
    return 1;
    else
      return (4*n+2)*cat(n-1)/(n+2); }
int main() {
	int a[20];int t,i;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&a[i]); }
	for(i=0;i<t;i++) {
	    printf("%d",cat(a[i])); }
	return 0; }
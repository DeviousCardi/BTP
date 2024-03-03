#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,m,j,test,a[20];
	scanf("%d",&n);
	for (i=0;i<n;i=i+1) {
	    scanf("%d\n",&a[i]); }
	    scanf("%d\n",&m);
	for (j=0;j<m;j=j+1) {
	       scanf("%d\n",&test); {
	           if (a[test]>a[test+1]) {
	               printf("yes\n"); }
	           else {
	               printf("no\n"); } } }
	return 0; }
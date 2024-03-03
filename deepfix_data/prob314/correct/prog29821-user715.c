#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,a[20];
    int t,j,b;
	scanf ("%d\n",&n);
	for(i=0;i<n;i++) {
	    scanf("%d\n",&a[i]); }
	scanf("%d\n",&t);
	for(j=0;j<t;j++) {
	    scanf("%d\n",&b);
	    if(a[b]<a[b-1] && a[b]<a[b+1]) {
	        printf("Yes\n"); }
	    else {
	        printf("No\n"); } }
	return 0; }
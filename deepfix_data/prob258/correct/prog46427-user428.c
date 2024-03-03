#include <stdio.h>
#include <stdlib.h>
int main() {
	int m,n,i,d=0;
	scanf("%d",&n);
	int a[n];
	for (m=0;m<n;m++) {
	    scanf("%d",&a[m]); }
	for (i=0;i<n-2;i++) {
	    if (a[i]<a[i+1]) {
	        if(a[i+1]>a[i+2]) {
	            printf("Yes");
	            d=1; } }
	    else if (a[0]>a[1] || a[n-1]>a[n-2])
	    printf("Yes"); }
	if (d==0)
	printf("No");
	return 0; }
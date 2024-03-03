#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,m,j,test[20],a[20];
	scanf("%d",&n);
	for (i=0;i<n;i=i+1) {
	    scanf("%d\n",&a[i]); }
	    scanf("%d\n",&m);
	for (j=0;j<m;j=j+1) {
	       scanf("%d\n",&test[i]);
	       while (i==0) {
	           if (a[i]>a[i+1]) {
	               printf("yes\n"); }
	           else {
	               printf("no\n"); } }
	       while {
	           if (a[i]>a[i+1] && a[i]>a[i-1]) {
	               printf("yes\n"); }
	           else {
	               printf("no\n"); }
	       while (i==(n-1)) {
	               if (a[i]>a[i-1]) {
	                     printf("yes\n"); }
	               else {
	                     printf("no\n"); } } } } }
	return 0; }
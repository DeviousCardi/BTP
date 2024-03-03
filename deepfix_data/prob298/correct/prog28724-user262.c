#include <stdio.h>
#include <stdlib.h>
int cat(int n) {
    if (n==0) {
        return 1; }
    if (n>0) {
        return(2*(2*n-1)/(n+1))*cat(n-1); } }
int main() {
	int n,i,j,a[20];
	scanf("%d",&n);
	for (i=0;i<n;i++) {
	    scanf ("%d",&a[i]); }
	for(i=0;i<n;i++) {
	    j=0;
	    while (cat(j)<=a[i])
	    if (a[i]<0) {
	        printf ("no"); }
	    else if (cat(j)==a[i]) {
	        printf ('yes'); }
	    else printf ("no"); }
	return 0; }
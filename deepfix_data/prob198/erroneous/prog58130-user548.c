#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[21],b[21],c[21],i,j,min,m,n,t=0,k,x;
	scanf("%d",&m);
	for(i=0;i<m;i++) {
	    scanf("%d",&a[i]); }
	scanf("%d",&n);
	for(j=0;j<n;j++) {
	    scanf("%d",&b[j]); }
	for(i=0;i<m;i++) {
	    for(j=0,k=0;j<n,k<21;j++,k++) {
	        if(a[i]!=b[j]) {
	                c[k]=a[i]; }
	        else
	        t=1; }
	   for(k=0;k<21;k++) {
	       printf("%d ",c[k]); }
	            if(min>x) {
	            min=x; } } }
	return 0; }
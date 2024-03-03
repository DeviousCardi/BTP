#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n],k,m=0,i,b[n],l=0;
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	for(i=0;i<n;i++) {
	    for(k=i+1;k<n;k++) {
	        if(a[k]-a[i]<0) {
	           m=m+1;
	           if(a[k]-a[i]<0) {
	               l=l+1;
	               b[i]=l; }
	           else
	            b[i]=0; } } }
	printf("%d\n",m);
	for(i=0;i<100;i++)
	    printf("%d ",b[i]);
	return 0; }
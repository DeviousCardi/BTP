#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,a[20],i,j,c,max,p;
	scanf("%d", &n);
	for(i=0;i<n;i++) {
        	scanf("%d", &a[i]); }
	max=0;
	for(i=0;i<n;i++) {
	        c=0;
        	for(j=0;j<n;j++) {
        	    if(a[i]==a[j]) c++; }
        	if(c>max) {
        	    max=c;
        	    p=i; } }
    printf("%d",a[p]);
	return 0; }
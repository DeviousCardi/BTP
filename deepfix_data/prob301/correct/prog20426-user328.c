#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int a[n],i,j,mode,count=1,c,max=1;
	for (i=0;i<n;i++) {
	   scanf("%d",&a[i]); }
	for(j=0;j<n-1;j++) {
	    mode=a[j];
	    if(a[j]==a[j+1]) {
	        count++;
	        c=count; }
	    else {
	       count=0; }
        if(c>=max) {
            mode=a[j]; } }
	printf("%d",mode);
	return 0; }
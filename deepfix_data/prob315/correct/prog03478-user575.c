#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int str1[n],k,m=0,i;
	for(i=0;i<n;i++) {
	    scanf("%s",str1); }
	for(i=0;i<n;i++) {
	    for(k=0;k<n;k++) {
	        if(str1[k]-str1[i]<0) {
	           m=m+1;
	           printf("%d%d",str1[k],str1[i]); } } }
	printf("%d",m);
	return 0; }
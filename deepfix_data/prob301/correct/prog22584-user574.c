#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,mo=0,m,i,j;
    scanf("%d",&n);
    int arr[n];
	for(i=0;i<n;++i) {
	        scanf("%d",&arr[i]); }
	for(i=0;i<n;++i)
	    { mo=0;
	        for(j=i;arr[j]==arr[i];++j) {
	                mo++; }
	    if(mo>m)
	        m=mo; }
	 printf("%d",m);
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[1001],b[1001],count=0,c=0,n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++) {
	    for(j=i+1;j<n;j++) {
	        if(a[i]>a[j]) {
	            count++;
	            b[c]=a[i];
	            c++; } } }
	printf("%d\n",count);
	for(i=0;i<c;i++) {
	    printf("%d",b[i]);
	    if(i!=c-1)
	    printf(" "); }
	return 0; }
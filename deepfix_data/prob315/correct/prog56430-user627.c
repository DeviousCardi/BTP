#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[1000],b[1000],i,j,n,c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	for(i=0;i<n;i++) {
	    b[i]=0;
	    for(j=i+1;j<n;j++) {
	        if(a[i]>a[j]) {
	            b[i]=b[i+1];
	            c=c+1; } } }
	printf("%d\n",c);
	for(i=0;i<n;i++) {
	    printf("%d",b[i]); }
	return 0; }
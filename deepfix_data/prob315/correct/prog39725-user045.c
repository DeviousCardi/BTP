#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,c=0,e=0;
	scanf("%d",&n);
	int a[n];
	int b[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++) {
	    for(j=0;j<n;j++) {
	        if(a[i]>a[j] && i<j) {
	            c++;
	            e++; } }
	    b[i]=e;
	    e=0; }
	printf("%d /n",c);
	for(i=0;i<n;i++)
	printf("%d ",b[i]);
	printf("/b");
	return 0; }
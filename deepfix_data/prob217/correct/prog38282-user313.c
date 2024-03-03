#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[10000],b[10000],i,s,n,x;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	scanf("%d",&s);
	for(i=0;i<n-1;i++) {
	    x=s-a[i];
	    b[i]=a[i];
	    for(i=i+1;i<n;i++) {
	        if(x==b[i]) {
	            printf("(%d,%d)\n",a[i],b); } } }
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[10000],b[10000],i,s,n,x[10000],i1;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	scanf("%d",&s);
	for(i=0;i<n;i++) {
	    x[i]=s-a[i];
	    b[i]=a[i]; }
	for(i=0;i<n;i++) {
	    for(i1=i+1;i1<n;i1++) {
	        if(x[i1]==b[i1]) {
	            printf("(%d,%d)\n",x,b[i1]); } } }
	return 0; }
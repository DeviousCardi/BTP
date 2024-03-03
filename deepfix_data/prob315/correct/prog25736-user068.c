#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int a[n],i,j,c=0,t[n],s=0;
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	for(i=0;i<n-1;i++) {
	    c=0;
	    for(j=i+1;j<n;j++) {
	        if(a[i]>a[j]) {
	            c++; }
	        t[i]=c; } }
	for(i=0;i<n;i++) {
	    s=s+t[i]; }
	printf("%d\n",s);
		for(i=0;i<n;i++) {
	   	printf("%d",t[i]); }
	return 0; }
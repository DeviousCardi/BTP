#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,s;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	scanf("%d",&s);
	for(i=0;i<n;i++) {
	    for(j=0;j<n;j++) {
	            if(a[i]+a[j]==s) {
	                if(i<j)printf("( %d , %d )",i,j);
	                else printf("( %d , %d )",j,i); } } }
	return 0; }
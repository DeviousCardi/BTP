#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k,s[1000],c=0;
	scanf("%d",&n);
	for(i=0;i<n;i=i+1) {
	    scanf("%d",&s[i]); }
	for(k=0;k<n;k=k+1) {
	    for(j=0;j<n;j=j+1) {
	        if(s[k]>s[j]) {
	            c=c+1;
	            printf(" %d",c); } } }
	printf("%d",c);
	return 0; }
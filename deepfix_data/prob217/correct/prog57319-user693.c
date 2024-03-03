#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,m,n;
	scanf("%d\n",&n);
	int s[n];
	for(i=0;i<n;i++) {
	    scanf("%d ",&s[i]); }
    	printf("\n");
	    scanf("%d",&m);
	for(j=0;j<n-1;j++) {
	    for(k=j+1;k<n;k++) {
	        if(s[j]+s[k]==m) {
	            printf("\n");
	            printf("(%d,%d)",s[j],s[k]);
	            continue; }
	        else {
	            if(k<n) {
	            continue; }
	            else {
	                j++; } } } }
	return 0; }
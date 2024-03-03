#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,n;
	scanf("%d",&n);
	int s[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&s[i]); }
	for(j=0;j<n-1;j++) {
	    for(k=j+1;k<n;k++) {
	        if(s[j]==s[k]) {
	            printf("(%d,%d)",(j,k)); }
	        else {
	            if(k<n) {
	            continue; }
	            else {
	                j++; } } } }
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,j,s;
	scanf("%d",&n);
	int a[n];
	i=0;
	for(j=0;j<n;j++){
	    scanf("%d",&a[j]); }
	while(i<n){
	    for(j=0;j<n;j++){
	        if(a[i]+a[j]==s){
	            printf("(%d,%d)",a[i],a[j]); } }
	    i++; }
	return 0; }
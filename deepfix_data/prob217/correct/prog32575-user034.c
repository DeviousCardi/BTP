#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,s,i,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]); }
	scanf("%d",&s);
	for(j=0;j<n;j++){
	    i=j+1;
	    while(i<n){
	        if(a[i]+a[j]==0)
	            printf("(%d,%d)\n",j,i);
	        i++; } }
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",n);
	int k=(n+1)/2;
	int i,j,t;
	for(i=1;i<k;i=i+1){
	    for(j=1;j<i;j=j+1){
	        printf(" "); }
	    for(t=1;t<=n-i+1;t=t+1){
	        printf("%c",*); } }
	return 0; }
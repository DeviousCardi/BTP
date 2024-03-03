#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,sum;
	scanf("%d,%d",&n,&sum);
	int c[n];
	int i,j;
	for (i=0;i<n;i++){
	    for(j=i+1;j<n;j++){
	        if(sum==c[i]+c[j]){
	            printf("%d%d\n",(c[i],c[j])); } } }
	return 0; }
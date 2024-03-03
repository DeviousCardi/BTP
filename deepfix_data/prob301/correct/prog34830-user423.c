#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a[n],i,j,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]);
	    for(j=0;j<n;j++){
	    if(a[i]==a[j])
	    count=count+1; } }
	return 0; }
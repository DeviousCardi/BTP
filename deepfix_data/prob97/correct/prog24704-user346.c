#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int i,j,k;
	for(i=1;i<=n;i++){
	    for(j=1;j<=(i*2)-1;j=j+1){
	        k=n-1;
	        printf("%kd",i%10); }
	    printf("\n"); }
	return 0; }
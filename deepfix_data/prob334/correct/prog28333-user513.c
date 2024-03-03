#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,m,k;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++) {
	    k=i;
	    for(j=1;j<=m;j++) {
	        if(j>=m-n+i+1) continue;
	        else {
	            if(j<=n-i)
	            printf(" ");
	            else
	            printf("%d",k%10); } }
	    printf("\n"); }
	return 0; }
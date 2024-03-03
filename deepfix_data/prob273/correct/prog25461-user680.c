#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,p,q;
	scanf("%d",&n);
	for(i=(n+1)/2;i>0;i--) {
	    for(j=i;j<=(n+1)/2;j++) {
	        printf("%d",j); }
	   printf("\n"); }
	for(p=2;p<=(n+1)/2;p++){
	    for(q=p;q<=(p+1)/2;q++){
	        printf("%d",q); }
	    printf("\n"); }
	return 0; }
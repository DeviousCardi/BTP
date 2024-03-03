#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,p,q,h,k;
	scanf("%d",&n);
	for(i=(n+1)/2;i>0;i--)
	{for(h=i-1;h>0;h--){
	    printf(" "); }
	   for(j=i;j<=(n+1)/2;j++) {
	        printf("%d",j); }
	   printf("\n"); }
	    for(p=2;p<=(n+1)/2;p++) {
	        for(k=p-1;k<=(n-1)/2;k++){
	        printf(" "); }
	    for(q=p;q<=(n+1)/2;q++){
	        printf("%d",q); }
	   printf("\n"); }
	return 0; }
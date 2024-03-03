#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k,l;
	scanf("%d",&n);
	for(i=1;i<=(n-1)/2;i++) {
	  for(j=1;j<=((n-1)/2)+i;j++) {
	    if(j<=((n+1)/2)-i)
	    printf(" ");
	    else
        printf("%d",j%10); }
	   printf("\n"); }
    for(k=2;k<=(n-1)/2;k++) {
	  for(l=1;l<=n-k;l++) {
	    if(l<k)
	    printf(" ");
	    else
        printf("%d",l%10); }
	   printf("\n"); }
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=(n-1)/2;i++) {
	  for(j=1;j<=((n-1)/2)+i;j++) {
	    if(j<=((n+1)/2)-i)
	    printf(" ");
	    else
        printf("%d",j%10); }
	   printf("\n"); }
    for(i=1;i>(n-1)/2 && i<=n;i++) {
	  for(j=1;j<=n-(i-(n-1)/2);j++) {
	    if(j<=n-2*(i-(n-1)/2))
	    printf(" ");
	    else
        printf("%d",j%10); }
	   printf("\n"); }
	return 0; }
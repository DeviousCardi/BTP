#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,z,k,l;
	scanf("%d",&n);
     for(k=1;k<=2*n-1;k++) {
         printf("*"); }
     printf("\n");
	for(i=1;i<=n-1;i++) {
	    for(l=1;l<=i;l++)
	    printf("$");
	    for(j=1;j<=2*n-i;j++) {
	    for(z=1;z<=2*(n-1)-i;z++) {
	        printf("#"); } }
	  printf("\n"); }
	  printf("*\n");
	return 0; }
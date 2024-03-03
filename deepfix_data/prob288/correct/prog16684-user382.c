#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n+1;i++) {
	    for(j=1;j<=n+1;j++) {
	        if(j<=n+1-i)
	            printf(" ");
	        else if((i+j)%2==0)
	            printf("x");
	        else
	            printf("*"); }
	    printf("\n"); }
	for(i=n+2;i<=2*n+1;i++) {
	    for(j=1;j<=n+1;j++) {
	        if(j<=i-(n+1))
	            printf(" ");
	        else if((i+j)%2==0)
	            printf("x");
	        else
	            printf("*"); }
	    if(i!=2*n+1)
	        printf("\n"); }
	return 0; }
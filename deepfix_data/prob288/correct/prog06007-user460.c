#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n+1;i++) {
	    for(k=n;k>=i;k++)
	    printf(" ");
	    for(j=0;j<i;j++) {
	        if((i+j)%2==0)
	        printf("%c",'x');
	    else
	        printf("%c",'*'); }
	    printf("\n"); }
	for(i=n+2;i<=2*n+1;i++) {
	    for(k=n+1;k<=i;k++)
	    printf(" ");
	    for(j=2*n+1;j>=i;j++) {
	        if((i+j)%2==0)
	        printf("%c",'x');
	    else
	        printf("%c",'*'); }
	    printf("\n"); }
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,h;
	char c ='*';
	scanf("%d",&h);
	k=h/2;
	printf("%c",c);
	for (i=2;i<=k+1;i++)
	{   printf("\n");
	    printf("%c",c);
	    for(j=1;j<=i-2; j++) {
	        printf(" "); }
	      printf("%c",c); }
	for(i=k;i>=1;i--) {
	    printf("\n");
	    printf("%c",c);
	        for(j=1; j<=i-2;j++) {
	            printf(" "); }
	        printf("%c",c);
	}       printf("\n");
	        printf("%c",c);
	return 0; }
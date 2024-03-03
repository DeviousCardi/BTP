#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k;
	scanf("%d",&n);
	int n1=n;
	for(i=1;i<=n;i++) {
	    for(j=1;j<n1;j++) {
	     printf(" "); }
	    for(k=1;k<=(2*i-1);k++) {
	        if((j+i)%2==0)
	        printf("%c",'*');
	        else
	        printf("%c",' ');
	        j++; }
	    printf("\n");
	    n1--;
	return 0; }
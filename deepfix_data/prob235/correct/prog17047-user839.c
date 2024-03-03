#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,f,j,k;
	scanf("%d",&f);
	k=(f+1)/2;
	for(i=1;i<=f;i++) {
	           for(j=1;j<=f;j++) {
	                    if(i<=(k-i)||(i>=(k+i))) {
                                printf(" "); }
	                    else {
	                         printf("%d",i%10); } }
	              printf("\n"); }
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,f,j,k,m,n,g;
	scanf("%d",&f);
	k=(f+1)/2;
	for(i=1;i<=k;i++) {
	           for(j=1;j<=f;j++) {
	                    if(j<=(k-i)) {
                                printf(" "); }
	                    else if(j>(k-i)&&j<(k+i)) {
	                         printf("%d",j%10); }
	                    else
	                    printf("\n"); } }
	    for(m=2;m<=k;m++) {
	            for(g=1;g<m;g++) {
	                    printf(" "); }
	            for(n=m;n<=(f+1-m);n++) {
	                    printf("%d",n%10); }
	            printf("\n"); }
	return 0; }
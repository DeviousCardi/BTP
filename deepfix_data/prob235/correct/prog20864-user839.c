#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,f,j,k,m,n;
	scanf("%d",&f);
	k=(f+1)/2;
	for(i=1;i<=k;i++) {
	           for(j=1;j<=f;j++) {
	                    if(j<=(k-i)||(j>=(k+i))) {
                                printf(" "); }
	                    else {
	                         printf("%d",j%10); } }
	              printf("\n"); }
	 for(m=1;m<=(k-1);m++) {
            for(n=2;n<=f;n++) {
                    if(n>=(k-m)||n<=(k+m)) {
                         printf(" "); }
                    else {
                            printf("%d",n%10); } }
                printf("\n"); }
	return 0; }
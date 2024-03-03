#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,f,k;
	scanf("%d",&f);
	k=(f+1)/2;
	for(i=1;i<=f;i++) {
	                if(j<=(k-i)&&(j>=(k+i))) {
                            printf(" "); }
	                else {
	                    printf("%d",i%10); } }
	return 0; }
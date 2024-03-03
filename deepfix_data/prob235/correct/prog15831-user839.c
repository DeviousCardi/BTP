#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,f,k,j;
	scanf("%d",&f);
	k=(f+1)/2;
	for(i=1;i<=f;i++) {
	        j=i;
	                if(i<=(k-j)||(i>=(k+j))) {
                            printf(" "); }
	                else {
	                    printf("%d",i%10); }
	              if(i==f)
	              printf("\n"); }
	return 0; }
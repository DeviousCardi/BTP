#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,f,k;
	scanf("%d",&f);
	k=(f+1)/2;
	for(i=1;i<=f;i++) {
	                if(i<=(k-i)||(i>=(k+i))) {
                            printf(" "); }
	                else {
	                    printf("%d",i%10); }
	              if(i==f)
	              printf("\n"); }
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int cat(double k) {
        if(k==0)
          return 1;
        else
          return cat(k-1)*(2*(2*k-1)/(k+1)); }
int main() {
	int i,j,t;
	double k;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	        scanf("%lf\n",&k);
	        j=cat(k);
	        printf("%d\n",cat(k-1)); }
	return 0; }
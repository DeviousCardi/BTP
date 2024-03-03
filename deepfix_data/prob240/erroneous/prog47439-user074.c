#include <stdio.h>
#include <stdlib.h>
int cat(int num) {
        int a;
        if num==0; {
               retrun 1; }
        else
            a=cat(num-1)*(float 2*(2*n-1)/n+1);
            return a; }
int main() {
	int i,j,t,k;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	        scanf("%d\n",&k);
	        j=cat(k);
	        printf("%d",j); }
	return 0; }
#include <stdio.h>
#include <stdlib.h>
long binomial(int n, int k) {
    if(n<k)
        return 0;
    else if(n==0 && k==0)
        return 1;
    else if(k==0)
        return 1;
    else
        return binomial(n-1, k)+binomial(n-1, k-1); }
int main() {
	int i, j, b, flag=0;
	scanf("%d", &b);
	for(i=0; ;i++) {
	        for(j=0; ;j++)
	        if(binomial(i,j)==b) {
	            printf("%d %d", i,j);
	            break;
	            flag=1; }
	        if(flag==1)
	            break; }
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int m=0;
int cat(int n , int i) {
    if(n==i)
        return 1;
    if (i==0)
        i=-1;
    i++;
    m+=cat(n,i)*cat(n,n-i);
    return m; }
int main() {
	int t, k, i;
	scanf("%d\n", &t);
	for(i=0;i<t;i++) {
	    scanf("%d\n", &k);
	    printf("%d\n", cat(k , k)); }
	return 0; }
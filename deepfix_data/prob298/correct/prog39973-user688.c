#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    if (n==0) return 1;
    return n*cat(n-1); }
int main() {
	int i, j, x, t;
	scanf("%d", &t);
	int cat_nums[17];
	for(i=0; i<17; i++){
	    cat_nums[i]=cat(i); }
	    for(i=0; i<17; i++){
	     printf("%d\n", cat(i)); }
	return 0; }
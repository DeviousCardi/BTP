#include <stdio.h>
#include <stdlib.h>
int main() {
	long int n,m,x,y,**A,**B,i;
    scanf("%ld%ld%ld%ld",&n,&m,&x,&y);
    A=(int *)malloc(n*sizeof(int));
    B=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++) {
        scanf("%ld",*A+i); }
	return 0; }
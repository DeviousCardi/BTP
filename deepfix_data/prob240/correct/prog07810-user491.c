#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    if(n==1) return 1;
    else return ((4*n-6)/n)*cat(n-1); }
int main() {
	int i,t;
	scanf("%d",&t);
	for(i=0;i<15;i++)
	printf("cat %2d: %10d\n",i+1,cat(i+1));
    return 0; }
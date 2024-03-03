#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int k=(n+1)/2;
	int i;
	int p;
	for(i=1;i<=k;i=i+1){
	    int s=k-i;
	    for(p=1;p<=i;p=p+1){
	        printf("s%c",'*'); }
	    printf("\n"); }
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m;
	long x,y;
	scanf("%d %d %ld %ld",&n,&m,&x,&y);
	long *a,*b;
	int i;
	for(i=0;i<n;i++){
	scanf("%ld",a+i);
	printf("%ld",*(a+i)); }
	for(i=0;i<m;i++){
	scanf("%ld",b+i);
	printf("%ld",*(b+i)) }
	return 0; }
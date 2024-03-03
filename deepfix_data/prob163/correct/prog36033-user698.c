#include <stdio.h>
#include <stdlib.h>
int main() {
	int A[500];
	int B[500];
	char s[501];
	int n,m,i;
	scanf("%d%d\n",&n,&m);
	for(i=0;i<n;i++){
	    scanf("%d",&A[i]); }
		for(i=0;i<n;i++){
	    scanf("%d",&B[i]); }
	printf("%c\n",A[2]);
	printf("%c",B[2]);
	return 0; }
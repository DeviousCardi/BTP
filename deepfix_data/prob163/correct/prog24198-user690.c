#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,sum[501],i,j;
	scanf("%d%d",&a,&b);
	char A[a],B[b];
	for (i=0;i<=a;i++){
	    scanf("%c",&A[i]); }
	for (i=0;i<=b;i++){
	    scanf("%c",&B[i]); }
	for (i=0;i<=a;i++){
	    printf("%c",A[i]); }
	for (i=0;i<=b;i++){
	    printf("%c",B[i]); }
	return 0; }
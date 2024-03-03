#include <stdio.h>
#include <stdlib.h>
int main() {
	int s1,s2,I;
	scanf("%d",&s1);
	scanf("%d",&s2);
	char A[510],B[510],C[510];
    scanf("%s",A);
    scanf("%s",B);
    for(i=s1-1;i>=0;i--) {
        C[i]=A[i]+B[i]; }
    printf("%s",C);
		return 0; }
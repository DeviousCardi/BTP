#include <stdio.h>
#include <stdlib.h>
int main() {
	int s1,s2,i;
	scanf("%d",&s1);
	scanf("%d",&s2);
	char A[510],B[510],C[510];
	int D[510];
    scanf("%s",A);
    scanf("%s",B);
    int x=0;
    while(A[x]!='\0') {
        C[x]=A[x]+B[x];
        x++;
        D[x]=C[x]; }
    for(i=0;i<s1;i++)
    printf("%d",&D[i]);
		return 0; }
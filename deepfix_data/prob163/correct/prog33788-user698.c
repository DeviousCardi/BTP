#include <stdio.h>
#include <stdlib.h>
int main() {
	char A[500];
	char B[500];
	char s[501];
	int n,m,ch,i;
	scanf("%d%d\n",&n,&m);
	ch=getchar();
	for(i=0;ch!='\n';i++){
	    A[i]=ch;
	    ch=getchar(); }
	printf("%c",A[2]);
	return 0; }
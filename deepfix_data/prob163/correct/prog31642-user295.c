#include <stdio.h>
#include <stdlib.h>
char a[510],b[510];
int main() {
	int sa,sb;
	scanf("%d%d\n",&sa,&sb);
	int i;
	for(i=0;i<sa;i++)
	scanf("%c",&a[i]);
	getchar();
	for(i=0;i<sb;i++)
	scanf("%c",&b[i]);
	printf("%s",b);
	return 0; }
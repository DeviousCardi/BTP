#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,siz1,siz2;
	scanf("%d",siz1);
	scanf("%d",siz2);
	char ch1[siz1];
	char ch2[siz2];
	for(i=0;i<siz1;i++)
	ch1[i]= getchar();
	for(i=0;i<siz1;i++)
	putchar(ch1[i]);
	return 0; }
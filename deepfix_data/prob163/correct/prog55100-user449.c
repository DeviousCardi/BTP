#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,siz1,siz2;
	scanf("%d",&siz1);
	scanf("%d",&siz2);
	char ch1[siz1];
	for(i=0;i<siz1;i++)
	scanf("%c",&ch1[i]);
	for(i=0;i<siz1;i++)
	printf("%c",ch1[i]);
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,t;
	int str[500];
	scanf("%d\n",&n);
	scanf("%d\n",&t);
	scanf("%s",&str[n]);
	printf("\n");
	scanf("%s",&str[t]);
	printf("%s",str[n]+str[t]);
	return 0; }
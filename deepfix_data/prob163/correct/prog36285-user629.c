#include <stdio.h>
#include <stdlib.h>
int main() {
    int size1,size2,i;
    char num1[501];
    char num2[501];
    char sum[502];
    scanf("%d", &size1);
    scanf("%d", &size2);
    for(i=0;i<=size1;i++) {
        num1[i]=getchar(); }
    num1[i]='\0';
	for(i=0;i<=size2;i++) {
	    num2[i]=getchar(); }
	num2[i]='\0';
	printf("%c",num2[1]);
	return 0; }
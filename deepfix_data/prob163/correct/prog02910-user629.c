#include <stdio.h>
#include <stdlib.h>
int main() {
    int size1,size2,i;
    int num1[500];
    int num2[500];
    int sum[500];
    scanf("%d", &size1);
    printf("\n");
    scanf("%d", &size2);
    printf("\n");
    for(i=0;i<size1;i++) {
        scanf("%d", &num1[i]); }
	printf("\n");
	for(i=0;i<size2;i++) {
	    scanf("%d", &num2[i]); }
	printf("\n");
	printf("%d",num1[2]);
	return 0; }
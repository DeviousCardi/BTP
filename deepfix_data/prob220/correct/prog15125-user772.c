#include <stdio.h>
#include <stdlib.h>
int main() {
    int num;
    scanf("%d",&num);
    int i,space;
    int j=1;
    int med=2*num-1;
    for (i=1;i<num;i++) {
        for (space=1;space<=num-i;space++) {
            printf(" "); }
        while (j==med+i||med-i) {
            printf("*");
            j++; }
        printf("\n"); }
	return 0; }
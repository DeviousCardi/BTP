#include <stdio.h>
#include <stdlib.h>
int main() {
    int num;
    scanf("%d",&num);
    int i;
    for (i=1;i<=num-1;i++) {
        int j;
        for (j=1;j<=i-1;j++) {
            if (j==1) {
                printf("*"); }
            else {
                printf(" "); } }
            printf("*"); }
    printf("*");
    printf("\n");
	return 0; }
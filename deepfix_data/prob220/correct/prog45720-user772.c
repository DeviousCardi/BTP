#include <stdio.h>
#include <stdlib.h>
int main() {
    int num;
    scanf("%d",&num);
    int i;
    for (i=1;i<num;i++) {
        int j;
        for (j=1;j<i;j++) {
            if (j==1) {
                printf("*"); }
            else {
                printf(" "); } }
            printf("*"); }
    printf("*");
	return 0; }
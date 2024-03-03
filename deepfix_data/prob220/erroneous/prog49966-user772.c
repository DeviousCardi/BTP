#include <stdio.h>
#include <stdlib.h>
int main() {
    int num;
    scanf("%d",&num);
    int i,space;
    int j=1;
    for (i=1;i<=num;i++) {
        do (space=1;space<=num-i;space++) {
            printf(" "); }
        while (j=1;j<=num+i-1;j++) {
            printf("*"); }
        printf("\n"); }
	return 0; }
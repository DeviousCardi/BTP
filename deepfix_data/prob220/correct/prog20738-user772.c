#include <stdio.h>
#include <stdlib.h>
int main() {
    int num;
    scanf("%d",&num);
    int i,space;
    int j;
    for (i=1;i<=num;i++) {
        for (space=1;space<=num-i;space++) {
            printf(" "); }
        for (j=1;j!=num+i-1||num-i+1;j++) {
            printf("*"); }
        printf("\n"); }
	return 0; }
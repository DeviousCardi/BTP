#include <stdio.h>
#include <stdlib.h>
int main() {
    int num;
    scanf("%d",&num);
    int i,space;
    int j=1;
    for (i=1;i<=num;i++) {
        for (space=1;space<=num-i;space++) {
            printf(" "); }
        while(j==2*i-1)
            printf("*");
            j++;
        printf("\n"); }
	return 0; }
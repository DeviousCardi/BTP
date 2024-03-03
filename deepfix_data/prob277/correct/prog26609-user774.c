#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,i,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++) {
        for(j=0;j<i;j++) {
            printf(" "); }
        for(b=1;b<=a;b++) {
            printf("*"); }
        printf("\n"); }
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int main() {
    int num;
    scanf("%d",&num);
    int i,space;
    int j;
    for (i=1;i<=num;i++) {
#include <stdio.h>
int main() {
    int i,space,rows,k=0;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;++i) {
        for(space=1;space<=rows-i;++space) {
           printf("  "); }
        while(k!=2*i-1) {
           printf("* ");
           ++k; }
        k=0;
        printf("\n"); }
    return 0; } }
	return 0; }
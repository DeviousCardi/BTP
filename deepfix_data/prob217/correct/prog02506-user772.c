#include <stdio.h>
#include <stdlib.h>
int main() {
    int array[10000],N;
    int i,j;
    scanf("%d\n",&N);
    for (i=0;i<N;i++) {
        scanf("%d\n",&array[i]); }
    for(i=0;i<N;i++) {
        for (j=1;j>i;j++)
          printf("(%d,%d)",array[i],array[j]); }
	return 0; }
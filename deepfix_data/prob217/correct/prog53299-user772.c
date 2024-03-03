#include <stdio.h>
#include <stdlib.h>
int main() {
    int array[10000],N,S;
    int i,j;
    scanf("%d\n",&N);
    for (i=0;i<N;i++) {
        scanf("%d\n",&array[i]); }
    scanf("%d\n",&S);
    for(i=0;i<N;i++) {
        for (j=1;j<i;j++)
        if (array[i]+array[j]==S)
          printf("(%d,%d)\n",array[j],array[i]);
         else
            continue; }
	return 0; }
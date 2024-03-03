#include <stdio.h>
#include <stdlib.h>
int main() {
    long array[10000],S;
    int N,i,j;
    scanf("%d\n",&N);
    for (i=0;i<N;i++) {
        scanf("%ld\n",&array[i]); }
    scanf("%ld\n",&S);
    for(i=0;i<N;)
        for (j=1;j>i&&j<N;j++)
          printf("(%ld,%ld)",array[i],array[j]);
          i++;
	return 0; }
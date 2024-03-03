#include <stdio.h>
#include <stdlib.h>
int main() {
    long array[10000];
    int N,i,j,S;
    scanf("%d\n",&N);
    for (i=0;i<N;i++) {
        scanf("%ld\n",&array[i]); }
    scanf("%d\n",&S);
    for (i=0;i<N;i++) {
        for (j=0;j>i;j++)
          printf("(%ld,%ld)",array[i],array[j]); }
	return 0; }
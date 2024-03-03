#include <stdio.h>
#include <stdlib.h>
int main() {
    long array[10000];
    int N,i,j;
    scanf("%d\n",&N);
    for (i=0;i<N;i++) {
        scanf("%ld\n",&array[i]); }
    for(i=0,j=1;i<N&&i<j;i++,j++) {
          printf("(%ld,%ld)",array[i],array[j]);
          i++; }
	return 0; }
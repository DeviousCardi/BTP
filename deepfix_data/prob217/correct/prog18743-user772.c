#include <stdio.h>
#include <stdlib.h>
int main() {
    long array[10000];
    int N,i,j=1;
    scanf("%d\n",&N);
    for (i=0;i<N;i++) {
        scanf("%ld\n",&array[i]); }
    for(i=0;i<N;i++) {
        while(j>i)
          printf("(%ld,%ld)",array[i],array[j]);
          j++; }
	return 0; }
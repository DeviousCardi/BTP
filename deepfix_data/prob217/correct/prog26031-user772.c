#include <stdio.h>
#include <stdlib.h>
int main() {
    long array[10000],N,S;
    int i,j;
    scanf("%ld\n",&N);
    for (i=0;i<N;i++) {
        scanf("%ld\n",&array[i]); }
    scanf("%ld\n",&S);
    for(i=0;i<N;i++) {
        for (j=1;j>i&&j<N;j++) {
            if (array[i]+array[j]==S)
              printf("(%ld,%ld)\n",array[i],array[j]);
            else
                continue; } }
	return 0; }
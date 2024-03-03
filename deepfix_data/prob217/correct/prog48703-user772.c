#include <stdio.h>
#include <stdlib.h>
int main() {
    int array[10000];
    int N,i,j,S;
    scanf("%d\n",&N);
    for (i=0;i<N;i++) {
        scanf("%d\n",&array[i]); }
    scanf("%d\n",&S);
    for (j=1;j<N;j++) {
        for (i=0;i<j;i++) {
                if (array[j]==S-array[i])
                    printf("(%d,%d)\n",array[i],array[j]);
                else
                    continue; } }
	return 0; }
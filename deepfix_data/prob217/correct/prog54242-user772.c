#include <stdio.h>
#include <stdlib.h>
int main() {
    int array[10000];
    int N,i,j=1,S;
    scanf("%d\n",&N);
    for (i=0;i<N;i++) {
        scanf("%d\n",&array[i]); }
    scanf("%d\n",&S);
    for (i=0;i<N&&i<j;i++) {
        for (j=1;;j++) {
                if (array[i]+array[j]==S)
                    printf("(%d,%d)\n",array[i],array[j]);
                else
                    continue; } }
	return 0; }
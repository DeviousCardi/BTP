#include <stdio.h>
#include <stdlib.h>
int main() {
    int array[10000];
    int N,i,j,S;
    scanf("%d",&N);
    for (i=0;i<N;i++) {
        scanf("%d",&array[i]); }
    scanf("%d",&S);
    for (i=0;i<N;i++) {
        for (j=0;j<i;j++) {
                if (array[i]==S-array[j])
                    printf("(%d,%d)",array[i],array[j]);
                else
                    continue; } }
	return 0; }
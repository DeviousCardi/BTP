#include <stdio.h>
#include <stdlib.h>
int main() {
    int N,array[10000],S;
    int i,j;
    scanf("%d",&N);
    for(i=0;i<=N-1;i++)
    scanf("%d",&array[i]);
    scanf("%d",&S);
    for(i=0;i<N;i++) {
    for(j=i+1;j<N;j++) {
        if(array[i]==array[j])
        break;
        if((array[i]+array[j])==S)
        printf("(%d,%d)\n",array[i],array[j]); } }
	return 0; }
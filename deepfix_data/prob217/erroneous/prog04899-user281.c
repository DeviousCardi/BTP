#include <stdio.h>
#include <stdlib.h>
int main() {
	int ar[10000];
    int S;
	int N,i;
	scanf("%d\n",&N);
	for(i=0;i<N;i++) {
	    scanf("%d\n",&ar[i]); }
	scanf("%d",&S);
	for(i=0;i<N;i++) {
	    for(j=0;j<N;j++) {
	       if(S=ar[i]+ar[j])
	       printf("(%d,%d)\n",ar[i],ar[j]); } }
	return 0; }
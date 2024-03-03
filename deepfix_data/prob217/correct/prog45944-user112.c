#include <stdio.h>
#include <stdlib.h>
int main() {
	long int N,S,i,j;
	scanf("%ld",&N);
	long int ar[N];
	for(i=0;i<N;i++) {
	    scanf("%ld",&ar[N]); }
	scanf("%ld",&S);
	for(i=0;i<N-1;i++) {
	    for(j=i+1;j<N;j++) {
	       if(ar[i]+ar[j]==S)
	       printf("(%ld,%ld)\n",ar[i],ar[j]); } }
return 0; }
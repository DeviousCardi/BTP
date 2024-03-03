#include <stdio.h>
#include <stdlib.h>
int main() {
	long int N,S,i,j,k;
	scanf("%ld",&N);
	long int ar[N];
	for(i=0;i<N;i++) {
	    scanf("%ld",&ar[N]); }
	scanf("%ld",&S);
	for(k=0;k<N-1;k++) {
	    for(j=i+1;j<N;j++) {
	       if(ar[i]+ar[j]==S)
	        printf("(%ld,%ld)\n",ar[i],ar[j]); } }
return 0; }
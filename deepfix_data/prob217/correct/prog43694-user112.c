#include <stdio.h>
#include <stdlib.h>
int main() {
	long int N,S;
	long int i,k,j;
	scanf("%ld",&N);
	long int ar[N];
	for(i=0;i<N;i++) {
	    scanf("%ld",&ar[i]); }
	scanf("%ld",&S);
	for(k=0;k<N-1;k++) {
	    for(j=k+1;j<N;j++) {
	       if(ar[k]+ar[j]==S)
	           printf("(%ld,%ld)\n",ar[k],ar[j]);
	       else
	         continue; } }
return 0; }
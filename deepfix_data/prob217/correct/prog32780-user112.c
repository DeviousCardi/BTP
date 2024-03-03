#include <stdio.h>
#include <stdlib.h>
int main() {
	 int N,S,i,j,k;
	scanf("%ld",&N);
	 int ar[N];
	for(i=0;i<N;i++) {
	    scanf("%d",&ar[N]); }
	scanf("%ld",&S);
	for(k=0;k<N-1;k++) {
	    for(j=i+1;j<N;j++) {
	       if(ar[i]+ar[j]==S) {
	           printf("(%d,%d)\n",ar[i],ar[j]); } } }
return 0; }
#include <stdio.h>
#include <stdlib.h>
int main() {
	int N,A[10000],ctrmax=1,mode,i,ctr=1;
	scanf("%d",&N);
	for(i=0;i<N;i++) {
	    scanf("%d",&A[i]); }
	mode=A[0];
	for(i=0;i<N-1;i++) {
	    if(A[i]!=A[i+1]) {
	        if(ctr>=ctrmax) {
	            ctrmax=ctr;
	            mode=A[i]; }
	        ctr=1; }
	    else {
	        ctr++; } }
	if(ctr>=ctrmax) {
	    ctrmax=ctr;
	    mode=A[i]; }
	printf("%d",mode);
	return 0; }
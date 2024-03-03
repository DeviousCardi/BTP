#include <stdio.h>
#include <stdlib.h>
int main() {
	long int A[10000];
	int N,i,j=0,count=0,max=0;
	long int mode;
	scanf("%d\n",&N);
	for(i=0;i<N;i++) {
	    scanf("%ld",&A[i]); }
	if(N==1) {
	    mode=A[0]; }
	for(i=j;i<N;i++) {
	    if(A[i]==A[i+1]) {
	     j=i
	     while(A[j]!=A[j+1]]&&j!=N) {
	        count=count+1;
	        j++; }
	     if(count>=max) {
	         max=count;
	         mode=A[i]; } } }
	printf("%ld",mode);
	return 0; }
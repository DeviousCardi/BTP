#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i=0,mode;
	scanf("%d",&n);
	int A[n];
	for (i=0;i<n;i++) {
	    scanf("%d",&A[i]); }
	i=0;int count=0;
	while(i==n) {
	    if(i==0) {
	        count++;
	        i++; }
	    else if(A[i]==A[i-1]) {
	        i++; }
	    else {
	        count++; } }
	int B[count];
	int mode = A[0];
	for (i=0;i<count;i++) {
	    B[i]=1;
	}j=0
	for (i=1;i<n;i++) {
	    if(A[i]!=A[i-1]) {
	        j++; }
	    else if(A[i]==A[j]) {
	        B[j]++; }
	    if(B[j]>mode) {
	        mode=B[j]; } }
	printf("%d",&mode);
	return 0; }
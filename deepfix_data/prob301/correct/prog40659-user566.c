#include <stdio.h>
#include <stdlib.h>
int main() {
	int N,i,j,k=0,c=0;
	scanf("%d",&N);
	int a[N];
	for (i=0;i<N;i++) {
	    scanf("%d",&a[i]); }
	for(i=0;i<N-1;i++) {
	    j=1;
	    if(a[i]==a[i+1]) {
	        j++; }
	    else {
	        if(j>=k) {
	            k=j;c=i; } }
	    if(i==N-2 && j>1) {
	        if(j>=k) {
	            k=j;c=N-1;continue; } } }
	printf("%d",a[c]);
	return 0; }
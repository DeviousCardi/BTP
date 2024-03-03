#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,N,S;
	scanf("%d",&N);
	int a[1000];
	for(i=0;i<N;i++) {
	    scanf("%d",&a[i]); }
	scanf("%d",&S);
	for(i=0;i<N;i++) {
	    for(j=i+1;j<N;j++) {
	        if(S==a[i]+a[j]) {
	            printf("(%d,%d)\n",a[i],[aj]);
	            continue; } } }
	        if(i==N) {
	           printf("no output"); }
	return 0; }
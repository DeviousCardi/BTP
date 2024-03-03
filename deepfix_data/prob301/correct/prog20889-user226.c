#include <stdio.h>
#include <stdlib.h>
int main() {
	int N,mode,j=1,c=0,i=0;
	scanf("%d",&N);
	int a[N];
	for(i=0;i<N;i++) {
	    scanf("%d",&a[i]); }
	for(i=0;i<N;i++) {
	    if(a[i]==a[i+1])
	    j++;
	    else {
	        if(j>=c) {
	            mode=a[i];
	            c=j;
	            j=0; } } }
	printf("%d",mode);
	return 0; }
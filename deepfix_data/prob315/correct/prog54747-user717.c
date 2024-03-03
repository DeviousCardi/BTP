#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,p,j,N;
    int M=0;
	scanf("%d\n",&N);
	int ar[N],ar1[N];
	for(i=0;i<N;i++)
    ar1[i]=0;
	for(i=0;i<N;i++)
	scanf("%d ",&ar[i]);
	for(i=0;i<N;i++) {
	    for(j=i+1;j<N;j++) {
	        if(ar[i]>ar[j]) {
	        p=ar[i];
	        ar1[p]++;
	        ar[i]=ar[j];
	        ar[j]=p;
	        M++; } } }
	printf("%d\n",M);
	for(i=0;i<N;i++) {
	if(ar1[i]>0)
	printf("%d ",ar1[i]); }
	return 0; }
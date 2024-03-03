#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,k,p,j,N,con=0;
    int M=0;
	scanf("%d\n",&N);
	int ar[N];int ar1[N];
	for(i=0;i<N;i++)
	ar1[i]=0;
	for(i=0;i<N;i++)
	scanf("%d ",&ar[i]);
	for(i=0;i<N;i++) {
	    k=0;
	    p=ar[i];
	    for(j=i+1;j<N;j++) {
	        if(p>ar[j]) {
	        ar[i]=ar[j];
	        ar[j]=p;
	        M++;
	       ar1[i]++; } } }
	printf("%d\n",M);
	for(i=0;i<N;i++)
	printf("%d ",ar1[i]);
	return 0; }
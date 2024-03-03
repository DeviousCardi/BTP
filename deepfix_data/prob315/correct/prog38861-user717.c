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
	    for(j=i+1;j<N;j++) {
	        if(ar[i]>ar[j]) {
	        p=ar[i];
	        ar[i]=ar[j];
	        ar[j]=p;
	        M++;
	       ar1[i]++; } } }
	printf("\n%d\n\n",ar1[1]);
	printf("%d\n",M);
	for(i=0;i<N;i++)
	printf("%d ",ar1[i]);
	return 0; }
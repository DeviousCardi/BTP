#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j;
	long int N,S;
	scanf("%ld\n",&N);
	long int a[N];
	for(i=0;i<N;i++)
	{scanf("%ld",&a[i]);}
    scanf("\n");
	scanf("%ld",&S);
	for(i=0;i<n-1;i++){
	    for(j=i+1;j<n;j++){
	       if((a[i]+a[j])==s)
	       {printf("(%ld,%ld)",a[i],a[j]);} } }
	return 0; }
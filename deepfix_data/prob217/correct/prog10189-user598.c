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
	for(i=0;i<N-1;i++){
	    for(j=i+1;j<N;j++){
	       if((a[i]+a[j])==S)
	       {printf("(%ld,%ld)\n",a[i],a[j]);} } }
	return 0; }
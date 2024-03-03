#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,tot=0;
    scanf("%d\n",&n);
    int A[n],I[n];
    for(int t=0;t<n;t++) {
        scanf("%d",&A[t]);
        I[t]=0; }
    for(int i=0;i<n;i++) {
        for(int j=i;j<n;j++)
        if(A[j]<A[i]) I[i]+=1;
        tot+=I[i]; }
	printf("%d\n",tot);
	for(int k=0;k<n;k++) printf("%d ",I[k]);
	return 0; }
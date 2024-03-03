#include <stdio.h>
#include <stdlib.h>
int main() {
	int N;
	int a[N];
	int S;
		int i;
	for(i=0;i<N;i++){
	    scanf("%d",&a[i]); }
	scanf("%d",&N);
	scanf("%d",&S);
	int k,j;
	for(k=0;k<N;k++){
	    for(j=0;j<N;j++){
	        if(a[j]==(S-a[k]))
	printf("(%d,%d)/n",a[k],a[j]);
	else continue; } }
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int main() {
	int N;
	int a[N];
	int S;
	scanf("%d",&N);
	int i;
	for(i=0;i<N;i++){
	    scanf("%d",&a[i]); }
	scanf("%d",&S);
	int k,j;
	for(k=0;k<N;k++){
	    for(j=0;j<N;j++){
	        if(a[j]='S'-a[k])
	printf("(a[k],a[j])"); } }
	return 0; }
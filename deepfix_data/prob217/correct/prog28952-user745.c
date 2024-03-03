#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int N;
	scanf("%d\n", &N);
	int a[N];
	int i;
	for(i=0; i<N; i++){
	    scanf("%d ", &a[i]); }
	int S;
	scanf("%d", &S);
	int j;
	int k;
	for(j=0; j<N; j++){
	    for(k=0; k<N; k++){
	        if((j!=k)&&(a[j]+a[k]==S)){
	            printf("(%d,%d)\n",a[j],a[k]); } } }
	return 0; }
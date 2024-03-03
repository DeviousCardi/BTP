#include <stdio.h>
#include <stdlib.h>
int main() {
	int N,T,I,K;
	scanf("%d",&N);
	int inp_array[N];
	for(I=0;I<N;I=I+1) {
	    scanf("%d", &inp_array[I]); }
	scanf("%d", &T);
	for(I=0;I<T;I=I+1) {
	    scanf("%d", &K);
	    if((inp_array[K]>inp_array[K-1]) && (inp_array[K]>inp_array[K+1])) {
	        printf("Yes\n"); }
	    else printf("No\n"); }
	return 0; }
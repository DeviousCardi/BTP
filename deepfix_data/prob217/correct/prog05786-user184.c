#include <stdio.h>
#include <stdlib.h>
int N;
int main() {
	scanf("%d", &N);
	int i,j;
	int arr[100000];
	for(i=0; i<N; i++) {
	    scanf("%d", &arr[i]); }
	int sum;
	scanf("%d", &sum);
	for(i=0; i<N-1; i++) {
	    for(j=i+1; j<N; j++) {
	        if(arr[i]+arr[j] == sum) {
	            printf("(%d,%d)\n", arr[i], arr[j]); } } }
	return 0; }
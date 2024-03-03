#include <stdio.h>
#include <stdlib.h>
int read_into_array(int Arr[],int size) {
    int i;
    for(i=0;i<size;i++){
        scanf("%d",&Arr[i]); }
    return i; }
int main() {
	int N;
	scanf("%d\n",&N);
	int A[N];
	read_into_array(A,N);
	int sum;
	scanf("\n%d",&sum);
	int i,j;
	for(i=0;i<N;i++){
	    for(j=i+1;j<N;j++){
	        if(A[i]+A[j]==sum)
	            printf("(%d,%d)\n",A[i],A[j]); } } }
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int main() {
    int N, A[100], inv[100];
    scanf("%d", &N);
    for(int i=0; i<N; i++)
        scanf("%d", &A[i]);
    int ctr;
    for(int i=0; i<N; i++)
    {   ctr=0;
        for(int j=(i+1); j<N; j++) {
            if(A[j]<A[i])
                ctr++; } }
	return 0; }
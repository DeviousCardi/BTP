#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,N;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++) {
         scanf("%d",&arr[i]);  }
        for(j=0;j<N;j++)
         printf("%d",arr[j]);
	return 0; }
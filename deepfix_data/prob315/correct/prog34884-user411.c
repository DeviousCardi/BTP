#include <stdio.h>
#include <stdlib.h>
int main() {
    int N,i;
    int p=0;
    int count=0;
    scanf("%d",&N);
    int arr[1000];
    for(i=1;i<N;i++) {
    scanf("%d",&arr[i]); }
    for(i=1;i<N;i++)
    if(arr[i]>arr[i+1])
    count++;
    else
	count=0;
    printf("%d",count);
	return 0; }
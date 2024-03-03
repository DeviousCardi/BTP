#include <stdio.h>
#include <stdlib.h>
int main() {
    int N,i;;
    int count=0;
    scanf("%d",&N);
    int arr[1000];
    for(i=1;i<N;i++) {
    scanf("%d",&arr[i]); }
    for(i=1;i<N;i++) {
    if((arr[i-1]<arr[i])&&(arr[i]>arr[i+1]))
    count++; }
    printf("%d",count);
	return 0; }
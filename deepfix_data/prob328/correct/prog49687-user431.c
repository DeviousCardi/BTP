#include <stdio.h>
#include <stdlib.h>
int arr[21];
void fib(int i) {
    arr[0]=0;
    arr[1]=1;
    int j;
    for(j=2;j<i;j++) {
        arr[j]=arr[j-1]+arr[j-2]; } }
int main() {
    fib(20);
    int i;
    for(i=0;i<20;i++)
    printf("%d ", arr[i]);
	return 0; }
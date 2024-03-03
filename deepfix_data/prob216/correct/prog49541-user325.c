#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int fib(int n) {
    int i,arr[n];
    arr[0]=1;arr[1]=1;
    for(i=0;i<n;i++){
    arr[i]=arr[i-1]+arr[i-2]; }
    int j=arr[i+1];
    return j; }
int main() {
    int t,i;
	scanf("%d",&t);
	int n=t;
	int b[n],k[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&k[i]); }
	for(i=0;i<n;i++){
	    b[i]=fib(k[i]); }
	for(i=0;i<n;i++){
	    printf("%d",b[i]); }
	return 0; }
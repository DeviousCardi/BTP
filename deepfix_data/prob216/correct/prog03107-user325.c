#include <stdio.h>
#include <stdlib.h>
#include <string.h>
fib(int n) {
    int i,arr[n];
    for(i=0;i<n;i++){
    arr[i]=arr[i-1]+arr[i-2];
    arr[0]=1;arr[1]=1; }
    int j=arr[i];
    return j; }
int main() {
    int t,i;
	scanf("%d",&t);
	int n=strlen(t);
	int b[n],k[n];
	for(i=0;i<n;i++) {
	    scanf("%d",k[i]); }
	for(i=0;i<n;i++){
	    b[i]=fib(k[i]); }
	for(i=0;i<n;i++){
	    printf("%d",b[i]); }
	return 0; }
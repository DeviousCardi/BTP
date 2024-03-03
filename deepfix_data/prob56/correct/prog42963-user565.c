#include <stdio.h>
#include <stdlib.h>
int cat(int n);
int main() {
    int arr[100];
    int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&arr[i]); }
	int n=0;
	for(i=0;i<t;i++) {
	    if(cat(n)<arr[i]&& cat(n+1)>=arr[i])
	    printf("%d",cat(n+1));
	    else
	    n=n+1;
	    printf("%d",cat(arr[i])); }
	return 0; }
int cat(int n) {
    if(n<=1)
    return 1;
    else
    return((2*(2*n-1))/(n+1))*cat(n-1); }
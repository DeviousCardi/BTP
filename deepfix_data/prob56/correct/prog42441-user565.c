#include <stdio.h>
#include <stdlib.h>
int cat(int n);
int main() {
    int arrc[100];
    int arr[100];
    int t,k,i;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&arr[i]); }
	for(k=0;k<100;k++) {
	    arrc[k]==cat(k); }
	for(i=0;i<t;i++) {
	    if(arrc[k]<arr[i]&& arrc[k+1]>arr[i])
	    printf("%d",arrc[k+1]); }
	return 0; }
int cat(int n) {
    if(n<=1)
    return 1;
    else
    return(((2*(2*n-1))/(n+1))*cat(n-1)); }
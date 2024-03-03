#include <stdio.h>
#include <stdlib.h>
int cat(int n);
int main() {
    int arrc[100];
    int arr[100];
    int t,i,j;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&arr[i]); }
	for(i=0;i<t;i++) {
	    for(j=0;j<20;j++) {
	        if(cat(j)<arr[i]&& cat(j+1)>arr[i])
	        printf("%d",cat(j+1)); } }
	return 0; }
int cat(int n) {
    if(n<=1)
    return 1;
    else
    return(((2*(2*n-1))/(n+1))*cat(n-1)); }
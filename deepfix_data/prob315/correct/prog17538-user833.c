#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, i, j, sum=0;
	int a[1000], b[1000];
	for (i=0; i<n; i++){
	    scanf("%d", &a[i]); }
	for (i=0; i<n; i++){
	    int count=0;
	    for(j=i+1; j<n; j++){
	        if (a[j]>a[i]){
	            count=count+1; } }
	    printf("%d", count); }
	return 0; }
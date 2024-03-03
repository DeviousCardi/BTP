#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, i, j, sum=0;
	int a[1000], b[1000], count=0;
	scanf("%d", &n);
	for (i=0; i<n; i++){
	    scanf("%d", &a[i]); }
	for (i=0; i<n; i++){
	    for(j=i+1; j<n; j++){
	        if (a[j]>a[i]){
	            count=count+1; } }
	    int k=0;
	    b[k]=count;
	    k=k+1;
	    sum = sum + count; }
	printf("%d\n", sum);
	for(i=0; i<n; i++)
	    printf("%d ", b[i]);
	return 0; }
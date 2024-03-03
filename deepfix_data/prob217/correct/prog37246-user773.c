#include <stdio.h>
#include <stdlib.h>
int main() {
	long int i, j, n;
	scanf("%ld", &n);
	long int a[n], s;
	for(i=0; i<n; i++){
	    scanf("%ld", &a[i]); }
	scanf("%ld", &s);
	for(i=0; i<n-1; i++){
	    for(j=i+1; j<n; j++){
	        if(a[i]+a[j]==s){
	            printf("(%ld,%ld)\n", a[i],a[j]); } } }
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n, alice=0, bob=0,alate=0, bobate=0;
	scanf("%d", &n);
	int choc[n];
	for(i=0;i<n;i++){
	    scanf("%d", &choc[i]); }
	i=0;
	j=n-1;
	while((alice+bob)<n){
	    if(alate<=bobate) {
	        alate=alate+choc[i];
	        i++;
	        alice++; }
	    else if(bobate<alate){
	        bobate=bobate+choc[j];
	        j--;
	        bob++; } }
	printf("%d %d", alice, bob);
	return 0; }
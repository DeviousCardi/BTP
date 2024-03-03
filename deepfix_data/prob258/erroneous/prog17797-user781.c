#include <stdio.h>
#include <stdlib.h>
int main() {
	int i=0,n;
	scanf("%d\n",&n);
	int A[i];
	for(i=0;i<n;i++) {
	    scanf("%d\n",&A[i]); }
	{if(n==1) {
	    printf("Yes");return 0;} }
	    {if(n=2)&&(A[0]=A[1]){printf("no"); return 0;}
	     if (A[0]>A[1]||A[n-1]>A[n-2]) {printf("Yes"); return 0;}
	     for(i=1;i<n-1;i++){
	     if (A[i]>A[i-1]&&A[i]>A[i+1]) {printf("Yes"); return 0;}
	     else {printf("No");} }
	return 0; }
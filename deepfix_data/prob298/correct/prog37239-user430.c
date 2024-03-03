#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    if(n==0) return 1;
    if(n==1) return 1;
    return (catalan(n-1)*(4*n-2))/(float)(n+1); }
int main() {
	int t,i,A[100],B[18],j;
	scanf("%d\n",&t);
	for(i=0; i<18;i++)
	B[i]=catalan(i);
	for(i=0; i<t; i++){
	    scanf("%d\n",&A[i]);
	    for(j=0; j<18; j++){
	       if(B[j]==A[i]){
	         printf("yes\n");
	         if(i==t-1) return 0;
	         break; }
	    if(j==18)
	    printf("no\n"); } }
	return 0; }
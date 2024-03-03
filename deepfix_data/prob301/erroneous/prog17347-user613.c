#include <stdio.h>
#include <stdlib.h>
int max(int b,int c){
if(c>b){
return c;}
else  {
return b;} }
int main() {
	int A[10000],n,i,j,k,x=0;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&A[i]);
	    for(j=i;j<n;j++) {
	        if(A[j]==A[i])
	        {x=x+1; } }
	printf("%d\n",x); }
	printf("max(x)")
	return 0; }
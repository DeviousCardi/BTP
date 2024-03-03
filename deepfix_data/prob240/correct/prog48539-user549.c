#include <stdio.h>
#include <stdlib.h>
int catalan(int n)     {
    if(n==0)     return 1;
    if(n==1)     return 1;
    else         return catalan(n-1)*((4*n-2)/(float)(n+1)); }
int main() {
	int i,j,n,arr[100];
	for(i=0; i<20; i++)     {
	    arr[i]=catalan(i); }
	int t;
	scanf("%d\n",&t);
	for(i=1; i<=t; i++)   {
	    scanf("%d\n",&n);
	    for(j=0; j<20; j++)   {
	        if(arr[j]>=n)         {
	            printf("%d",arr[j-1]);
	            break; } } }
	return 0; }
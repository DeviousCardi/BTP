#include <stdio.h>
#include <stdlib.h>
int cat(int n,int k){
    if(k==0)   return 1;
    else  return (n+k)/k*cat(n,k-1); }
int main() {
	int t,k[100];
	scanf("%d\n",&t);
	int i;
	for(i=0;i<t;i++){
	    scanf("%d\n",&k[i]); }
	int j;
	for(j=0;j<t;j++){
	    i=0;
	    while(cat(i,i)<=k[j]){
	        i++; }
	    printf("%d\n",cat(i+1,i+1)); }
	return 0; }
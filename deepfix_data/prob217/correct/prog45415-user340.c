#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,s,j,i,N[10000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%d",&N[i]); }
	scanf("%d",&s);
	for(i=0;i<n;i++){
	  for(j=i+1;j<n;j++){
	    if(N[i]+N[j]==s){
	        printf("(%d,%d)\n",N[i],N[j]); } } }
	return 0; }
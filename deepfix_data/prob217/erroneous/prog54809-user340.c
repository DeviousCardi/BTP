#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,s,i,N[10000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%d",&N[i]); }
	scanf("%d",&s);
	while(i<n&&j<n&&i<j){
	    if(N[i]+N[j]=s){
	        printf("(%d,%d)\n",N[i],N[j]);
	        i++;
	        j++; } }
	return 0; }
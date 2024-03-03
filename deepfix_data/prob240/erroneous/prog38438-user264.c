#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,t,k[100];
	scanf("%d\n",&t);
	for(i=0;i<t;i++)
	scanf("%d\n",&k[i]);
	for(i=0;i<k;i++){
	    if(catl(i)>k[i]){
	        printf("%d\n"catl(i-1)); } }
	return 0; }
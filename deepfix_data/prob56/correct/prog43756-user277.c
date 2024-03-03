#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    if(n==0)
    return 1;
    else return ((cat(n-1)*(2*n-1)*2)/(n+1)); }
int main() {
	int i,j,k,test;
	scanf("%d",&test);
	for(i=0;i<test;i++){
	    scanf("%d",&j);
	    for(i=0;i>-1;i++){
	       if(j>cat(i))
	       continue;
	       else{
	           printf("%d\n",cat(i+1));
	           break; } } }
	return 0; }
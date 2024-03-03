#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    for(n=0;n<100;n++){
    return cat(n)==((2*n/(n+1))*cat(n-1)) } }
int main() {
	int i,j,k,test;
	scanf("%d",&test);
	for(i=0;i<test;i++){
	    scanf("%d",&j);
	    for(i=0;i<=j;i++){
	       if(cat(i)<k && cat(i+1)>k)
	       printf("%d",cat(i+1)); } }
	return 0; }
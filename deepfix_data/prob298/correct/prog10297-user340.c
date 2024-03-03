#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int cat(int n){
    if(n==0)
    return 1;
    else return ((4*n-2)*cat(n-1))/(n+1); }
int main() {
	int t,tst[20],i,j;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&tst[i]); }
	for(i=0;i<t;i++){
	    for(j=0;j<=50;j++){
	    if(tst[i]==cat(j)){
	        printf("yes\n");
	    break; }
	    if(j==17){
	        printf("no\n"); } } }
	return 0; }
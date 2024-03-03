#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    if(n==0)
    return 1;
    else return ((4*n-2)/(n+1))*cat(n-1); }
int main() {
	int t,tst[20];
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&tst[i]); }
	for(i=0;i<=17;i++){
	    catstr[i]=cat(i); }
	for(i=0;i<t;i++){
	    for(j=0;j<=17;j++){
	    if(tst[i]==cat(i){
	        printf("yes\n");
	    break; }
	    if(j==18){
	        printf("no\n"); } } }
	return 0; }
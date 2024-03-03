#include <stdio.h>
#include <stdlib.h>
int catl(int n){
    if(n==0)
    return 1;
    else if(n==1)
    return 1;
    else
    return 2*(2*(n-1)+1)*catl(n-1)/n+1; }
int main() {
	int i,t,j,k[100];
	scanf("%d\n",&t);
	for(i=0;i<t;i++){
	scanf("%d\n",&k[i]); }
	for(j=0;j<t;j++){
	for(i=1;i<1000;i++){
	    if(catl(i)>=k[j]){
	        printf("%d\n",catl(i-1));break; } } }
	return 0; }
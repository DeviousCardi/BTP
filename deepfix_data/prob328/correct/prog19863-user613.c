#include <stdio.h>
#include <stdlib.h>
int fab(int n ){
    if(n==0)return 0;
    if(n==1)return 1;
   return fab(n-1)+fab(n-2); }
int main() {
	int i,j,t,k;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&k);
	    for(j=0;j<20;j++){
	        if(fab(j)==k){
	            printf("yes\n");
	            break; }
	        if(j==19){
	            printf("no\n"); } } }
	return 0; }
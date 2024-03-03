#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    if(n==1||n==0)
    return 1;
    else
    return (cat(n-1)+cat(n-2)); }
int main() {
	int t,i,k,j;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	   scanf("%d\n",&k);
	   for(j=0;j<t;j++){
	   if((cat(j)<k)&&(cat(j+1)>k))
	   printf("%d\n",cat(j)); }
	printf("\n"); }
	return 0; }
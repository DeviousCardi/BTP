#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    int ans=0,p;
    if(n==1||n==0)
    return 1;
    else
    for(p=1;p<n;p++)
    ans=ans+cat(p)*cat(n-p-1);
    return ans; }
int main() {
	int t,i,k,j;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	   scanf("%d\n",&k);
	   for(j=0;j<t-1;j++){
	   if((cat(j)<k)&&(cat(j+1)>k))
	   printf("%d\n",cat(j)); }
	printf("\n"); }
	return 0; }
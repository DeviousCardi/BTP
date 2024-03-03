#include <stdio.h>
#include <stdlib.h>
int cat(int n){
if(n==0)
return 0;
if (n==1)
return 1;
else
return  (4*n-2)*cat(n-1)/(n+1); }
int main() {
	int i,t[100],n;
	scanf("%d\n",&n);
	for(i=0;i<=n;i++){
	scanf("%d\n",&t[100]);
	if (t[i]== cat); ;
	printf("%d\n",t[i]); }
	return 0; }
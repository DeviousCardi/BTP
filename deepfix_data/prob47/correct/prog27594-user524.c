#include <stdio.h>
#include <stdlib.h>
int cat(int n){
if(n==0)
return 1;
else
return  (4*n-2)*cat(n-1)/(n+1); }
int main() {
	int i,t[100],n,sum,x;
	sum=0;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
	scanf("%d\n",&t[100]);
    for(x=0;x<t[100];x++){
	    sum=sum+cat(x);	}
	printf("%d\n",sum); }
	return 0; }
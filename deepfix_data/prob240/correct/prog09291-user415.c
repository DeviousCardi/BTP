#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    int i,sum=0;
    if(n<=1)
    return 1;
    else
    for(i=0;i<n;i++){
     sum=cat(i)+cat(n-i-1); }
    return sum; }
int main() {
	int t,i,k;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	   scanf("%d",&k);
	   if((cat(k)-cat(k)%10)<k)
	   printf("%d\n",cat(k)); }
	return 0; }
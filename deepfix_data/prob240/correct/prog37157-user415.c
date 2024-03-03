#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    int i;
    for(i=0;i<n;i++){
    if((n==1)||(n==0))
    return 1;
    else
    return cat(i)+cat(n-i-1); } }
int main() {
	int t,i,k,n;
	scanf("%d",&t);
	scanf("%d",&n);
	for(i=0;i<t;i++){
	   scanf("%d",&k);
	   if((cat(n)-cat(n)%10)<k)
	   printf("%d",n); }
	return 0; }
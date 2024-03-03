#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    int i;
    if(n==1||n==0)
    return 1;
    else
    return (cat(n-1)+cat(n-2)); }
int main() {
	int t,i,k;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	   scanf("%d",&k);
	   if((cat(k)-cat(k)%10)<k)
	   printf("%d\n",cat(k)); }
	return 0; }
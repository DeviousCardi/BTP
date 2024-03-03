#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    int i;
    for(i=0;i<n;i++){
    if((i==1)||(i==0))
    return 1;
    else
    return cat(i)+cat(n-i-1); }
    return; }
int main() {
	int t,i,k;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	   scanf("%d",&k);
	   if((cat(k)-cat(k)%10)<k)
	   printf("%d\n",cat(k)); }
	return 0; }
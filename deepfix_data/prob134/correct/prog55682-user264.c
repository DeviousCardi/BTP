#include <stdio.h>
#include <stdlib.h>
int B(int n,int k){
    if(n<k)
    return 0;
    else if(n==0&&k==0)
    return 1;
    else if(k==0)
    return 1;
    else
    return B(n-1,k)+B(n-1,k-1); }
int main() {
	int b,i,j,k=0;
	scanf("%d",&b);
	for(i=0;i<=20;i++){
	  for(j=0;j<=30;j++){
	       if(B(i,j)==b){
	       k=1;break;} }
	if(k==1) break; }
	if(k==1)
	printf("%d %d",i,j);
	else
	printf("-1");
	return 0; }
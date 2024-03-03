#include <stdio.h>
#include <stdlib.h>
int Binomial(int n,int k){
   if (n<k)
    return 0;
    else
    if(n==0&&k==0)
    return 1;
   else
   if(k==0)
   return 1;
    else
    return Binomial(n-1,k)+Binomial(n-1,k-1); }
int main() {
	int i,k,b;
	int j=0;
	scanf("%d",&b);
	for(i=0;i<=20;i++){
	    for(k=0;k<=20;k++){
	        if  (Binomial(i,k)==b) {
	            j=1;
	        printf("%d %d",i,k);
	        break; } }
	    if(j==1)
	    break; }
	if(j==0)
	printf("-1");
	return 0; }
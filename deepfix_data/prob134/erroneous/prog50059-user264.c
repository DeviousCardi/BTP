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
	int b,i,j;
	scanf("%d",&b);
	for(i=0;i<=b;i++){
	for(j=0;j<=i;j++){
	    if(B(i,j)==b)
	    {printf("%d %d",i,j);k=1;break;}
	}if(k==1) break; }
	return 0; }
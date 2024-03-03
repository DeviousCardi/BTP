#include <stdio.h>
#include <stdlib.h>
float cat(int n,int k)
{   if(n==0||n==1)
    return 1;
    return ((float)(n+k)/k)*cat(n,k+1); }
int main() {
	int i,n,t;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d\n",&n);
	    printf("%f\n",cat(n,2)); }
	return 0; }
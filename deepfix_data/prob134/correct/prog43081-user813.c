#include <stdio.h>
#include <stdlib.h>
int bin(int n,int k) {
    if(n<k)
    {return 0;}
    if(n==0&&k==0)
    {return 1;}
    if(k==0)
    {return 1;}
    else
    {return bin(n-1,k)+bin(n-1,k-1);} }
int main() {
	int m,i,j;
	scanf("%d",&m);
	for(i=0;i<=20;i++) {
	    for(j=0;j<=i;j++) {
	        if(m==bin(i,j))
	        {printf("%d %d",i,j);break;} } }
	return 0; }
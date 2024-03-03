#include <stdio.h>
#include <stdlib.h>
int B(int n, int k) {
        if(k==0 && n==0)
        return 1;
       else if(n<k)
        return 0;
        else if(k==0)
        return 1;
        else
        return B(n-1,k)+B(n-1,k-1); }
int main() {
	int i,j,k,b,l;
	scanf("%d",&b);
	for(i=0;i<20;i++)
	{ for(j=0;j<20;j++)
	 {   l=0;
	     k=B(i,j);
	     if(k==b) {
	         l=1;
	         break; }
	  }   if(l==1)
	     printf("%d %d",i,j);
	     break; }
 	return 0; }
#include <stdio.h>
#include <stdlib.h>
int catalan(int k)
  {  k=k+1;
     if(k==1 || k==2) return 1;
     int i,j,sum=0;
     for(i=1,j=k-1;i<k;i++,j--)
     sum = sum+catalan(i)*catalan(j);
     return sum; }
int main() {
           printf("%d",catalan(2));
	return 0; }
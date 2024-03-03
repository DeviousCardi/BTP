#include <stdio.h>
#include <stdlib.h>
int catalan(int n)
{ int i;
    if(n<=1) {
        return 1; }
 else {
       for(i=0;i<n;++i) {
           sum=sum+(catalan(i)*catalan(n-i-1));
           return sum; } } }
int main()
{  int i,t,k,n;
   scanf("%d",&t);
   for(i=0;i<t;++i) {
          scanf("%d",&k);
          if((catalan(n-1)<k)&&(catalan(n)>k)) {
               z=n-1;
               printf("%d\n",n-1); } }
	return 0; }
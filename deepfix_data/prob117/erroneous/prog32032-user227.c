#include <stdio.h>
#include <stdlib.h>
int stp(long int n)
 { long int i=0;
  if (n==1)
  return 1;
  if
 { i++;
 if(n<=2*i-1)
 {if(n==2*i-1)
 return 1;
 else
 stp(n);}
 else
 return 0;}}
 int main() {
 int a,t,i;
 long int k;
 scanf("%\nd",&t);
 for(i=0;i<t;i++)
 { scanf("%\nld",&k);
   a=stp(k);
   if(a==1)
   printf("yes");
   else
   printf("no");}
	return 0; }
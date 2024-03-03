#include <stdio.h>
#include <stdlib.h>
int stp(long int n)
 { static long int i=1;
  if (n==1)
  return 1;
  if (n==0)
  return 1;
  if(n>1)
 { i=i*2;
 if(n>=(i-1))
 {if(n==(i-1))
 return 1;
 else
 stp(n);}
 if(n<(i-1))
 return 2;
 }}
 int main() {
 int a,t,i;
 long int k;
 scanf("%d\n",&t);
 for(i=0;i<t;i++)
 { scanf("%ld\n",&k);
   a=stp(k);
   if(a==1)
   printf("yes\n");
   if(a==2)
   printf("no\n");}
	return 0; }
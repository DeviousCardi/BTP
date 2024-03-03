#include <stdio.h>
#include <stdlib.h>
int count=0;
int hanoi(int n,char a,char c,char b) {
    if(n==0) {
        count++;
      return ; }
    hanoi(n-1,a,b,c);
    count++;
    hanoi(n-1,b,c,a);
  count++; }
int main() {
	int t,k[100],i,n=0,j;
	long a;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	 scanf("%d",&k[i]);
	for(i=0;i<t;i++) {
	    for(j=0;j<t;j++) {
	      a=hanoi(j,'a','c','b');
	      if(k[i]==a)
	      n=1; }
	  if(n==1)
	   printf("yes\n");
	  else
	   printf("no\n"); }
	return 0; }
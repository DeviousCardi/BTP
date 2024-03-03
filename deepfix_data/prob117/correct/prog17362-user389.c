#include <stdio.h>
#include <stdlib.h>
int count=0;
int hanoi(int t) {
    int a;
    if(t==0) {
      a= 1; }
    else {
        if(t>0) {
          a = (2 * hanoi(t-1)) + 1; } }
   return a; }
int main() {
	int t,k[100],i,n=0,j,a=0;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	 scanf("%d",&k[i]);
	for(i=0;i<t;i++) {
	    count=0;
	    for(j=1;j<t;j++) {
	      a= hanoi(j);
	      if(k[i]==a||k[i]==0)
	      n=1; }
	  if(n==1)
	   printf("yes\n");
	  else
	   printf("no\n"); }
	return 0; }
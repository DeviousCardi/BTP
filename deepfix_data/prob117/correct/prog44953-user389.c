#include <stdio.h>
#include <stdlib.h>
int count=0;
void hanoi(int n,char a,char c,char b) {
    if(n==0) {
        count++; }
    hanoi(n-1,a,b,c);
    count++;
    hanoi(n-1,b,c,a); }
int main() {
	int t,k[100],i,n=0,j;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	 scanf("%d",&k[i]);
	for(i=0;i<t;i++) {
	    count=0;
	    for(j=0;j<t;j++) {
	      hanoi(j,'a','c','b');
	      if(k[i]==count)
	      n=1; }
	  if(n==1)
	   printf("yes\n");
	  else
	   printf("no\n"); }
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int l=2;
int catalan(int k) {
  if(k<=1)
  return 1;
  for(i=0;i<k;i++)
  sum=sum+(catalan(k-i)*catalan(i));
  return sum; }
int main() {
	int i,t,k;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
    	scanf("%d",&k);
    	printf("%d\n",catalan(k)); }
	return 0; }
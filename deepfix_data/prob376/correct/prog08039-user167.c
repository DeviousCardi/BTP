#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int fact(int n) {
    if(n==1)
    return 1;
    else
    return n*fact(n-1); }
int main() {
int i,k,t,m;
scanf("%d",&t);
  for(i=0; i<t; i++) {
     scanf("%d",&m);
     printf("%d\n",fact(m)); }
	return 0; }
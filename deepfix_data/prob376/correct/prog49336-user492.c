#include <stdio.h>
#include <stdlib.h>
  int catlan(int x) {
      int n;
      if(x==0)
      return 1;
      else if(x==1)
      return 1;
      else {
          n = ((2*(2*x+1))/(x+2))*catlan(x-1);
          return n; } }
int main() {
       int i,a,n,t;
       scanf("%d\n",&n);
       for(i=0;i<n;i++) {
           scanf("%d",&t);
           a=catlan(t);
           printf("%d\n",a); }
	return 0; }
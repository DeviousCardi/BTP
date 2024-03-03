#include <stdio.h>
#include <stdlib.h>
  int catlan(int x) {
      int i,sum=0;
      if(x==0)
      return 1;
      else if(x==1)
      return 1;
      else
      for(i=0;i<x;i++) {
          sum =  sum + catlan(i)*catlan(x-i-1);}
          return sum; }
int main() {
       int i,a,n,t;
       scanf("%d\n",&n);
       for(i=0;i<n;i++) {
           scanf("%d",&t);
           a=catlan(t);
           printf("%d\n",a); }
	return 0; }
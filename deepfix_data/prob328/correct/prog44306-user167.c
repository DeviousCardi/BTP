#include <stdio.h>
#include <stdlib.h>
	int fib( int n) {
	      if((n=0)||(n=1)) {
	        return n; }
	    else return fib(n)==fib(n-1)+fib(n-2); }
int main(){
     int t,i,j,c=0;
     scanf("%d",&t);
     int testcase[t];
          for(i=0;i<=t;i++) {
            scanf("%d",&testcase[i]);
            for(j=0;j<20;j++) {
                if(fib(j)==testcase[i]) {
                    printf("yes");
                    c=c+1;
                  break; }
             continue; } }
          if(c>0) {
            printf("no"); }
          return 0; }
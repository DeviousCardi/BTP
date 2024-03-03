#include <stdio.h>
#include <stdlib.h>
	int fib( int n) {
	      if((n==0)||(n==1)) {
	        return n; }
	    else return fib(n-1)+fib(n-2); }
int main(){
     int t,i,j,c=0;
     scanf("%d",&t);
     int testcase[t];
          for(i=0;i<t;i++) {
            scanf("%d",&testcase[i]); c=0;
            for(j=1;j<=20;j++) {
                if(fib(j)==testcase[i]) {
                    printf("yes\n");
                    c=c+1;
                  break; } }
            if(c==0) {
            printf("no\n"); } }
          return 0; }
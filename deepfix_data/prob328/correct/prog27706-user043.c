#include <stdio.h>
#include <stdlib.h>
int fibonacci(int n) {
     if(n<=1)
      return n;
     else
     return fibonacci(n-1)+fibonacci(n-2); }
int main() {
              int t,k,i,j,flag;
              scanf("%d\n",&t);
              for(i=0;i<t;i++) {
                   scanf("%d\n",&k);
                   flag=0;
                  for(j=0;j<20;j++) {
                       if (fibonacci(j)==k)
                        flag=1; }
                       if(flag==1)
                         printf("yes\n");
                       else
                         printf("no\n"); }
	return 0; }
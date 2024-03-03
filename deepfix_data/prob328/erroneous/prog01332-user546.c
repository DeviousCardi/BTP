#include <stdio.h>
#include <stdlib.h>
int Fib(int i) {
      if(i==0)
      return 0;
      else if(i==1)
      return 1;
      else
      return Fib(i-1)+Fib(i-2); }
int main() {
    int t[50],n,i,j=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
        int k=0;
        scanf("%d",&t[i]);
        while(j!=20||i!=n-1) {
          if(Fib(j)==t[i])
            k=1;
          j++; }
        if(k==1)
          printf("yes")
        else
          printf("no");
        printf("\n"); }
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int fibo(int j) {
    if (j == 0)
          return 0;
        else if (j == 1)
          return 1;
    else
          return (fibo(j - 1) + fibo(j - 2)); }
int main() {
  int i,j,t,flag;
  scanf("%d\n",&t);
  int k[t];
  for(i=0;i<t;i++) {
      flag=0;
      scanf("%d\n",&k[i]);
      for(j=0;j<20;j++) {
          if(k[i]==fibo(j))
          flag =1; }
      if(flag==1)
      printf("yes\n");
      else
      printf("no\n"); }
     return 0; }
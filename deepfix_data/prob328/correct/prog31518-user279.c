#include <stdio.h>
#include <stdlib.h>
int fibo(int j) {
    if (j == 0) {
      return 0; }
    else if (j == 1) {
        return 1; }
    else {
        return(fibo(j - 1) + fibo(j - 2)); } }
int main() {
  int i,k,j,t,flag=0;
  scanf("%d",&t);
  for(i=0;i<t;i++) {
      scanf("%d",&k);
      for(j=0;j<20;j++) {
          if(fibo(j)==k)
          flag =1;
          break; }
      if(flag==1)
      printf("yes\n");
      else
      printf("no\n"); }
     return 0; }
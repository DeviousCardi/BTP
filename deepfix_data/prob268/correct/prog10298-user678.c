#include <stdio.h>
#include <stdlib.h>
long getways(int x, int m) {
    int count=0;
  if(m=1) {
      if(x%5==0) {
          count=count+1; } }
    return count; }
int main() {
  int n;
  scanf("%d", &n);
    printf("%ld", getways(n,1));
    return 0; }
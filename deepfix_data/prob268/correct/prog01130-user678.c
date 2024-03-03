#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    int count=0;
   if(x%5==0) {
       count =count+1; }
          if(x%3==0) {
              count=count+1; }
          if(x==0) {
              return 0; }
          count =count+getways(x-1,m);
          return count; }
int main() {
  int n;
  scanf("%d", &n);
  printf("%ld", getways(n,3));
    return 0; }
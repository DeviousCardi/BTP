#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long int c=0;
long getways(int x, int m) {
    if(m<1) {
      c=c+(x-5*m)/3;
      c++;
      return c; }
    c=c+(x-5*m)/3;
    c++;
    return getways(x,m-1); }
int main() {
    int n;
    scanf("%d",&n);
    int h=n/5;
    printf("%ld",(getways(n,h)));
    return 0; }
#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long int a=0;
long getways(int x, int m) {
   if(m<1){
        a=a+(x-5*m)/3;
   a++;
   return a; }
   a=a+(x-5*m)/3;
   a++;
   return getways(x,m-1); }
int main() {
    int n;
    scanf("%d",&n);
    int b=n/5;
    printf("%ld",getways(n,b));
    return 0; }
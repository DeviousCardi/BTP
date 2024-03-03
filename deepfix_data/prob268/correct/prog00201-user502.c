#include <stdio.h>
#include <stdlib.h>
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
    int n,b=n/5;
    scanf("%d",&n);
    printf("%ld",getways(n,b));
    return 0; }
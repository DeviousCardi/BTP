#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(x<0) return 0;
   if(m==1) return 1;
   else if(m==2) return getways(x-3,2)+getways(x,1);
   else if(m==3) return getways(x-5,3)+getways(x,2); }
int main() {
    int n;
    scanf("%d",&n);
    long int w=getways(n,3);
    printf("%ld",w);
    return 0; }
#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if (m==1)
       return 1;
    if (m==2) {
        if (x-3<3)
           return 1+getways(x,1);
        else
           return 1+getways(x-3,1); } }
int main() {
    long int n;
       scanf("%ld",&n);
    int count=0;
    int y;
      for (y=1;y<=3;y++) {
            getways(n,y); }
    count=getways(n,3);
    printf("%d",count);
    return 0; }
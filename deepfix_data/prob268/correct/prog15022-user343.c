#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if (x==0)
       return 0;
    if (m==1)
       return 1;
    if (m==2)
        return x/3;
    if (m==3) {
        return 1+getways(x-5,3)+getways(x-3,2)+getways(x-1,1); } }
int main() {
    long int n;
       scanf("%ld",&n);
    int count=0;
    int y;
      for (y=1;y<=3;y++) {
            count=count+getways(n,y); }
    printf("%d",count);
    return 0; }
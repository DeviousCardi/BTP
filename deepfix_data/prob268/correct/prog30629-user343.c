#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if (m==1)
       return 1;
    if (m==2)
        return x/3;
    if (m==3) {
        if (x<5)
           return getways(x-3,2)+getways(x-3,1)+getways(x-1,1);
        else
           return getways(x-5,3)+getways(x-3,2)+getways(x-3,1); } }
int main() {
    long int n;
       scanf("%ld",&n);
    int count=0;
    int y;
      for (y=1;y<=3;y++) {
            count=count+getways(n,y); }
    printf("%d",getways(n,3));
    return 0; }
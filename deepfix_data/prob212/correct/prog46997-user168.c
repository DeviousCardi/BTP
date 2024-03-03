#include <stdio.h>
int main() {
    int y,sum1 = 0,r,i;
    int z,sum2 = 0,s;
    scanf("%d",&y);
    while(y>0) {
        r = y%10;
        sum1 = r + sum1;
        y=y/10; }
     while(z>0)
    i=2016;
   while(i%sum1!=0) {
       i++; }
   printf("%d",i);
    return 0; }
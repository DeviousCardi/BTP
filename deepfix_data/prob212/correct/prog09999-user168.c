#include <stdio.h>
int main() {
    int y,sum1 = 0,r,i;
    scanf("%d",&y);
    while(y>0) {
        r = y%10;
        sum1 = r + sum1;
        y=y/10; }
    i=2016;
   while(i%sum1!=0) {
       i++; }
   printf("%d",i);
    return 0; }
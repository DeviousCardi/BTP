#include <stdio.h>
int main() {
    int y,sum1 = 0,r;
    int z,sum2 = 0,s;
    scanf("%d",&z);
    while(y>0) {
        r = y%10;
        sum1 = r + sum1;
        y=y/10; }
     while(z>0) {
        s = z%10;
        sum2 = r + sum2;
        z=z/10;
    }printf("%d",z); }
#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
int c=0;
long getways(int x, int m) {
    if(x>=5)
    return 3+getways(x-5,m);
    if(x<5&&x>=3)
    return 2+getways(x-3,m);
    if(x<3&&x>=1)
    return 1+getways(x-1,m);
    if(x<1) {
    c++;
    return 0; } }
int main() {
    int x;
    scanf("%d",&x);
    printf("%d",c);
    return 0; }
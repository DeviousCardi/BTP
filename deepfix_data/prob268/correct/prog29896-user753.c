#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(x>=5)
    return 3+getways(x-5,3);
    if(x<5&&x>=3)
    return 2+getways(x-3,3);
    else
    if(x<3&&x>=1)
    return 1+getways(x-1,3); }
int main() {
    int x;
    scanf("%d",&x);
    printf("%d",getways(x,3));
    return 0; }
#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(x==0)
    return 1;
    else if(x<3)
    return getways(x-1,m)+1;
    else if(x<5)
    return getways(x-1,m)+1||getways(x-3,m)+1;
    else
    return getways(x-1,m)+1||getways(x-3,m)+1||getways(x-5,m)+1; }
int main() {
    int n;
    scanf("%d",&n);
    printf("%ld",getways(n,3));
    return 0; }
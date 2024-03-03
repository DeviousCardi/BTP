#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(x==0) return 1;
    if(x<0) return 0;
    if(x>=1&&m==0) return 0;
    if(m>=1)
    return getways(x-*memarray[m-1],m)+getways(x,m-1); }
int main() {
    int n;
    scanf("%d",&n);
    *memarray=1;
    *memarray[1]=3;
    *memarray[2]=5;
    printf("%ld ",getways(n,3));
    return 0; }
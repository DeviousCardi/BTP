#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(x==0&&m==0) return 1;
    if(x<=0&&m>0) return 0;
    return getways(x-*memarray[m],m)+getways(x,m-1); }
int main() {
    int n;
    scanf("%d",&n);
    *memarray[0]=5;
    *memarray[1]=1;
    *memarray[2]=3;
    printf("%ld",getways(n,3));
    return 0; }
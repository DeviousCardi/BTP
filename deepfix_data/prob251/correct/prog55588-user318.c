#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(x<0)return 0;
    if(m==1)return 1;
    if(m==2)
    return getways(x,m-1)+getways(x-3,m);
    return getways(x,m-1)+getways(x-5,m); }
int main() {
    int n;
    scanf("%d",&n);
    printf("%ld",getways(n,3));
    return 0; }
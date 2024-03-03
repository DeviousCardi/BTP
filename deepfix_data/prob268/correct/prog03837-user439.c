#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(x<=0)
    return 0;
    if(m==1)
    return 1;
    else if(m==2)
    return getways(x-2,m)+getways(x-1,m-1);
    else
    return getways(x-3,m)+getways(x-2,m-1)+getways(x-1,m-2); }
int main() {
    int n=0;
    scanf("%d",&n);
    printf("%ld",getways(n,3));
    return 0; }
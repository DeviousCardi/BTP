#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(n==0)
    return 1;
    else if(x<m)
    return getways(x,m-1)+1;
    return getways(x,m)+1; }
int main() {
    int n;
    scanf("%d",&n);
    printf("%ld",getways(n,3));
    return 0; }
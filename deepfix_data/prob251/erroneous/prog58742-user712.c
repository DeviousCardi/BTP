#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    long int ways=0;
    if(x==0)
    return 0;
    if(x>=1)
    ways = getways(x-1,1);
    if(m>=2&&x>=3)
    ways = ways + getways(x-3,2);
    if(m==3&&x>=5)
    ways = ways + getways(x-5,3);
    return ways; }
int main() {
    int x;
    long int ways;
    scanf("%d",&x);
    ways = getways(x,3)
    printf("%ld",ways);
    return 0; }
#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    long int ways=0;
    ways = getways(x-1,1);
    if(m>=2)
    ways = ways + getways(x-3,2);
    if(m=3)
    ways = ways + getways(x-5,3);
    return ways; }
int main() {
    return 0; }
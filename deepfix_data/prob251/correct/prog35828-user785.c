#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(x == 0)
        return 1;
    if(x < 0)
        return 0;
    else{
        return getways(x, 1) + getways(x - 3, 2) + getways(x - 5, 3); } }
int main() {
    int n, i;
    long total;
    scanf("%d",&n);
    for(i = 0; i < 3; i++)
        memarray[i] = (long *)malloc(n*sizeof(long));
    total = getways(n, 1) + getways(n - 3, 2) + getways(n - 5, 3);
    printf("%ld",total);
    return 0; }
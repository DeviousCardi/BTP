#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(x == 0)
        return 1;
    if(x < 0)
        return 0;
    if(memarray[m - 1][x] != -1)
        return memarray[m - 1][x];
    else{
        if(m == 3)
            memarray[m - 1][x] = getways(x - 1, 1) + getways(x - 3, 2) + getways(x - 5, 3);
        if(m == 2)
            memarray[m - 1][x] = getways(x - 1, 1) + getways(x - 3, 2);
        else
            memarray[m - 1][x] = 1;
        return memarray[m - 1][x]; } }
int main() {
    int n, i, j;
    long total;
    scanf("%d",&n);
    for(i = 0; i < 3; i++)
        memarray[i] = (long *)malloc((n)*sizeof(long));
    for(i = 0; i < 3; i++)
        for(j = 0; j < n; j++)
            memarray[i][j] = -1;
        for(i = 0; i < 3; i++)
            memarray[i][0] = 1;
    total = 1 +  + getways(n - 5, 3);
    printf("%ld",total);
    return 0; }
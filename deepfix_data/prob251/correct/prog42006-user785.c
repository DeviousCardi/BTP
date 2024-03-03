#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(x == 0)
        return 1;
    if(x < 0)
        return 0;
    if(memarray[m][x] != -1)
        return memarray[m][x];
    else{
        if(m == 3)
            memarray[m][x] = getways(x - 1, 1) + getways(x - 3, 2) + getways(x - 5, 3);
        if(m == 2)
            memarray[m][x] = getways(x - 1, 1) + getways(x - 3, 2);
        else
            memarray[m][x] = getways(x - 1, 1);
        return memarray[m][x]; } }
int main() {
    int n, i, j;
    long total;
    scanf("%d",&n);
    for(i = 0; i < 3; i++)
        memarray[i] = (long *)malloc((n)*sizeof(long));
    for(i = 0; i < 3; i++)
        for(j = 0; j < n; j++)
            memarray[i][j] = -1;
    total = getways(n - 1, 1) + getways(n - 3, 2) + getways(n - 5, 3);
    printf("%ld",total);
    return 0; }
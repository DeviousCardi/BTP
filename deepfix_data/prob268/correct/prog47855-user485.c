#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    int c=0,i,j;
    for(i=0;i<=x/5;i++) {
        for(j=0;j<=(x-5*i)/3;j++)
            c=c+1; }
    return c; }
int main() {
    int x;
    scanf("%d",&x);
    printf("%ld",getways(x,5));
    return 0; }
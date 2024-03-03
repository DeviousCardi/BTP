#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    int c=0,i,j;
    for(i=0;i<=x/m;i++) {
        for(j=0;j<=(x-m*i)/m-2;j++)
            c=c+1; }
    return c; }
int main() {
    int x,count=0;
    scanf("%d",&x);
    printf("%ld",getways(x,5));
    return 0; }
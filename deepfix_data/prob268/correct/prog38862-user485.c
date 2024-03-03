#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    int c=0,i,j;
    for(i=0;i<x/m;i++) {
        for(j=0;j<(x-m*i)/m-2;j++)
            c=c+1; }
    return c; }
int main() {
    int x,i,count=0;
    scanf("%d",&x);
    for(i=0;i<3;i++) {
        count=count+getways(x,2*i+1); }
    printf("%d",count);
    return 0; }
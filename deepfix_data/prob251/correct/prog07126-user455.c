#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m)
{   int i,j,count=0;
    for(i=0;i<=x/5;i++) {
        for(j=0;j<=(x-5*i)/3;j++) {
            count=count+1; } }
    return count; }
int main() {
    int n;
    long d;
    scanf("%d",&n);
    d=getways(n,0);
    printf("ld",d);
    return 0; }
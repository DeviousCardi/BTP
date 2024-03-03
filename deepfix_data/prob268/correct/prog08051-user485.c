#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) { }
int main() {
    int x,y=3,i,j,count=0;
    scanf("%d",&x);
    for(i=0;i<=x/5;i++) {
        for(j=0;j<=(x-5*i)/3;j++)
        count=count+j; }
    return 0; }
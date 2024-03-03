#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if (x>5)
    getways(x,m)=getways(x-5,3)
    getways(x,m)=getways(x-1,m)+getways(x-3,m)+getways(x-5,m)
    getways(x,m)=getways(x-1,m)+getways(x-3,m)+getways(x-5,m) }
int main() {
    int n;
    scanf("%d",&n);
    memarrray[0]=(long*)malloc(n*sizeof( int));
    memarrray[1]=(long*)malloc(n*sizeof( int));
    memarrray[2]=(long*)malloc(n*sizeof( int));
    for(i=0;i<n;i++)
    *(*memarray+i)=1;
    getways(n,2);
    getways(n,3);
    return 0; }
#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int y) {
    if(y==1)return 1;
    if(y==3)m=5;
    else if(y==2)m=3;
    else m=1;
    int k=0;
    for(int i=0;m*i<x;++i){
        k=k+getways(x-m*i,m-1) }
    return k; }
int main() {
    int n;
    scanf("%d",&n);
    printf("%ld",getways(n,3));
    return 0; }
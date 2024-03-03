#include <stdio.h>
#include <stdlib.h>
int n;
long getways(int x, int y) {
    if(x<0) return 0;
    if(y==1) return 1;
    if(y==2) return getways(x-3,2)+getways(x,1);
    if(y==3) return getways(x-5,3)+getways(x,2); }
int main() {
    scanf("%d",&n);
    printf("%ld",getways(n,3));
    return 0; }
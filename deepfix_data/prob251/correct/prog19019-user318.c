#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(x<0)return 0;
    if(m==1)return 1;
    else
    return getways(x,m-1)+getways(x-(m-2)*5+(m-3)*3,m); }
int main() {
    int n;
    scanf("%d",&n);
    printf("%ld",getways(n,3));
    return 0; }
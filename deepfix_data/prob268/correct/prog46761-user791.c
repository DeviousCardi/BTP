#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
int coinarr[3]={1,3,5};
long getways(int x, int m) {
    if(x==0)return 0;
    if(x<0)return 0;
    if(m<=0&&x>=1)return 0;
    return getways(x,m-1)+getways(x-coinarr[m-1],m); }
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",getways(n,3));
    return 0; }
#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long p=1;
long getways(int x, int m) {
    if(x<0)
        return 0;
    if(x==0)
        return 1;
    if(m==1)
        return 1;
    if(m==2)
        return  x/3;
    return 0; }
int main() {
    int i,n,x[3];
    scanf("%d",&n);
    for(i=0;i<2;i++) {
        x[i]=getways(n,i+1); }
    printf("%ld",x[0]+x[1]);
    return 0; }
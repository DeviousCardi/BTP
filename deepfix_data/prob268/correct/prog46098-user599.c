#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(x<0)
        return 0;
    if(x==0)
        return 1;
    if(m==1)
        return 1;
    if(m==2)
        return x/3;
    if(m==3)
        return getways(x-2,2)+getways(x-5,3); }
int main() {
    int i,n;
    long int x[3];
    scanf("%d",&n);
    for(i=0;i<3;i++)
        x[i]=getways(n,i+1);
    printf("%ld",x[0]+x[1]+x[2]-1);
    return 0; }
#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(x<0)
        return 0;
    if(x==0)
        return 1;
    if (x==1)
        return 1;
    if(x==2)
        return 1;
    if(x==3 && m==1)
        return 1;
    if(x==3)
        return 2;
    if(m==3)
    return(getways(x-5,3)+getways(x-3,2)+getways(x-1,1));
    if(m==2)
    return(getways(x-3,2)+getways(x-1,1));
    if(m==1)
    return(getways(x-1,1)); }
int main() {
    int n;
    scanf("%d",&n);
    printf("%ld",getways(n,3));
    return 0; }
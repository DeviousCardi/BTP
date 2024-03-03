#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(m==1) {
        return 1; }
    if((m==3)&&(x>=5))
    return getways(x,m-1)+getways(x-5,m);
    else if(m==3)
    return getways(x,m-1);
    if((m==2)&&(x>=3))
    return getways(x,m-1)+getways(x-3,m);
    else if(m==2)
    return getways(x,m-1); }
int main() {
    int x;
    scanf("%d",&x);
    memarray[0][0]=1;
    printf("%d",getways(x,3));
    return 0; }
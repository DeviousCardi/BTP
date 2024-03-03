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
    else if(m==2){
        return getways(x-1,m)+getways(x-3,m); }
    else if(m==3)
        return getways(x-1,m)+getways(x-2,m)+getways(x-3,m); }
int main() {
    printf("%ld",getways(3,3));
    return 0; }
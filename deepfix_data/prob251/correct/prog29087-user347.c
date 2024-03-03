#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
int n;
long getways(int x, int m) {
    if(m==1)
    return 1;
    else if(m==2)
    return x/3;
    else {
        memarray[2]=0;
        for(int i=1;i<=n/5;i++) {
            memarray[2]=memarray[2]+getways(n-i*5,2); } } }
int main() {
    *memarray[1]=2;
    printf("%ld",*(memarray+1));
    return 0; }
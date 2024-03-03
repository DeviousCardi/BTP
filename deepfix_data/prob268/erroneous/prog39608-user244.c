#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(y==1) {
        return 1; }
    else if(y==2) {
        if(x-3>=0)
        return 1+*(memarray[1]+(x-3));
        else
        return 1; }
    else {
        if(x-5>=0)
        return *(memarray[1]+x)+*(memarray[2]+x-5);
        else
        return *(memarray[1]+x); } }
int main() {
    long n,i;
    scanf("%ld",&n);
    memarray[0]=(long*) malloc((n+1) * sizeof(long));
    memarray[1]=(long*) malloc((n+1) * sizeof(long));
    memarray[2]=(long*) malloc((n+1) * sizeof(long));
    *(memarray[0])=0;
    *(memarray[1])=0;
    *(memarray[2])=0;
    for(i=1;i<=n;i++) {
        *(memarray[0]+i)=getways(i,1);
        *(memarray[1]+i)=getways(i,2);
        *(memarray[2]+i)=getways(i,3); }
    return 0; }
#include <stdio.h>
#include <stdlib.h>
long memarray[3];
int n;
long getways(int x, int m) {
    if(m==1)
    return 1;
    else if(m==2)
    return x/3;
    else {
        for(int i=0;i<=n/5;i++) {
            memarray[2]=memarray[2]+getways(n-i*5,2); }
        return memarray[2]; } }
int main() {
    scanf("%d",&n);
    memarray[0]=getways(n,1);
    memarray[1]=getways(n,2);
    memarray[2]=0;
    memarray[2]=getways(n,3);
    printf("%ld",memarray[0]+memarray[1]+memarray[2]);
    return 0; }
#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(m==1)
    return 1;
    else if(m==2)
    return (x/3)+1;
    else if(m==3)
    return x/5+getways(x%5,2); }
int main() {
    int n;
    scanf("%d",&n);
    for(i=1;i<4;i++) {
        *memarray[i]=getways(x,i); }
    return 0; }
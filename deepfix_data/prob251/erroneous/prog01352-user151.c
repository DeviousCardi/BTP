#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    int i,j;
    if(x==0||x-5==0||x-3==0||x-1==0)
    return 1;
    if(getways(x-1,m))
    return 1;
    else if(getways(x-3,m))
    return 1
    else if(getways(x-5,m))
    return 1;
    else
    return 0; }
int main() {
    int x,y,z,i,y;
    scanf("%d",&x);
    for(i=1;i<4;i++)
    if(getways(x,i))
    printf("yes");
    else
    printf("no");
    return 0; }
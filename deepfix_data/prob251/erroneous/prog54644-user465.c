#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int y) {
    if(y==1) {
        if(x==1)
        return (*(memarray[y]+x=)1);
        else
        return getways(x-1,1); }
    else if(y==2) {
        if(x>3)
        return getways(x-3,2)+getways(x,1);
        else if(x==3)
        return 1 + getways(x,1);
        else
        return getways(x,1); }
    else if(y==3) {
        if(x>5)
        return getways(x-5,3) + getways(x,2);
        if(x==5)
        return 1 + getways(x,2);
        else
        return getways(x,2); } }
int main() {
    int n;
    scanf("%d",&n);
    printf("%ld",getways(n,3));
    return 0; }
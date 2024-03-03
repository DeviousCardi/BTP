#include <stdio.h>
#include <stdlib.h>
long getways(int x,int rem) {
    if(rem==x)
    return 1;
    else
    return getways(x,rem+1)+getways(x,rem+3)+getways(x,rem+5); }
int main() {
    int n;
    scanf("%d",&n);
    getways(n,0);
    return 0; }
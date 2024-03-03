#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int a,int b,int c) {
    if(1*a+3*b+5*c==x) {
        return 1; }
    if(a>x||3*b>x||5*c>x) {
        return 0; }
    return getways(x,a+1,b,c)+ getways(x,a,b+1,c)+ getways(x,a,b,c+1); }
int main() {
    int n;
    scanf("%d",&n);
    int m=getways(n,0,0,0);
    printf("%d",getways(n,0,0,0));
    return 0; }
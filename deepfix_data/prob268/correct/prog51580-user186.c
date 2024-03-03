#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x,int y,int m) {
    if(x==m)
    return 1;
    else if(x<m)
    return 0;
    else if(y==1) {
        return getways(x,1,m+1)+getways(x,2,m+3)+getways(x,3,m+5); }
    else if(y==2) {
        return getways(x,2,m+3)+getways(x,3,m+5); }
    else if(y==3) {
        return getways(x,3,m+5); } }
int main() {
    int n;
    scanf("%d",&n);
    printf("%ld",getways(n,1,0));
    return 0; }
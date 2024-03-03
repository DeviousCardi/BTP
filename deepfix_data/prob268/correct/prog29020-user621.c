#include <stdio.h>
#include <stdlib.h>
int count=0;
long *memarray[3];
long getways(int x, int m) {
    if(x==0) {
        count ++;
        return 0; }
    else if(x<0)
    return 0;
    if(m==1)
    getways(x-1,m);
    else if(m==2) {
        getways(x-1,m);
        getways(x-3,m); }
    else if(m==3) {
        getways(x-1,m);
        getways(x-3,m);
        getways(x-5,m); } }
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",count);
    return 0; }
#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(x==0)
        return 1;
    if(m==1) {
        return getways(x-1,m); }
    if(m==2) {
        return 0; } }
int main() {
    int i,n;
    scanf("%d",&n); {
        memarray[i]=getways(n,1); }
    return 0; }
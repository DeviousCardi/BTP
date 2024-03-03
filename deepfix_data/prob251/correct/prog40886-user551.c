#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(x==0) {
        return 1; }
    if(x>0&&m<=0) {
        return 0; }
    if(x<0) {
        return 0; }
    return getways(x-(2*m-1),m) + getways(x,m-1); }
int main() {
    int n,k;
    scanf("%d",&n);
    k = getways(n,3);
    printf("%d",k);
    return 0; }
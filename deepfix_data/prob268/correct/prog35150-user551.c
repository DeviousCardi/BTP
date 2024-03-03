#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    int r,ret;
    if(m==0) {
        return 1; }
    if(m<0) {
        return 0; }
    if(x<=0 && m>=1) {
        return 0; }
    r = 2*x-1;
    return getways(x-1,m) + getways(x,m-r); }
int main() {
    int n,i;
    scanf("%d",&n);
    for(i=0;i<3;i++) {
        memarray[i] = (long*)malloc(n*sizeof(long)); }
    printf("%ld",getways(3,n));
    return 0; }
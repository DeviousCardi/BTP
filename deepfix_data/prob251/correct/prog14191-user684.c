#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    static long count=0;
    int tem;
    if(m==1) {
        count++;
        return 1; }
    else if(m==2) {
        tem=x/3; }
    else {
            tem=x/5; }
    for(int i=tem;i>=0;i--) {
        if(m==2) {
            getways(x-3*tem,m-1); }
        else {
            getways(x-5%tem,m-1); } }
    return count; }
int main() {
    int n;
    scanf("%d",n);
    long x=getways(4,3);
    printf("%ld",x);
    return 0; }
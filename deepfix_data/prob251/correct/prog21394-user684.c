#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    static long count=0;
    int tem;
    if(m==1) {
        printf("1=%d\n",x);
        count++;
        return 1; }
    else if(m==2) {
        tem=x/3; }
    else {
            tem=x/5; }
    for(int i=tem;i>=0;i--) {
        if(m==2) {
            printf("3=%d ",i);
            getways(x-3*tem,m-1); }
        else {
            printf("5=%d ",i);
            getways(x-5%tem,m-1); } }
    return count; }
int main() {
    long x=getways(5,3);
    printf("%ld",x);
    return 0; }
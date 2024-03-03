#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(m==0) {
        return 1; }
    if(m<0) {
        return 0; }
    if(x<=0 && m>=1) {
        return 0; }
    return getways(x-1,m) + getways(x,m-x); }
int main() {
    int n;
    scanf("%d",&n);
    printf("%l",getways(3,n));
    return 0; }
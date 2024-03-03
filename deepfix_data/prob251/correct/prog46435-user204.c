#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int s[],int x, int m) {
    if(x<=0) {
        return 0; }
    if(m==1) {
        return 1; }
    return getways(s,x-s[m-1],m)+getways(s,x,m-1); }
int main() {
    int n;
    scanf("%d",&n);
    int s[3]={1,2,3};
    printf("%ld",getways(s,n,3));
    return 0; }
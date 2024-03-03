#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(x<0) return 0;
    if(x==0)    return 1;
    if(m==1)
        return 1;
    if(m==2) {
        return getways(x-1,2)+getways(x-3, 2); }
    if(m==3)
        return getways(x-1, 3)+getways(x-3,3)+getways(x-5,3); }
int main() {
    int n;
    scanf("%d", &n);
    printf("%ld", getways(n, 3));
    return 0; }
#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(x<0) return 0;
    if(x==0)    return 1;
    else {
        return (getways(x-1,3)+getways(x-3, 2)+getways(x-5, 3)); } }
int main() {
    int n;
    scanf("%d", &n);
    printf("%ld", getways(n, 3));
    return 0; }
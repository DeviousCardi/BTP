#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    switch(m) {
        case 1:
        return x;
        break;
        case 2:
        return ( getways((x-3),2) + getways((x-1),1) );
        break;
        case 3:
        return( getways((x-5),3) + getways((x-3),2) + getways((x-1),1);
        break; } }
int main() {
    int n;
    scanf("%d",&n);
    printf("%ld", getways(n,3));
    return 0; }
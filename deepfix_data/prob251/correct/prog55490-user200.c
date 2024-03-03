#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(x>0) {
    switch(m) {
        case 1:
        return 1;
        case 2:
        return ( getways((x-3),2) + getways((x-1),1) );
        case 3:
        return( getways((x-5),3) + getways((x-3),2) + getways((x-1),1) ); } }
    else if(x==0)
    return 1;
    else
    return 0; }
int main() {
    int n;
    scanf("%d",&n);
    printf("%ld", getways(n,3));
    return 0; }
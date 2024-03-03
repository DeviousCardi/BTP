#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long int power(int base,int n) {
    if(n==1)
    return base;
    else
    return base*power(base,n-1); }
long getways(int x, int m) {
    if(x>5) {
        return (power(3,5)*getways(x%5,2)) } }
int main() {
    int n;
    scanf("%d ",&n);
    long int r=getways(n,3);
    printf("%ld",r);
    return 0; }
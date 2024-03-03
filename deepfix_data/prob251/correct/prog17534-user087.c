#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long int power(int base,int n) {
    if(n==0)
    return 1;
    else
    return base*power(base,n-1); }
long int getways(int x, int m) {
    if(x>5) {
        return (power(3,5)*getways(x%5,3)); }
    else {
        if(x==4)
        return 2;
        else if(x==3)
        return 2;
        else if(x==2)
        return 1;
        else if(x==1)
        return 1;
        else if(x==0)
        return 1; } }
int main() {
    int n;
    scanf("%d ",&n);
    long int r=getways(n,3);
    printf("%ld",r);
    return 0; }
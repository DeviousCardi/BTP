#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long int c=0;
long getways(int x, int m) {
    static long int h=0;
    if(x==h) {
        c++;
        return 1; }
    else {
        if((h+1)<x) {
            if(!getways(x,m))
            return 1; }
        if((h+3)<x) {
            if(!getways(x,m))
            return 1; }
        if((h+5)<x) {
            if(!getways(x,m))
            return 1; } }
    return 0; }
int main() {
    int n;long int h;
    scanf("%d",&n);
    getways(n,3);
    printf("%ld",c);
    return 0; }
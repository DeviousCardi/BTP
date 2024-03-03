#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    int a,b,c;
    static int sum=0;
    if(x==0) {
        return sum; }
    if(x>0) {
        a=x/5;
        b=x-a;
        c=(x-a)%3
        printf("%d%d%d",a,b,c);
        return getways(x-1,m); } }
int main() {
        a=x/5;
        b=x-a;
        c=(x-a)%3
        printf("%d%d%d",a,b,c);
    return 0; }
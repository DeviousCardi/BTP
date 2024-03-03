#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(x=<0)
    return 0;
    if(m==2) {
        int d=x/3;
        return d; }
    if(m==3) {
        int e=x/5;
        int c=0;
        c=getways(x,2);
        return (1+c+getways(x-5,3)+1); } }
int main() {
    int n;
    scanf("%d",&n);
    printf("%ld",(getways(n,3)));
    return 0; }
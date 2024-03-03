#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    int static sum=0;
    if(x<0)
        return 0;
    if(x==0)
        return 1;
    if(m==1&&x>0)
        return sum;
    int i=0;
    while(x-5*i>0) {
        sum=sum+getways(x-5*i,2);
        i++; } }
int main() {
    int n;
    scanf("%d",&n);
    printf("%ld",getways(n,3));
    return 0; }
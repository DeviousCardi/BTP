#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
void comb(int x){
    if(x<0)
        return 0;
    if(x==0)
        return 1;
    return ( }
long getways(int x, int m) {
    if(x<0)
        return 0;
    if(x==0)
        return 1;
    if(m==1)
        return 1;
    else if(m==2){
        return getways(x-3,1)+getways(x-3,2); }
    else if(m==3)
        return getways(x-5,1)+getways(x-5,2)+getways(x-5,3); }
int main() {
    int n;
    scanf("%d",&n);
    printf("%ld",getways(n,3));
    return 0; }
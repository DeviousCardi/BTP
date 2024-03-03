#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int n,int y){
    if(y<=0) return 0;
    if(n==0)return 1;
    if(n<0) return 0;
    return getways(n-1,y)+getways(n-3,y-1)+getways(n-5,y-2); }
int main() {
    int n;
    scanf("%d",&n);
    long total=getways(n,1)+getways(n,2)+getways(n,3);
    printf("%ld",total);
    return 0; }
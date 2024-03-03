#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int n,int y){
    if(y<=0) return 0;
    if(n==0)return 1;
    if(n<0) return 0;
    if(y==3){
        return getways(n-5,y)+getways(n-3,y-1)+getways(n-1,y-2); }
    if(y==2){
        return getways(n-3,y)+getways(n-1,y-1); }
    else return getways(n-1,y); }
int main() {
    int n;
    scanf("%d",&n);
    long total=getways(n,3);
    printf("%ld",total);
    return 0; }
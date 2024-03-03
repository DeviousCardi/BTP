#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(x<0||x==0){
        return 0; }
    else if(x==1){
        return 1; }
    else if(m==3){
    return getways(x-1,m-1)+getways(x-3,m-1)+getways(x-5,m-1); }
    else if(m==2){
        return getways(x-1,m-1)+getways(x-3,m-1); }
    else if(m==1){
        return 1; } }
int main() {
    int n,x;
    scanf("%d",&n);
    x=getways(n,3);
    printf("%d",x);
    return 0; }
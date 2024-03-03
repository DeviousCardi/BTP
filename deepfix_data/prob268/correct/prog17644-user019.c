#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(x==0){
        return 1; }
    if(x>5){
        return(getways(x-5,m)+getways(x-3,m)+getways(x-1,m)); }
    if(x<5){
    m=2;
    return (getways(x-3,m)+getways(x-1,m)); }
    if(x<3){
    m=1;
    return (getways(x-1,m)); }
    return 0; }
int main() {
    int n;
    scanf("%d",&n);
    long m=getways(n,3);
    printf("%ld",m);
    return 0; }
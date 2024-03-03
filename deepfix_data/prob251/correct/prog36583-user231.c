#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    static long int d=0;
    if(x==0){
        d++;
        return 0; }
    if(x<0){
        return 0; }
    if(m==3){
        getways(x-5,3);
        getways(x,2); }
    if(m==2){
        getways(x-3,2);
        getways(x,1); }
    if(m==1){
        getways(0,1); }
    return d; }
int main() {
    int rup;
    scanf("%d",&rup);
    long int ways;
    ways=getways(rup,3);
    printf("%ld",ways);
    return 0; }
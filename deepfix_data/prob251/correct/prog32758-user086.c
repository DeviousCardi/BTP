#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(x<0) {
        return 0; }
    if(x==0) {
        return 1; }
    if(x>0) {
        if(m==3) {
           long sum=0;
           long j=x/5;
           for(long i=0;i<=j;i++) {
               sum+= getways(x-5*(j-i),2); }
        return sum; }
       if(m==2) {
        long sum=0;
        long j=x/3;
        for(long i=0;i<=j;i++) {
          sum+=getways(x-3*(j-i),1); }
       return sum; }
        if(m==1) {
            return 1; } } }
int main() {
    printf("%ld",getways(20,3));
    return 0; }
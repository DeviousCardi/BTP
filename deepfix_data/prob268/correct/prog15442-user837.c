#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
   if(m==1) {
       return 1; }
   if(x-2*m>0) {
       return getways(x,m)+getways(x-2*m,m+1); }
   if(x-2*m==0) {
       return getways(x,m)+1; }
   else {
       return getways(x,m); } }
int main() {
    long int count;
    int n;
    scanf("%d",&n);
    count=getways(n,3);
    printf("%ld",count);
    return 0; }
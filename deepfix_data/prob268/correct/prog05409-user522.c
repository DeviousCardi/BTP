#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    int n;
    if(m==3) {
        n=x/5;
        for(int i=1;i<=n;i++) {
          if(((x-5*n)/3)==0)
          *memarray[m-1]+=1; }
        *memarray[m-1]+=n;
        return getways(x,m-1); }
     if(m==2) {
        n=x/3;
        *memarray[m-1]+=n;
        return getways(x,m-1); }
    if(m==1) {
        *memarray[m-1]+=1;
        return getways(x,m-1); }
    if(m==0) {
        return (*memarray[0]+*memarray[1]+*memarray[2]); } }
int main() {
    long n,y=3,count=0;
    scanf("%ld",&n);
    for(int i=0;i<3;i++) {
        *memarray[i]=0; }
    count=getways(n,y);
    printf("%ld",count);
    return 0; }
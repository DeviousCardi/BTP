#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    int n;
    static long count=0;
    if(m==3) {
        n=x/5;
        for(int i=1;i<=n;i++) {
          if(((x-5*i)%3)==0)
          count=count+1; }
        printf("%ld",count);
        count=count+n;
        printf("%ld",count);
        return getways(x,m-1); }
     if(m==2) {
        n=x/3;
        count=count+n;
        return getways(x,m-1); }
    if(m==1) {
        count=count+1;
        return getways(x,m-1); }
    if(m==0) {
        return count; } }
int main() {
    long n,y=3,count=0;
    scanf("%ld",&n);
    count=getways(n,y);
    printf("%ld",count);
    return 0; }
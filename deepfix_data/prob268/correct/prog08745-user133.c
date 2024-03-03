#include <stdio.h>
#include <stdlib.h>
long getways(int,int);
long *memarray[3];
long c=0,s1=0,s2=0;
long getways(int x, int m) {
    if(x<0)
    return 0;
    if(x==0) {
        c++;
        return 0; }
    if(m==1){
    getways(x-1,m); }
    else if(m==2) {
        getways(x-3,m);
        getways(x-1,m); }
    else if(m==3) {
        getways(x-5,m);
        getways(x-3,m);
        getways(x-1,m); }
    return c; }
int main() {
     long s=0;
     long n;
     scanf("%ld",&n);
     for(int i=0;i<3;i++) {
         memarray[i]=(long*)malloc(n*sizeof(long));
         for(int j=0;j<n;j++)
         *(memarray[i]+j)=0; }
     for(int i=1;i<=3;i++)
         s=getways(n,i);
    printf("%ld",s);
    return 0; }
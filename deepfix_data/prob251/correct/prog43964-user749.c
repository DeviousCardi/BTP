#include <stdio.h>
#include <stdlib.h>
int mon[3]={1,3,5};
int count=0;
long *memarray[3];
long getways(int x, int m) {
    if(memarray[m-1][x]!=-1){
        return memarray[m-1][x]; }
    else{
        if(m==1){
            memarray[m-1][x]=count+1;
            return count+1; }
        else{
            int max_mon=x/mon[m-1];
            int i;
            for(i=0;i<max_mon;i++){
               count=count+getways(x-mon[m-1]*i,m-1); }
           memarray[m-1][x]=count;
           return count; } } }
int main() {
   int n,i,j;
   scanf("%d",&n);
   for(i=0;i<3;i++){
       memarray[i]=(long*)malloc(n*sizeof(long)); }
   for(i=0;i<3;i++){
       for(j=0;j<n;j++){
           memarray[i][j]=-1; } }
   printf("%ld",getways(n,3));
    return 0; }
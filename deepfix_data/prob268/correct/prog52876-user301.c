#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
int arr[3]={1,3,5};
long total=0;
long n;
long getways(int x, int m) {
    int p,i;
   if(x==0) {
       printf("%d",x);
       total ++; }
   else {
       printf("%d",x);
       for(i=m-1;i>=0;i--) {
           if(memarray[m-1][x]!=0) {
               return memarray[m-1][x-arr[i]]; }
           else {
               printf("%d",x);
               p=getways(x-arr[i],m);
               memarray[m-1][x-arr[i]]=p; } } }
   if(x==n) {
       return total; } }
int main() {
    long k;
    scanf("%ld",&n);
    memarray[2]=(long *)calloc(n,sizeof(long));
    k=getways(n,3);
    printf("%ld",k);
    return 0; }
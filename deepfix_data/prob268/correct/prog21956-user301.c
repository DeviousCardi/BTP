#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
int arr[3]={1,3,5};
long total=0;
long n;
long getways(int x, int m) {
    int p,i;
   if(x==0) {
       total ++; }
   else {
       for(i=m-1;i>=0;i--) {
           if(memarray[m][x]!=0) {
               return memarray[m][x-arr[i]]; }
           else {
               printf("%d",x);
               p=getways(x-arr[i],m);
               memarray[m][x-arr[i]]=p; } } }
   if(x==n) {
       return total; } }
int main() {
    scanf("%ld",&n);
    memarray[2]=(long *)calloc(n,sizeof(long));
    printf("%ld",getways(n,3));
    return 0; }
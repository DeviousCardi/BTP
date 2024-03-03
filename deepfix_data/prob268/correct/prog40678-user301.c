#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
int arr[3]={1,3,5};
long total=0;
long n;
long getways(int x, int m) {
    int p,i,l;
   if(x==0) {
       total ++; }
   else if(x>0) {
       for(i=m-1;i>=0;i--) { {
               p=getways(x-arr[i],i+1);
               memarray[m-1][x-arr[i]]=p; } } }
   else {
       return 0; }
   if(x==n) {
       return total; } }
int main() {
    long k,i;
    scanf("%ld",&n);
    for(i=0;i<3;i++)
    memarray[i]=(long *)calloc(n+1,sizeof(long));
    k=getways(n,3);
    printf("%ld",k);
    return 0; }
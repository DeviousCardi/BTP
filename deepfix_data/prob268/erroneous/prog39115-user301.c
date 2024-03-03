#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
int arr[3]={1,3,5};
printf("%d %d %d",arr[0],arr[1],arr[2]);
long total=0;
long n;
long getways(int x, int m) {
    int p,i,l;
   if(x==0) {
       total ++; }
   else if(x>0) {
       for(i=m-1;i>=0;i--) {
           printf("%d",x); {
               printf("%d ",x);
               p=getways(x-arr[i],m);
               memarray[m-1][x-arr[i]]=p; } } }
   else {
       return 0; }
   if(x==n) {
       return total; } }
int main() {
    long k;
    scanf("%ld",&n);
    memarray[2]=(long *)calloc(n+1,sizeof(long));
    k=getways(n,3);
    printf("%ld",k);
    return 0; }
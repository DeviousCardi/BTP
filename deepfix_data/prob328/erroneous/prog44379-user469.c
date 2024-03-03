#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 int fib(int t){
     if(t<=1)
     return t;
      else
     return fib(t-1)+fib(t-2); }
 int search(A[],left,right,key){
     int mid;
   if(left>right)
   return 0;
   mid=(left+right)/2;
   if(A[mid]==key)
   return 1;
   if(A[mid]>key)
   return search(A[],left,mid-1,key);
   else
   return search(A[],mid+1,right,key); }
int main() {
   int i,j,y;
   int A[20];
   int m,p;
   for(i=0;i<=19;i++){
       A[i]=fib(i);}
   scanf("%d",&m);
   for(j=1;j<=m;j++){
      scanf("%d",&p);
     y=search(A[],0,19,p);
     if(y==1)
     printf("yes");
     else
     printf("no"); } }
#include <stdio.h>
#include <stdlib.h>
 long* memarray[3];
 long getways(int x, int m) {
     if(m==0)
       return 1;
     if(x-2*m-1>0) {
         return getways(x,m-1)+getways(x-2*m-1,m); }
     else {
         return getways(x,m-1); } }
 int main() {
     long int ans;
     int n;
     scanf("%d",&n);
     ans=getways(n,2);
     printf("%ld",ans); }
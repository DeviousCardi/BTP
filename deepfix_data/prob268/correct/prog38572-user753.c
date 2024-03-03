#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    int c=0;
   if(m==1)
   return 1;
   if(m==2)
   return getways(x,1)+(x/3);
   if(m==3) {
       for(int i=1;i<=(x/5);i++) {
           c+=getways(x-(5*i),2); }
       return getways(x,2)+c; } }
int main() {
    int x;
    scanf("%d",&x);
    printf("%li",getways(x,3));
    return 0; }
#include <stdio.h>
#include <stdlib.h>
int catalan(int num) {
    int i,sum;
    if(num==0) {
    sum=1; }
    else {
        for(i=0;i<num;i++) {
          sum= sum + catalan(num-1-i)*catalan(i); } }
   return sum; }
int main() {
     int tests,i,j=0,num;
     scanf("%d\n",&tests);
        for(i=1;i<=tests;i++) {
            scanf("%d\n",&num);
            while(num>=catalan(j)) {
             j++; }
         printf("%d\n",catalan(j));
         j=0; }
      return 0; }
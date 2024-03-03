#include <stdio.h>
int main(){
   char by[4];
   int i,sum=0;
   for (i=0;i<4;i++) {
        scanf("%c",by+i);
        by[i] = by[i] - '0';
        sum=sum+by[i]; }
   i=2016;
   while(i%sum!=0) {
       i++; }
       printf("%d",i);
    return 0; }
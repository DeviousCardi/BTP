#include <stdio.h>
int main(){
   char by[4];
   int i,sum=0;
   for (i=0;i<4;i++) {
        scanf("%c",&by[i]);
        printf("%c\n",by[i]);
        by[i] = by[i] - '0';
        sum=sum+by[i]; }
   printf("%d",sum);
    return 0; }
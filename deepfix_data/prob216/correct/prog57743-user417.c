#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,first=0,second=1,next,c;
    scanf("%d",&n);
    for(c=0;c<n;c++) {
         if(c<=1)
         next=c;
         else
         {   second=next;
             next=first+second;
             first=second; }
         printf("%d\n",next); }
    return 0; }
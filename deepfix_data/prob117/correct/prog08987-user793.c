#include <stdio.h>
#include <stdlib.h>
int hanoi(int n);
 int k=0;
int main()
{   int m=0;
    int ar[20];
   int t;
   scanf("%d",&t);
   int flag=0;
   int i;
   for(i=0;i<t;i++) {
       scanf("%d",&ar[i]); }
   int j;
   for(i=0;i<t;i++)
   {    flag=0;
       for(j=0;j<30;j++) {
           m=k;
         if(hanoi(j)==ar[i]){
            printf("yes\n");
            flag=1;
            break; } }
        if(flag==0)
          printf("no\n"); }
   return 0; }
int hanoi(int n) {
    if(n>0)
     return (2*hanoi(n-1)+1);
    return 0; }
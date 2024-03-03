#include <stdio.h>
#include <stdlib.h>
 int hanoi(int n,char a,char c,char b);
 int k=0;
int main()
{   int m=0;
    int ar[20];
   int t;
   scanf("%d",&t);
   int flag=0;
   int i;
   for(i=0;i<t;i++) {
       scanf("%ld",&ar[i]); }
   int j;
   for(i=0;i<t;i++) {
       for(j=1;j<20;j++) {
           m=k;
         if((hanoi(j,'p','q','r')-m)==ar[i]){
            printf("yes\n");
            flag=1;
            break; } }
        if(flag==0)
          printf("no\n"); }
   return 0; }
int hanoi(int n,char a,char c,char b) {
   if(n>0) {
       hanoi(n-1,a,b,c);
       hanoi(n-1,b,c,a);
       k++; }
   return k; }
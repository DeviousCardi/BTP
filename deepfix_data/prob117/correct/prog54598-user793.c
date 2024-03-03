#include <stdio.h>
#include <stdlib.h>
double hanoi(int n,char a,char c,char b);
double k=0;
int main() {
   double ar[20];
   int t;
   scanf("%d",&t);
   int flag=0;
   int i;
   for(i=0;i<t;i++) {
       scanf("%lld",&ar[i]); }
   int j;
   for(i=0;i<t;i++) {
       for(j=1;j<20;j++) {
         if(hanoi(j,'p','q','r')==ar[i]){
            printf("yes\n");
            flag=1;
            break; } }
        if(flag==0)
          printf("no\n"); }
   return 0; }
double hanoi(int n,char a,char c,char b) {
   if(n>0) {
       hanoi(n-1,a,b,c);
       hanoi(n-1,b,c,a);
       k++; }
   return k; }
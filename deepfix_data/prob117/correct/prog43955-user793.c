#include <stdio.h>
#include <stdlib.h>
long int hanoi(int n,char a,char c,char b);
long int k=0;
int main() {
   long int ar[20];
   int t;
   scanf("%d",&t);
   int flag=0;
   int i;
   for(i=0;i<t;i++) {
       scanf("%ld",&ar[i]); }
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
long int hanoi(int n,char a,char c,char b) {
   if(n>0) {
       hanoi(n-1,a,b,c);
       hanoi(n-1,b,c,a);
       k++; }
   return k; }
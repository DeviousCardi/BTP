#include <stdio.h>
#include <stdlib.h>
long int hanoi(int n,char a,char c,char b);
long int k=0;
int main() {
   printf("%ld",hanoi(3,'p','q','r'));
   return 0; }
long int hanoi(int n,char a,char c,char b) {
   if(n>0) {
       hanoi(n-1,a,b,c);
       hanoi(n-1,b,c,a);
       k++; }
   return k; }
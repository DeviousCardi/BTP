#include<stdio.h>
int main() {
   int n;
   printf("Enter the number: ");
   scanf("%d", &n);
   int i;
   for(i = 0; i < n; i++) {
      int j;
      for(j = 0; j < n-1-i; j++) {
         printf(" "); }
      for(j = 0; j < 2*i+1; j++) {
         printf("*"); }
      printf("\n"); }
   return 0; }
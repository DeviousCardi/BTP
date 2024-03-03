#include <stdio.h>
#include <stdlib.h>
void swap(int a, int b) {
      int t;
      t = a; a=b; b =t;
      printf("From swap ");
      printf("a = %d ",a);
      printf("b= %d\n",b); }
int main() {
	       int a = 1, b = 2;
   swap(a,b);
   printf("From main ");
   printf("a = %d ",a);
   printf("b= %d\n",b);
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int Tower_of_Hanoi(int n,char a,char c,char b) {
      int count=0;
    if (n>0) {
      Tower_of_Hanoi(n-1,a,b,c);
      count++;
      count+=Tower_of_Hanoi(n-1,c,b,a); }
    return count; }
int main() {
	return 0; }
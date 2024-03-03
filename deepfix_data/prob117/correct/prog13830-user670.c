#include <stdio.h>
#include <stdlib.h>
void hanoi(int n,char a,char b,char c)
{ int count=0;
    if(n==0) {
    return 0; }
   else if(n>0) {
      hanoi(n-1,a,c,b);
      hanoi(1,a,b,c);
      hanoi(n-1,b,a,c);
      count++; } }
int main() {
 int t,i,j,k;
 for(i=0;i<t;i++) { }
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int main() {
         int n;
         scanf("%d",&n);
         char pole1='A';
         char pole2='B';
         char pole3='C';
        out(n,pole1,pole2,pole3);
        move(pole1,pole3);
	return 0; }
void out(int n,char from ,char to ,char use) {
      if(n==1)
        move(from,to);
        else
       out(n-1,from,use,to); }
      */
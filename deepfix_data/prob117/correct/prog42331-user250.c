#include <stdio.h>
#include <stdlib.h>
int TOH(int n,char A,char B,char C) {
     int count;
     if(n>0) {
         count=TOH(n-1,A,C,B);
         count++;
         count+=TOH(n-1,C,B,A); }
     return count; }
int main() {
	int i;
	int c[25];
	char A,B,C;
	for(i=1;i<25;i++) {
	    c[i]=TOH(i,A,B,C); }
	return 0; }
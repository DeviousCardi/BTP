#include <stdio.h>
#include <stdlib.h>
int hanoi(int a,char A,char B,char C);
int main() {
	int t,i,k;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&k);
	   printf("%d",hanoi(k,'a','b','c')); }
	return 0; }
int hanoi(int a,char x,char z,char y)
{   int c=0;
    if(a==1) {
        c++; }
    else {
        hanoi(a-1,x,y,z);
        c++;
        hanoi(a-1,y,z,x); }
    return c; }
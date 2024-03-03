#include <stdio.h>
#include <stdlib.h>
int hanoi(int a,char A,char B,char C);
int main() {
	int t,i,k;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&k);
	   printf("%d\n",hanoi(k,'a','b','c')); }
	return 0; }
int hanoi(int a,char x,char y,char z) {
    int c=0;
    if(a==1) {
       printf("%d",c+1); }
    else {
        hanoi(a-1,x,z,y);
        c++;
        hanoi(a-1,y,x,z); }
    return c; }
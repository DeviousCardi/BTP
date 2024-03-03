#include <stdio.h>
#include <stdlib.h>
void hanoi(int a,char A,char B,char C);
int main() {
	int t,i,k;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&k);
	   hanoi(k,'a','b','c'); }
	return 0; }
void hanoi(int a,char x,char y,char z) {
    if(a==1) {
        printf("move plate from %c to %c\n",x,z); }
    else {
        hanoi(a-1,x,z,y);
        printf("move plate from %c to %c\n",x,z);
        hanoi(a-1,y,z,x); } }
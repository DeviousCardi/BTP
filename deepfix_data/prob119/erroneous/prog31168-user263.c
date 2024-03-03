#include <stdio.h>
#include <stdlib.h>
int main() {
	int t;
	for(i=0;i<t;i++) {
	    scanf("%d",&k)
	    printf("%d\n",hanoi(k,'a','b','c')); }
	return 0; }
int hanoi(int a,char A,char B,char C) {
    if(a==1) {
        printf("move plate from %c to %c",A,C); }
    else {
        hanoi(a-1,A,C,B);
        printf("move plate from %c to %c",A,B);
        hanoi(a-1,C,B,A); } }
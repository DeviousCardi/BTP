#include <stdio.h>
#include <stdlib.h>
void hanoi(char A,char C, char B,int n) {
    if(n==1) {
        printf("%c->%c\n",A,C); }
    else {
        hanoi(A,B,C,n-1);
        hanoi(A,C,B,n-1); } }
int main() {
    int n;
    scanf("%d",&n);
    hanoi('a','b','c',n);
	return 0; }
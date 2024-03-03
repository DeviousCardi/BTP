#include <stdio.h>
#include <stdlib.h>
void hanoi(char A,char C, char B,int n) {
    if(n==0)
        return ;
    else {
        printf("%c->%c",A,B);
        hanoi(A,B,C,n-1);
        hanoi(B,C,A,n-1); } }
int main() {
    int n;
    scanf("%d",&n);
    hanoi('a','b','c',n);
	return 0; }
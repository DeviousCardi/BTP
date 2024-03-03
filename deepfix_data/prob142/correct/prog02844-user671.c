#include <stdio.h>
#include <stdlib.h>
void move(char From, char To) {
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" "); }
    printf("%c->%c", From, To);
    num++; }
void hanoi(char a,char b,char c,int n){
    if(n==0)return;
    a='A';b='B';c='C';
    hanoi(a,b,c,n-1);
    move(a,b);
    move(c,a);
    move(b,c);
    hanoi(a,b,c,n-1);
    return; }
int main() {
	int n;
	char A=0,B=0,C=0;
	scanf("%d",&n);
	hanoi(A,B,C,n);
	return 0; }
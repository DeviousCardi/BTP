#include <stdio.h>
#include <stdlib.h>
void hanoi(int n,char A,char C,char B) {
    if(n==1) {
        move(A,B);
        move(B,C); }
    if(n>1) {
        hanoi(n-1,A,C,B);
        move(A,B);
        hanoi(n-1,C,A,B);
        move(B,C);
        hanoi(n-1,A,C,B); } }
void move(char From, char To) {
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" "); }
    printf("%c->%c", From, To);
    num++; }
int main() {
	int n;
	char a,b,c;
	a=A;
	b=B;
	c=C
	scanf("%c",&n);
	hanoi(n,A,C,B);
	return 0; }
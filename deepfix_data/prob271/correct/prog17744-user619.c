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
void hanoi(char A,char B,char C,int n) {
    if(n==0) {
        return; }
    hanoi(A,C,B,n-1);
    hanoi(C,A,B,n-1);
    move(A,B);
    move(B,C); }
int main() {
	int N;
	char A,B,C;
	A='A';
	B='B';
	C='C';
	scanf("%d",&N);
	hanoi(A,B,C,N);
	return 0; }
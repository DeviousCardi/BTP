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
void hanoi(int n,char A,char B,char C) {
    hanoi(n-1,A,C,B);
    hanoi(n-1,B,A,C);
    move(A,B);
    hanoi(n-1,C,B,A);
    move(B,C);
    hanoi(n-1,A,C,B);
    hanoi(n-1,B,A,C); }
int main() {
	int N;
	scanf("%d",&N);
	hanoi(N,'A','B','C');
	return 0; }
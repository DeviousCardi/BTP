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
void hanoi(int n,char A,char C,char B) {
    hanoi(n,A,B,C);
    move(A,C);
    hanoi(n,B,C,A); }
int main() {
	int n;
	scanf("%d",&n);
	void hanoi(n,'A','C','B');
	return 0; }
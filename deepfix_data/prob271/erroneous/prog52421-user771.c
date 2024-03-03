#include <stdio.h>
#include <stdlib.h>
void hanoi(char A,char B,char C) { }
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
	int N;
	scanf("%d",&N);
	char x='A'.y='B',c='C';
	hanoi(x,y,z);
	return 0; }
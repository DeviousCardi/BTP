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
    if(n!=0) {
        hanoi(n-1,'B','A','C');move('A','B');
        hanoi(n-2,'A','C','B');move('B','C');
        hanoi(n-3,'B','A','C');move('A','B');
        hanoi(n-4,'C','B','A');move('C','A'); } }
int main() {
	int n;
	scanf("%d",&n);
	hanoi(n,'A','B','C');
	return 0; }
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
void Hanoi(int len, char A, char C, char B) {
    if(len==1) {
        move(A,B);
        move(B,C);
        return; }
    Hanoi(len-1,A,C,B);
    move(A,B);
    Hanoi(len-1,C,B,A); }
int main() {
	int n;
	scanf("%d",&n);
	Hanoi(n,'A','C','B');
	return 0; }
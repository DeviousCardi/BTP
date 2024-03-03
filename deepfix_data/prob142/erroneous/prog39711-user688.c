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
void T(int N, char A, char C, char B){
    if(N==1) {
        move(A, B);
        move(B, C); }
    else {
        move(A, B);
        T(N-1, C, A, B);
        move(B, C);
        T(N-1, A, C, B); }
int main() {
	char A, B, C;
	int N;
	scanf("%d", &N);
	A = 'A';
	B = 'B';
	C = 'C';
	T(N-1, A, C, B);
	return 0; }
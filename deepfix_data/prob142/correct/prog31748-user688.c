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
void T(int N, char s, char h, char e){
    if(N==0) return;
    else if(N==1) {
        move(s, h); }
    else {
        T(N-1, s,h, e);
        T(N-1, h, e, s);
        move(s, h);
        T(N-1, e, s, h);
        move(h, e);
        T(N-1, s, h, e);
        T(N-1, h, e, s); } }
int main() {
	char A, B, C;
	int N;
	scanf("%d", &N);
	A = 'A';
	B = 'B';
	C = 'C';
	T(N, A, C, B);
	return 0; }
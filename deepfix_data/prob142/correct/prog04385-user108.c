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
void print(int r) {
	if(r%3==0) {
	    move('A', 'B');
	} else if (r%3==1) {
	    move('B', 'C');
	} else {
	    move('C', 'A'); } }
void Hanoi(int n, int r) {
    if(n==1) {
        print(r);
        print(r+1);
    } else {
        Hanoi(n-1, r);
        print(r);
        half_Hanoi(n-1, r+2);
        print(r+1);
        Hanoi(n-1, r); } }
void half_Hanoi(int n, int r) {
    Hanoi(n-1, r);
    print(r);
    Hanoi(n-1, r+2); }
int main() {
	int N;
	scanf("%d", &N);
	Hanoi(N, 0);
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int n;
void hanoi(int n, char A, char B, char C);
void move(char From, char To) {
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" "); }
    printf("%c->%c", From, To);
    num++; }
void hanoi(int n, char A, char B, char C){
    if(n==0){
        return; }
    hanoi(n-1, A, B, C);
    move(A,B);
    move(B,C);
    hanoi(n-1, B, A, C);
    move(B,A);
    move(A,C); }
int main() {
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	return 0; }
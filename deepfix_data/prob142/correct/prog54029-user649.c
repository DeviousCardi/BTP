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
void hanoi(int n, char From, char To, char Help) {
    if(n==1)
        move(From, To);
    else
        hanoi(n-1, From, Help, To);
        hanoi(n, From, To, Help);
        hanoi(n-1, Help, To, From); }
int main() {
	hanoi(3, 'A', 'B', 'C');
	return 0; }
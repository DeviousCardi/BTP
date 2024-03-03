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
int hanoi(int N,char A,char C,char B) {
    if(N==0)
    return 0;
    hanoi(N-1,A,B,C);
    move(A,B);
    move(B,C);
    hanoi(N-1,B,C,A); }
int main() {
	int N;
	scanf("%d",&N);
	hanoi(N,'A','C','B');
	return 0; }
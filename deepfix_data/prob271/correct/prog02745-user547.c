#include <stdio.h>
#include <stdlib.h>
char A,B,C;
void move(char From, char To) {
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" "); }
    printf("%c->%c", From, To);
    num++; }
void hanoi(char A, char B, char C, int N){
    if(N==0) return;
    move(A,B);
    move(B,C);
    printf("%d\n",N);
    if(N==1) return;
    hanoi(A,B,C,N-2); }
int main() {
    int N;
    scanf("%d\n",&N);
    hanoi(A,B,C,N);
	return 0; }
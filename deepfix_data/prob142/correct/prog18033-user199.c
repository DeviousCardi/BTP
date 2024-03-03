#include <stdio.h>
#include <stdlib.h>
void move(char From, char To) {
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" "); }
    printf("A%c->%cB", From, To);
    num++; }
void hanoi(char A, char B,char C, int N){
    if(N==1){
        move(A,B);
        return; }
    hanoi(A,C,B,N-1);
    move(A,B);
    hanoi(C,B,A,N-1); }
int main() {
	int N;
	char A=A,B=B,C=C;
	scanf("%d",&N);
	move(A,B);
	return 0; }
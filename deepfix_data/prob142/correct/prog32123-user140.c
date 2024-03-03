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
void Hanoi(char A,char C, char B,int N) {
    if(N==0)
    return;
    Hanoi(A,B,C,N-1);
    move(A,B);
    Hanoi(B,C,A,N-1);
    move(B,C); }
int main() {
	int N;
	scanf("%d",&N);
	if(N!=0)
	Hanoi('A','C','B',N);
	return 0; }
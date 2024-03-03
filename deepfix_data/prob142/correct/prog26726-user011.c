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
void reversehanoi(char C,char B,char A,int N) {
    if(N==0)
    return;
    reversehanoi(C,B,A,N-1);
    hanoi(A,C,B,N-1);
    move(C,A);
    hanoi(B,A,C,N-1);
    reversehanoi(C,B,A,N-1); }
void hanoi(char A,char B,char C,int N)
{if(N==0)
return;
hanoi(A,B,C,N-1);
move(A,B);
reversehanoi(C,B,A,N-1);
move(B,C);
hanoi(A,B,C,N-1); }
int main() {
	int N;
	scanf("%d",&N);
	hanoi('A','B','C',N);
	return 0; }
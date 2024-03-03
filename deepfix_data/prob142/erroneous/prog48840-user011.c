#include <stdio.h>
#include <stdlib.h>
void hanoi(char A,char B,char C,int N)
{if(N==0)
return;
hanoi(A,B,C,N-1);
move(A,B);
hanoi(C,B,A,N-1);
move(B,C);
hanoi(A,B,C,N-1); }
void move(char From, char To) {
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" "); }
    printf("%c->%c", From, To);
    num++; }
int main() {
	int N;
	scanf("%d",&N);
	hanoi(A,B,C,N);
	return 0; }
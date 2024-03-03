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
void hanoi(int N,char A,char B,char C) {
    if(N==0)
        return;
    else if(N==1)
        move(A,C);
    else {
            hanoi(N-1,A,C,B);
            move(A,C);
            hanoi(N-1,B,A,C); } }
int main() {
	int N;
	scanf("%d",&N);
	char x='A',y='B',z='C';
	hanoi(N,x,y,z);
	return 0; }
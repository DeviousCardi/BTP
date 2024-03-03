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
void hanoi(int N,char A ,char C ,char B) {
    if(N==0)
    return;
    hanoi(N-1,A,B,C);
    move(A,B);
    hanoi(N-1,C,A,B);
    move(B,C);
    hanoi(N-1,A,C,B); }
int main() {
	int n;
	scanf("%d",&n);
	char x='A',y='B',z='C';
	hanoi(n,x,z,y);
	return 0; }
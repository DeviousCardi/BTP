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
void hanoi(int N,char A,char C,char B ) {
    if(N==0)
    return;
    hanoi(N-1,A,B,C);
   if((A=='A'&&B=='B'&&C=='C')||(A=='B'&&B=='C'&&C=='A')||(A=='C'&&B=='A'&&C=='B')) {
    move(A,B);
    move(B,C); }
   else if(A=='B'&&B=='A') {
       move(A,C);
       move(C,B);
       move(B,A);
       move(C,A); }
    hanoi(N-1,B,C,A); }
int main() {
	int N;
	scanf("%d",&N);
	hanoi(N,'A','C','B');
	return 0; }
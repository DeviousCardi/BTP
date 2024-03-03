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
void hanoi(int n,char A,char C,char B) {
    if(n==0)
    return;
    if(n==1) {
        move(A,B);
        move(B,C);
        return; }
    move(A,B);
    move(B,C);
    hanoi(n-1,A,B,C);
    move(C,A);
    hanoi(n-1,B,C,A);
    move(A,B);
    move(B,C); }
int main() {
	int n;
	scanf("%d",&n);
	char A,B,C;
	A='A';B='B';C='C';
	hanoi(n,A,C,B);
	return 0; }
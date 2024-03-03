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
    if(n==0) return;
    hanoi(n-1,A,C,B);
    if(A-B!=1) move(A,B);
    else move(A,C);
    hanoi(n-1,C,A,B);
    move(B,C);
    hanoi(n-1,A,C,B); }
int main() {
	int n;
	scanf("%d",&n);
	hanoi(n,'A','C','B');
	return 0; }
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
void hanoi(int n,char A,char B,char C) {
    if(n==0)
    return;
    move(A,B);
    hanoi(n-1,B,C,A);
    move(A,B);
    hanoi(n-1,A,B,C); }
int main() {
    int n;
    char a='A',b='B',c='C';
	scanf("%d",&n);
	hanoi(n,a,b,c);
	return 0; }
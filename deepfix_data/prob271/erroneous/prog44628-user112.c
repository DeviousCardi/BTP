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
void tow(int n,char x,char y) {
    char A,B,C;
    if(n==1) {
        A=x;B=y;
        move(A,B);
        move(A,C); }
    else {
         tow(n-1,A,C);
         move(A,B);
         tow(n-1,C,A);
         move(B,C);
         tow(n-1,A,C); } }
int main() {
	int n;
	scanf("%d",&n);
	tow(n,A,C);
	return 0; }
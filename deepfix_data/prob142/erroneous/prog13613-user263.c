#include <stdio.h>
#include <stdlib.h>
void hanoi(int n, char x, char y, char z);
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
	int n;
	scanf("%d",&n);
	if(n==1) {
	   hanoi(n,'A','B','C');
	   hanoi(n,'B','C','A'); }
	else
	hanoi(n,'A','B','C');
	return 0; }
void hanoi(int n, char A,char B,char C) {
     if(n==0)
     return;
     if(n==1) {
      move(A,B); }
     else {
     hanoi(n-1,A,B,C);
     hanoi(n-1,B,C,A)
     move(A,B);
     hanoi(n-1,C,A,B);
     move(B,C);
     hanoi(n-1,A,B,C);
     hanoi(n-1,B,C,A); } }
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void move(char From, char To) {
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" "); }
    printf("%c->%c", From, To);
    num++; }
void hanoi(char A,char C,char B,int n) {
    if(n==0)
        return;
    hanoi(A,B,C,n-1);
    if(A=='A' && C=='C') {
        hanoi(B,C,A,n-1);
        move(A,B);
        hanoi(C,B,A,n-1);
        hanoi(B,A,C,n-1);
        move(B,C);
        hanoi(A,B,C,n-1); }
    else
        move(A,C);
    hanoi(B,C,A,n-1); }
int main() {
    int n;
	scanf("%d",&n);
	hanoi('A','C','B',n);
	return 0; }
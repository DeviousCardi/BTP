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
void hanoi(int n,char A,char B,char c) {
    hanoi(n-1,A,B,C);
    move(A,C);
    hanoi(n-1,B,C,A);
    hanoi(n-1,C,A,B); }
int main() {
    int n;
    char A,B,C;
    scanf("%d",&n);
    scanf("%c%c%c",&A,&B,&C);
    hanoi(n,A,B,C);
	return  0; }
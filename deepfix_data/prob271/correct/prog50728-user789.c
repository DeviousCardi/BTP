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
void hanoi(int n,char x,char y,char z) {
    hanoi(n-1,y,x,z);
    move(x,y);
    move(y,z); }
int main() {
    int n;
    char A,B,C;
    scanf("%d",&n);
    hanoi(n,A,B,C);
	return 0; }
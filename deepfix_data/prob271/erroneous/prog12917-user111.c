#include <stdio.h>
#include <stdlib.h>
void disc(int n) {
    if(n==1) {
        move(A,B);
        move(B,C); } }
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
	disc(n);
	return 0; }
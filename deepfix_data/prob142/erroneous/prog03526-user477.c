#include <stdio.h>
#include <stdlib.h>
void move(char From, char To) {
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" "); }
    move(B,C);
    printf("%c->%c", From, To);
    num++; }
int main() {
	int n;
	char A='A',B='B',C='C';
	scanf("%d",&n);
	move(A,C);
	return 0; }
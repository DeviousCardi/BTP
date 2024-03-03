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
void hanoi(char from, char to,char using, int n){ }
int main() {
	int n;
	scanf("%d",&n);
	hanoi('A','C','B', n);
	return 0; }